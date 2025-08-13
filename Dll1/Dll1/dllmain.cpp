#include <windows.h>
#include <thread>
#include <iostream>
#include "Dishonored2/globals.h"
#include "Dishonored2/Console/Console.h"
#include "Hooks/D2Hooks.h"

using namespace std;

HINSTANCE hinst_dll = 0;
std::thread begin_thread;

HMODULE g_hModule;

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

bool Begin(uint64_t qModuleHandle) {
	g_hModule = GetModuleHandleA("Dishonored2.exe");

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

    // Do whatever here, entry point to the entire mod
    AllocConsole();
	EnableAnsiColors();
    freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
    freopen_s((FILE**)stdin, "CONOUT$", "w", stdin);

	D2Hooks::InitializeHooks();

	D2::Console::g_bAllowDebugCommands = (int*)(MODULE_ADDR+0x32cd1c8);

    *D2::Console::g_bAllowDebugCommands = 1;
    
    return true;
};

void Shutdown() {
    D2Hooks::UninitializeHooks();
    FreeLibrary(hinst_dll);
    FreeConsole();
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    switch (fdwReason) {
    case (DLL_PROCESS_ATTACH): {
        DisableThreadLibraryCalls(hinstDLL);
        begin_thread = std::thread(Begin, (uint64_t)hinstDLL);
        break;
    };
    case (DLL_PROCESS_DETACH): {
        begin_thread.detach();
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