#include "dh2Globals.h"
#include "idCmdSystemLocal/idCmdSystemLocal.h"
#include "idPrintListener/idPrintListener.h"

HMODULE g_hModule;
HWND g_hWnd;
int* g_showConsole = nullptr;
bool* g_bConsoleEnabled = nullptr;
int* g_consoleVisLevel = nullptr;
int* g_bDeveloperMode = nullptr;

namespace DH2
{
	idCmdSystemLocal* g_idCmdSystemLocal = nullptr;
	idPrintListener** g_idPrintListeners = nullptr;
}
