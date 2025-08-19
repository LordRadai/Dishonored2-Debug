#include <windows.h>
#include <thread>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Dishonored2/dh2Globals.h"
#include "Hooks/DH2Hooks.h"

using namespace std;

HINSTANCE g_hInstDll = 0;

extern "C" UINT_PTR directinput_create_proc = 0;
extern "C" __declspec(dllexport) HRESULT WINAPI DirectInput8Create(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID* ppvOut, LPUNKNOWN punkOuter);
static decltype(&DirectInput8Create) g_originalDinput8Create;

bool InitialiseDllInstance()
{
	printf_s("Initializing DLL instance...\n");

    char dllpath[MAX_PATH];
    GetSystemDirectoryA(dllpath, MAX_PATH);
    strcat_s(dllpath, "\\dinput8.dll");
    g_hInstDll = LoadLibraryA(dllpath);

    if (!g_hInstDll)
    {
        MessageBoxA(NULL, "Failed to load original DLL", "Error", MB_ICONERROR);
		printf_s("Failed to load original DLL: %s\n", dllpath);
        return false;
    };

    g_originalDinput8Create = (decltype(&DirectInput8Create))GetProcAddress(g_hInstDll, "DirectInput8Create");
    if (!g_originalDinput8Create)
    {
        MessageBoxA(NULL, "Failed to load original DLL", "Error", MB_ICONERROR);
		FreeLibrary(g_hInstDll);
        return false;
    }

	printf_s("DLL instance initialized successfully.\n");

    return true;
}

bool InitializeMinHook()
{
	printf_s("Initializing MinHook...\n");

    MH_STATUS status = MH_Initialize();
    if (status != MH_OK)
    {
        std::string sStatus = MH_StatusToString(status);
        printf_s("Minhook initialization failed.");

        return false;
    }

	printf_s("MinHook initialized successfully.\n");

    return true;
}

bool BindConsole()
{
    if (AllocConsole())
    {
        freopen_s((FILE**)stdin, "CONIN$", "r", stdin);
        freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
        freopen_s((FILE**)stderr, "CONOUT$", "w", stderr);

        SetStdHandle(STD_INPUT_HANDLE, GetStdHandle(STD_INPUT_HANDLE));
        SetStdHandle(STD_OUTPUT_HANDLE, GetStdHandle(STD_OUTPUT_HANDLE));
        SetStdHandle(STD_ERROR_HANDLE, GetStdHandle(STD_ERROR_HANDLE));

        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        if (hOut == INVALID_HANDLE_VALUE) return false;

        DWORD dwMode = 0;
        if (!GetConsoleMode(hOut, &dwMode)) return false;

        dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        SetConsoleMode(hOut, dwMode);

        return true;
    }

    return false;
}

bool Begin(uint64_t qModuleHandle) 
{
#ifdef _CONSOLE
    if (!BindConsole())
        MessageBoxA(NULL, "Failed to allocate console", "Error", MB_ICONERROR);
#endif

    if (!DH2::GetGlobalVariables())
        return false;

    if (!InitialiseDllInstance())
        fprintf_s(stderr, "Failed to initialize DLL instance.\n");

    if (!InitializeMinHook())
        fprintf_s(stderr, "Failed to initialize MinHook.\n");

    if (!DH2Hooks::InitializeHooks())
        fprintf_s(stderr, "Failed to initialize game hooks.\n");
    
    return true;
};

void Shutdown() 
{
    DH2Hooks::FinalizeHooks();

    FreeLibrary(g_hInstDll);
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) 
{
    switch (fdwReason) 
    {
    case (DLL_PROCESS_ATTACH): 
        DisableThreadLibraryCalls(hinstDLL);
		Begin((uint64_t)hinstDLL);
        break;
    case (DLL_PROCESS_DETACH):
		Shutdown();
        break;
    }

    return true;
}

// Define original dll export and call the original function
extern "C" __declspec(dllexport) HRESULT WINAPI DirectInput8Create(
    HINSTANCE hinst,
    DWORD dwVersion,
    REFIID riidltf,
    LPVOID* ppvOut,
    LPUNKNOWN punkOuter)
{
    return g_originalDinput8Create(hinst, dwVersion, riidltf, ppvOut, punkOuter);
}