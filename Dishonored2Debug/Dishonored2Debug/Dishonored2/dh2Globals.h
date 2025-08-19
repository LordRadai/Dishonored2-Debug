#pragma once
#include <Windows.h>

#define MODULE_ADDR ((UINT64)g_hModule)

namespace DH2
{
	class idCmdSystemLocal;
	class idPrintListener;

	bool GetGlobalVariables();
};

extern HMODULE g_hModule;
extern HWND g_hWnd;
extern int* g_showConsole;
extern bool* g_bConsoleEnabled;
extern int* g_consoleVisLevel;
extern int* g_bDeveloperMode;

extern DH2::idCmdSystemLocal* g_idCmdSystemLocal;
extern DH2::idPrintListener** g_idPrintListeners;