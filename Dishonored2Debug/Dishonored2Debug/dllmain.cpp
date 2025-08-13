#include <windows.h>
#include <thread>
#include <iostream>
#include "Dishonored2/globals.h"
#include "Dishonored2/Console/Console.h"
#include "Dishonored2/idCmdSystemLocal/idCmdSystemLocal.h"
#include "Hooks/D2Hooks.h"

using namespace std;

HINSTANCE hinst_dll = 0;
std::thread g_BeginThread;
std::thread g_TerminalThread;

HMODULE g_hModule;
DH2::idCmdSystemLocal* g_idCmdSystemLocal;

std::atomic<bool> g_ConsoleThreadRunning{ true };

extern "C" UINT_PTR directinput_create_proc = 0;
extern "C" __declspec(dllexport) HRESULT __cdecl DirectInput8Create(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID* ppvOut, LPUNKNOWN punkOuter);
static decltype(&DirectInput8Create) original_dinput8_create;

void EnableAnsiColors()
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
}

void TerminalInputThread()
{
    std::string line;
    while (g_ConsoleThreadRunning)
    {
        std::getline(std::cin, line);
        if (line.empty()) continue;

        g_idCmdSystemLocal->ExecuteCommand(line.c_str());
    }
}

void StartTerminalConsole()
{
    AllocConsole();

    freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
    freopen_s((FILE**)stdin, "CONIN$", "r", stdin);
    freopen_s((FILE**)stderr, "CONOUT$", "w", stderr);

    SetStdHandle(STD_OUTPUT_HANDLE, GetStdHandle(STD_OUTPUT_HANDLE));
    SetStdHandle(STD_INPUT_HANDLE, GetStdHandle(STD_INPUT_HANDLE));
    SetStdHandle(STD_ERROR_HANDLE, GetStdHandle(STD_ERROR_HANDLE));

    SetConsoleTitle(L"Debug Console");
    EnableAnsiColors();

	std::cout << "Debug Console Started.\n";

    g_TerminalThread = std::thread(TerminalInputThread);
}

void StopTerminalConsole()
{
    g_ConsoleThreadRunning = false;
    if (g_TerminalThread.joinable())
        g_TerminalThread.join();
}

bool Begin(uint64_t qModuleHandle) {
	g_hModule = GetModuleHandleA("Dishonored2.exe");

    StartTerminalConsole();

    char dllpath[MAX_PATH];
    GetSystemDirectoryA(dllpath, MAX_PATH);
    strcat_s(dllpath, "\\dinput8.dll");
    hinst_dll = LoadLibraryA(dllpath);

    MH_STATUS status = MH_Initialize();
    if (status != MH_OK)
    {
        std::string sStatus = MH_StatusToString(status);
        printf_s("Minhook init failed.");
        return false;
    }

    if (!hinst_dll)
    {
        MessageBoxA(NULL, "Failed to load original DLL", "Error", MB_ICONERROR);
        return false;
    };

    original_dinput8_create = (decltype(&DirectInput8Create))GetProcAddress(hinst_dll, "DirectInput8Create");
    if (!original_dinput8_create)
    {
        MessageBoxA(NULL, "Failed to load original DLL", "Error", MB_ICONERROR);
        return false;
    }

	D2Hooks::InitializeHooks();

	DH2::Console::g_bAllowDebugCommands = (int*)(MODULE_ADDR+0x32cd1c8);
	g_idCmdSystemLocal = *(DH2::idCmdSystemLocal**)(MODULE_ADDR+0x228bae0);

    *DH2::Console::g_bAllowDebugCommands = 1;
    
    return true;
};

void Shutdown() {
    D2Hooks::UninitializeHooks();
	StopTerminalConsole();
    FreeLibrary(hinst_dll);
    FreeConsole();
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    switch (fdwReason) {
    case (DLL_PROCESS_ATTACH): {
        DisableThreadLibraryCalls(hinstDLL);
        g_BeginThread = std::thread(Begin, (uint64_t)hinstDLL);
        break;
    };
    case (DLL_PROCESS_DETACH): {
        g_BeginThread.detach();
		g_TerminalThread.detach();
		Shutdown();
        break;
    };
    }
    return TRUE;
}

// Define original dll export and call the original function
extern "C" __declspec(dllexport) HRESULT __cdecl DirectInput8Create(
    HINSTANCE hinst,
    DWORD dwVersion,
    REFIID riidltf,
    LPVOID* ppvOut,
    LPUNKNOWN punkOuter)
{
    return original_dinput8_create(hinst, dwVersion, riidltf, ppvOut, punkOuter);
}