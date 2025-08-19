#pragma once
#include <Windows.h>
#include <cstdint>

#define MODULE_ADDR ((UINT64)g_hModule)

namespace DH2
{
	class idCommonLocal;
	class idCmdSystemLocal;
	class idPrintListener;

	/**
	 * \brief Retrieve internal global variables pointers.
	 * Call this before doing anything else.
	 */
	bool GetGlobalVariables();
};

extern HMODULE g_hModule;
extern HWND* g_hWnd;
extern uint32_t* g_showEngineConsole;
extern bool* g_bEngineConsoleEnabled;
extern uint32_t* g_consoleTextBufferSize;
extern HWND* g_voidEngineConsoleEditHwnd;

enum EngineConsoleVisLevel : uint32_t
{
	CON_HIDDEN,
	CON_NORMAL,
	CON_MINIMIZED,
	CON_CONSOLE_WINDOW
};

extern uint32_t* g_engineConsoleVisLevel;
extern uint32_t* g_bDeveloperMode;
extern uint32_t* g_featureLevel;

extern DH2::idCmdSystemLocal* g_idCmdSystemLocal;
extern DH2::idPrintListener** g_idPrintListeners;
extern DH2::idCommonLocal* g_idCommonLocal;