#include "D2Hooks.h"
#include <stdio.h>
#include "../Dishonored2/Console/Console.h"
#include "../Dishonored2/globals.h"

bool D2Hooks::InitializeHooks()
{
	HookManager::CreateHook(MODULE_ADDR+0x166830, &D2::Console::pConsoleOutputTarget, D2::Console::hDebugConsoleOutput, &D2::Console::pConsoleOutput, "ConsoleOutput");

	return true;
}

void D2Hooks::UninitializeHooks()
{
	HookManager::RemoveHook(&D2::Console::pConsoleOutputTarget, "ConsoleOutput");
}