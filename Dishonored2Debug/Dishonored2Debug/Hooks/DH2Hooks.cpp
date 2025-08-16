#include "DH2Hooks.h"
#include "Dishonored2/idCommonLocal/idCommonLocal.h"
#include "Dishonored2/idCmdSystemLocal/idCmdSystemLocal.h"
#include "Dishonored2/idConsoleLocal/idConsoleLocal.h"
#include "Dishonored2/idMainThread/idMainThread.h"
#include "Dishonored2/dh2Globals.h"
#include "extern.h"

namespace DH2hk
{
	namespace idCommonLocal
	{
		DH2::idCommonLocal::oStartup_t pStartup = nullptr;

		void __fastcall hStartup(DH2::idCommonLocal* self, int param2, uint64_t param3, char* commandLine)
		{
			printf_s("Dishonored 2: idCommonLocal::Init invoked with command line: %s\n", commandLine);

			g_hWnd = *(HWND*)(MODULE_ADDR + 0x3137f40);
			DH2::idConsole::g_bDeveloperMode = (int*)(MODULE_ADDR + 0x32cd1c8);
			DH2::g_idCmdSystemLocal = *(DH2::idCmdSystemLocal**)(MODULE_ADDR + 0x228bae0);

			// The game has a terribly unsafe thing, a string element in a string array that has a null pointer (0x1). We set it to nullptr to avoid crashes.
			*(char**)(MODULE_ADDR + 0x22aba68) = nullptr;

			*DH2::idConsole::g_bDeveloperMode = 1;
			
			pStartup(self, param2, param3, commandLine);
		}
	}

	namespace idMainThread
	{
	}
}

bool DH2Hooks::InitializeHooks()
{
	HookManager::Hookless(&DH2::idCommonLocal::GetVTableAddr()[1], &DH2hk::idCommonLocal::hStartup, &DH2hk::idCommonLocal::pStartup, "idCommonLocal::Init");

	HookManager::CreateHook(MODULE_ADDR+0x166830, &DH2::idConsole::pConsoleOutputTarget, DH2::idConsole::hDebugConsoleOutput, &DH2::idConsole::pConsoleOutput, "ConsoleOutput");

	return true;
}

void DH2Hooks::UninitializeHooks()
{
	HookManager::RemoveHook(&DH2::idMainThread::GetVTableAddr()[1], "idMainThread::Startup");
	HookManager::RemoveHook(&DH2::idConsole::pConsoleOutputTarget, "ConsoleOutput");
}