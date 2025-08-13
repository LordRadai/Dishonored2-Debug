#pragma once
#include <Windows.h>

namespace DH2
{
	class idCmdSystemLocal;
};

extern HMODULE g_hModule;
extern DH2::idCmdSystemLocal* g_idCmdSystemLocal;

#define MODULE_ADDR ((UINT64)g_hModule)