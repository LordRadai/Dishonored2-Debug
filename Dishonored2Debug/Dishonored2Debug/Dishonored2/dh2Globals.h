#pragma once
#define MODULE_ADDR ((UINT64)g_hModule)
#include <Windows.h>

extern HMODULE g_hModule;
extern HWND g_hWnd;
extern int* g_showConsole;

namespace DH2
{
	class idCmdSystemLocal;

	extern idCmdSystemLocal* g_idCmdSystemLocal;
};