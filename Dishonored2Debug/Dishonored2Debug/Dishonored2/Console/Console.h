#pragma once
#include <Windows.h>
#include <stdio.h>
#include <string>
#include <unordered_map>

namespace DH2
{
	std::string ConvertD2ConsoleMessageToStandardFmt(const char* message);

	namespace Console
	{
		extern int* g_bAllowDebugCommands;

		typedef void(_fastcall* oConsoleOutput)(const char* message, ...);

		extern oConsoleOutput pConsoleOutput;
		extern oConsoleOutput pConsoleOutputTarget;

		void hDebugConsoleOutput(const char* message, ...);
	}
}