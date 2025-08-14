#include <windows.h>
#include <thread>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Dishonored2/dh2Game.h"
#include "Dishonored2/idCmdSystemLocal/idCmdSystemLocal.h"
#include "Dishonored2/globals.h"
#include "Hooks/D2Hooks.h"
#include "Console/TerminalConsoleImpl.h"

using namespace std;

HINSTANCE g_hInstDll = 0;
std::thread g_BeginThread;
DH2::dh2Game* g_dh2Game = nullptr;
TerminalConsoleImpl* g_TerminalConsole = nullptr;

extern "C" UINT_PTR directinput_create_proc = 0;
extern "C" __declspec(dllexport) HRESULT __cdecl DirectInput8Create(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID* ppvOut, LPUNKNOWN punkOuter);
static decltype(&DirectInput8Create) original_dinput8_create;

bool Begin(uint64_t qModuleHandle) {
	g_hModule = GetModuleHandleA("Dishonored2.exe");

	g_dh2Game = new DH2::dh2Game();
	g_TerminalConsole = new TerminalConsoleImpl();

    char dllpath[MAX_PATH];
    GetSystemDirectoryA(dllpath, MAX_PATH);
    strcat_s(dllpath, "\\dinput8.dll");
    g_hInstDll = LoadLibraryA(dllpath);

    MH_STATUS status = MH_Initialize();
    if (status != MH_OK)
    {
        std::string sStatus = MH_StatusToString(status);
        printf_s("Minhook init failed.");
        return false;
    }

    if (!g_hInstDll)
    {
        MessageBoxA(NULL, "Failed to load original DLL", "Error", MB_ICONERROR);
        return false;
    };

    original_dinput8_create = (decltype(&DirectInput8Create))GetProcAddress(g_hInstDll, "DirectInput8Create");
    if (!original_dinput8_create)
    {
        MessageBoxA(NULL, "Failed to load original DLL", "Error", MB_ICONERROR);
        return false;
    }

	D2Hooks::InitializeHooks();

	g_dh2Game->Initialize();
	g_TerminalConsole->Initialize();
    
    return true;
};

void Shutdown() 
{
    D2Hooks::UninitializeHooks();

	g_dh2Game->Shutdown();
	g_TerminalConsole->Shutdown();

    delete g_dh2Game;
	delete g_TerminalConsole;

    FreeLibrary(g_hInstDll);
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