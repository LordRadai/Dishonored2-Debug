#pragma once
#define MODULE_ADDR ((UINT64)g_hModule)
#include <Windows.h>

extern HMODULE g_hModule;

namespace DH2
{
	class idCmdSystemLocal;

	extern idCmdSystemLocal* g_idCmdSystemLocal;
};