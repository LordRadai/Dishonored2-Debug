#include <windows.h>
#include <thread>
#include <iostream>
#include <stdio.h>
#include <string>
#include <d3d11.h>
#include "imgui.h"
#include "imgui_impl_dx11.h"
#include "imgui_impl_win32.h"
#include "Dishonored2/idCmdSystemLocal/idCmdSystemLocal.h"
#include "Dishonored2/dh2Globals.h"
#include "Hooks/DH2Hooks.h"
#include "Console/ImGuiConsole/ImGuiConsoleImpl.h"
#include "extern.h"

using namespace std;

HINSTANCE g_hInstDll = 0;

ImGuiConsoleImpl* g_Console = nullptr;

ID3D11Device* g_device = nullptr;
ID3D11DeviceContext* g_context = nullptr;
ID3D11RenderTargetView* g_renderTargetView = nullptr;

bool g_bImGuiInitialized = false;
bool g_bShowStyleEditor = false;

extern "C" UINT_PTR directinput_create_proc = 0;
extern "C" __declspec(dllexport) HRESULT WINAPI DirectInput8Create(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID* ppvOut, LPUNKNOWN punkOuter);
static decltype(&DirectInput8Create) g_originalDinput8Create;

typedef HRESULT(__stdcall* Present_t)(IDXGISwapChain* swapChain, UINT syncInterval, UINT flags);
Present_t pPresent = nullptr;

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);
WNDPROC pWndProc = nullptr;
LRESULT __stdcall WndProcHook(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    if ((GetAsyncKeyState(VK_CONTROL) & 0x8000) && (GetAsyncKeyState(VK_F10) & 1))
		g_bShowStyleEditor = !g_bShowStyleEditor;

    if (ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
        return true;
    
    return CallWindowProc(pWndProc, hWnd, uMsg, wParam, lParam);
}

bool InitImGui(IDXGISwapChain* swapChain)
{
    if (g_hWnd && !g_bImGuiInitialized)
    {
        // Get device & context
        if (SUCCEEDED(swapChain->GetDevice(__uuidof(ID3D11Device), (void**)&g_device)))
        {
            printf_s("Initializing ImGui...\n");

            g_device->GetImmediateContext(&g_context);

            // Get window handle
            DXGI_SWAP_CHAIN_DESC sd;
            swapChain->GetDesc(&sd);

            // Hook WndProc for ImGui input
            pWndProc = (WNDPROC)SetWindowLongPtr(g_hWnd, GWLP_WNDPROC, (LONG_PTR)WndProcHook);

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
            ImGui_ImplWin32_Init(g_hWnd);
            ImGui_ImplDX11_Init(g_device, g_context);

            g_bImGuiInitialized = true;

			printf_s("ImGui initialized successfully with HWND %ld.\n", g_hWnd);

            return true;
        }
    }

    return false;
}

HRESULT __stdcall hkPresent(IDXGISwapChain* swapChain, UINT syncInterval, UINT flags)
{
    if (!g_bImGuiInitialized && InitImGui(swapChain))
    {
        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

        if (g_Console)
            g_Console->Draw();

        if (g_bShowStyleEditor)
            ImGui::ShowStyleEditor();

        ImGui::Render();
        g_context->OMSetRenderTargets(1, &g_renderTargetView, nullptr);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    }

    return pPresent(swapChain, syncInterval, flags);
}

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

    if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
    {
        kiero::bind(8, (void**)&pPresent, hkPresent); // Present hook
    }

	printf_s("MinHook initialized successfully.\n");

    return true;
}

bool AllocateConsole()
{
    if (AllocConsole())
    {
        freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
        freopen_s((FILE**)stdin, "CONIN$", "r", stdin);
        freopen_s((FILE**)stderr, "CONOUT$", "w", stderr);

        SetStdHandle(STD_OUTPUT_HANDLE, GetStdHandle(STD_OUTPUT_HANDLE));
        SetStdHandle(STD_INPUT_HANDLE, GetStdHandle(STD_INPUT_HANDLE));
        SetStdHandle(STD_ERROR_HANDLE, GetStdHandle(STD_ERROR_HANDLE));

        return true;
    }

    return false;
}

bool Begin(uint64_t qModuleHandle) 
{
    AllocConsole();

    g_hModule = GetModuleHandleA("Dishonored2.exe");

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
    DH2Hooks::UninitializeHooks();

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