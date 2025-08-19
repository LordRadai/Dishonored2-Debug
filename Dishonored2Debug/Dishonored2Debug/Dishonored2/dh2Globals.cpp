#include "dh2Globals.h"
#include "idCmdSystem/idCmdSystem.h"
#include "idPrintListener/idPrintListener.h"
#include "idConsole/idConsole.h"
#include "idCommon/idCommon.h"

HMODULE g_hModule;
HWND g_hWnd;

uint32_t* g_bDeveloperMode = nullptr;
uint32_t* g_featureLevel = nullptr;

uint32_t* g_showEngineConsole = nullptr;
bool* g_bEngineConsoleEnabled = nullptr;
uint32_t* g_engineConsoleVisLevel = nullptr;

DH2::idCmdSystemLocal* g_idCmdSystemLocal = nullptr;
DH2::idPrintListener** g_idPrintListeners = nullptr;
DH2::idCommonLocal* g_idCommonLocal = nullptr;
DH2::idConsoleLocal* g_idConsoleLocal = nullptr;

namespace DH2
{
	bool GetGlobalVariables()
	{
		g_hModule = GetModuleHandleA("Dishonored2.exe");

		if (!g_hModule)
		{
			MessageBoxA(NULL, "Failed to get module handle for Dishonored2.exe", "Error", MB_ICONERROR);
			return false;
		}

		g_hWnd = *(HWND*)(MODULE_ADDR + 0x3137f40);
		g_bDeveloperMode = (uint32_t*)(MODULE_ADDR + 0x32cd1c8);
		g_featureLevel = (uint32_t*)(MODULE_ADDR + 0x32c7ed4);

		g_engineConsoleVisLevel = (uint32_t*)(MODULE_ADDR + 0x3135948);
		g_showEngineConsole = (uint32_t*)(MODULE_ADDR + 0x25ae9b8);
		g_bEngineConsoleEnabled = (bool*)(MODULE_ADDR + 0x32c7ee9);

		g_idCmdSystemLocal = *(DH2::idCmdSystemLocal**)(MODULE_ADDR + 0x228bae0);
		g_idPrintListeners = (DH2::idPrintListener**)(MODULE_ADDR + 0x32ccf98);
		g_idCommonLocal = *(DH2::idCommonLocal**)(MODULE_ADDR + 0x25af110);
		g_idConsoleLocal = *(DH2::idConsoleLocal**)(MODULE_ADDR + 0x25b34d0);

		return true;
	}
}