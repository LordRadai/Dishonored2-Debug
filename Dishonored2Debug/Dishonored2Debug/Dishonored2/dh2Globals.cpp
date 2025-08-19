#include "dh2Globals.h"
#include "idCmdSystemLocal/idCmdSystemLocal.h"
#include "idPrintListener/idPrintListener.h"

HMODULE g_hModule;
HWND g_hWnd;
int* g_showConsole = nullptr;
bool* g_bConsoleEnabled = nullptr;
int* g_consoleVisLevel = nullptr;
int* g_bDeveloperMode = nullptr;
DH2::idCmdSystemLocal* g_idCmdSystemLocal = nullptr;
DH2::idPrintListener** g_idPrintListeners = nullptr;

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
		g_bDeveloperMode = (int*)(MODULE_ADDR + 0x32cd1c8);
		g_consoleVisLevel = (int*)(MODULE_ADDR + 0x3135948);
		g_showConsole = (int*)(MODULE_ADDR + 0x25ae9b8);
		g_bConsoleEnabled = (bool*)(MODULE_ADDR + 0x32c7ee9);

		g_idCmdSystemLocal = *(DH2::idCmdSystemLocal**)(MODULE_ADDR + 0x228bae0);
		g_idPrintListeners = (DH2::idPrintListener**)(MODULE_ADDR + 0x32ccf98);

		return true;
	}
}