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
		typedef void(_fastcall* oSys_PrintToConsoleWindow_t)(const char* msg);

		void Sys_ShowConsole(uint32_t visLevel, bool show);
	}
}

namespace DH2hk
{
	namespace Console
	{

		/**
		* \brief We rewrite this because in the game's SendMessage function there is no timeout handling.
		* This is a decompilation of the game's own Sys_PrintToConsoleWindow but using SendMessageTimeoutA to avoid hangs.
		*
		* \param input
		*/
		void hkSys_PrintToConsoleWindow(const char* msg);

		void hkDebugConsoleOutput(const char* message, ...);

		void hkSys_ShowConsole(uint32_t visLevel, bool show);
	}
}
