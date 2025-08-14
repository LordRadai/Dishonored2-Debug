#include <windows.h>
#include <thread>
#include <iostream>
#include <stdio.h>
#include <string>
#include <d3d11.h>
#include "imgui.h"
#include "imgui_impl_dx11.h"
#include "imgui_impl_win32.h"
#include "Dishonored2/dh2Game.h"
#include "Dishonored2/idCmdSystemLocal/idCmdSystemLocal.h"
#include "Dishonored2/globals.h"
#include "Hooks/D2Hooks.h"
#include "Console/ImGuiConsole/ImGuiConsoleImpl.h"
#include "extern.h"

using namespace std;

HINSTANCE g_hInstDll = 0;
std::thread g_BeginThread;
DH2::dh2Game* g_dh2Game = nullptr;
ImGuiConsoleImpl* g_Console = nullptr;
uint32_t g_ResizeWidth = 0;
uint32_t g_ResizeHeight = 0;

ID3D11Device* g_device = nullptr;
ID3D11DeviceContext* g_context = nullptr;
ID3D11RenderTargetView* g_renderTargetView = nullptr;
HWND g_hwnd = nullptr;
bool g_imguiInitialized = false;

bool g_bDone = false;

extern "C" UINT_PTR directinput_create_proc = 0;
extern "C" __declspec(dllexport) HRESULT __cdecl DirectInput8Create(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID* ppvOut, LPUNKNOWN punkOuter);
static decltype(&DirectInput8Create) original_dinput8_create;

typedef HRESULT(__stdcall* PresentFn)(IDXGISwapChain* swapChain, UINT syncInterval, UINT flags);
PresentFn oPresent = nullptr;

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);
WNDPROC oWndProc = nullptr;
LRESULT __stdcall WndProcHook(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
        return true;

    return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

void InitImGui(IDXGISwapChain* swapChain)
{
    if (!g_imguiInitialized)
    {
        // Get device & context
        if (SUCCEEDED(swapChain->GetDevice(__uuidof(ID3D11Device), (void**)&g_device)))
        {
            g_device->GetImmediateContext(&g_context);

            // Get window handle
            DXGI_SWAP_CHAIN_DESC sd;
            swapChain->GetDesc(&sd);
            g_hwnd = sd.OutputWindow;

            // Hook WndProc for ImGui input
            oWndProc = (WNDPROC)SetWindowLongPtr(g_hwnd, GWLP_WNDPROC, (LONG_PTR)WndProcHook);

            // Create render target view
            ID3D11Texture2D* backBuffer = nullptr;
            swapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&backBuffer);
            g_device->CreateRenderTargetView(backBuffer, nullptr, &g_renderTargetView);
            backBuffer->Release();

            // Setup ImGui context
            IMGUI_CHECKVERSION();
            ImGui::CreateContext();
            ImGuiIO& io = ImGui::GetIO();
            io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

            ImGui::StyleColorsDark();

            // Init Win32 + DX11 backends
            ImGui_ImplWin32_Init(g_hwnd);
            ImGui_ImplDX11_Init(g_device, g_context);

            g_imguiInitialized = true;
        }
    }
}

HRESULT __stdcall hkPresent(IDXGISwapChain* swapChain, UINT syncInterval, UINT flags)
{
    if (!g_imguiInitialized)
        InitImGui(swapChain);

    // Start new ImGui frame
    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    if (g_Console)
	    g_Console->Draw();

    // Render
    ImGui::Render();
    g_context->OMSetRenderTargets(1, &g_renderTargetView, nullptr);
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

    return oPresent(swapChain, syncInterval, flags);
}

bool Begin(uint64_t qModuleHandle) {
	g_hModule = GetModuleHandleA("Dishonored2.exe");

	g_dh2Game = new DH2::dh2Game();

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

    if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
    {
        kiero::bind(8, (void**)&oPresent, hkPresent); // index 8 = Present
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

    while (!g_imguiInitialized) Sleep(100);
    g_Console = new ImGuiConsoleImpl();

    g_Console->Initialize();

    while (!g_bDone)
    {
		g_Console->Update();
    }
    
    return true;
};

void Shutdown() 
{
    g_bDone = true;

    D2Hooks::UninitializeHooks();

	g_dh2Game->Shutdown();
	g_Console->Shutdown();

    delete g_dh2Game;
	delete g_Console;

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