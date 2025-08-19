#pragma once
#include <Windows.h>
#include <stdio.h>
#include <string>
#include <unordered_map>

namespace DH2
{
	namespace Console
	{
		typedef void(_fastcall* oConsoleOutput_t)(const char* message, ...);
		typedef void(_fastcall* oSys_ShowConsole_t)(uint32_t visLevel, bool show);

		void Sys_ShowConsole(uint32_t visLevel, bool show);
		void Sys_PrintToConsoleWindow(const char* msg);
	}
}
