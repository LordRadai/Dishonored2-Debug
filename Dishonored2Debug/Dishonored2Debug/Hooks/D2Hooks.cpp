#include "D2Hooks.h"
#include <stdio.h>
#include "../Dishonored2/idConsole/idConsole.h"
#include "../Dishonored2/globals.h"

bool D2Hooks::InitializeHooks()
{
	HookManager::CreateHook(MODULE_ADDR+0x166830, &DH2::idConsole::pConsoleOutputTarget, DH2::idConsole::hDebugConsoleOutput, &DH2::idConsole::pConsoleOutput, "ConsoleOutput");

	return true;
}

void D2Hooks::UninitializeHooks()
{
	HookManager::RemoveHook(&DH2::idConsole::pConsoleOutputTarget, "ConsoleOutput");
}