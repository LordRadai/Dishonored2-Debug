#pragma once
#define MODULE_ADDR ((UINT64)g_hModule)
#include <Windows.h>

extern HMODULE g_hModule;
extern HWND g_hWnd;
extern int* g_showConsole;
extern bool* g_bConsoleEnabled;
extern int* g_consoleVisLevel;
extern int* g_bDeveloperMode;

namespace DH2
{
	class idCmdSystemLocal;
	class idPrintListener;

	extern idCmdSystemLocal* g_idCmdSystemLocal;
	extern idPrintListener** g_idPrintListeners;
};