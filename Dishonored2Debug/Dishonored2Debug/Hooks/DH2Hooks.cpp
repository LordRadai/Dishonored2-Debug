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
		DH2::idCommonLocal::oInit_t pInit = nullptr;

		void __fastcall hkInit(DH2::idCommonLocal* self, int param2, uint64_t param3, char* commandLine)
		{			
			g_hWnd = *(HWND*)(MODULE_ADDR + 0x3137f40);
			DH2::idConsole::g_bDeveloperMode = (int*)(MODULE_ADDR + 0x32cd1c8);
			DH2::g_idCmdSystemLocal = *(DH2::idCmdSystemLocal**)(MODULE_ADDR + 0x228bae0);

			// The game has a terribly unsafe thing, a string element in a string array that has a null pointer (0x1). We set it to nullptr to avoid crashes.
			*(char**)(MODULE_ADDR + 0x22aba68) = nullptr;

			*DH2::idConsole::g_bDeveloperMode = 1;
			
			pInit(self, param2, param3, commandLine);
		}
	}

	namespace idMainThread
	{
		DH2::idMainThread::oInitialize_t pInitialize = nullptr;
		DH2::idMainThread::oInitialize_t pInitializeTarget = nullptr;

		void __fastcall hkInitialize(DH2::idMainThread* self)
		{
			g_showConsole = (int*)(MODULE_ADDR + 0x25ae9b8);
			*g_showConsole = 1;
			
			pInitialize(self);
		}
	}
}

bool DH2Hooks::InitializeHooks()
{
	HookManager::Hookless(&DH2::idCommonLocal::GetVTableAddr()[1], &DH2hk::idCommonLocal::hkInit, &DH2hk::idCommonLocal::pInit, "idCommonLocal::Init");

	HookManager::CreateHook(MODULE_ADDR+0x166ad0, &DH2hk::idMainThread::pInitializeTarget, &DH2hk::idMainThread::hkInitialize, &DH2hk::idMainThread::pInitialize, "idMainThread::Initialize");
	HookManager::CreateHook(MODULE_ADDR+0x166830, &DH2::idConsole::pConsoleOutputTarget, DH2::idConsole::hkDebugConsoleOutput, &DH2::idConsole::pConsoleOutput, "ConsoleOutput");

	return true;
}

void DH2Hooks::UninitializeHooks()
{
	HookManager::RemoveHook(&DH2::idCommonLocal::GetVTableAddr()[1], "idCommonLocal::Init");
	HookManager::RemoveHook(&DH2hk::idMainThread::pInitializeTarget, "idMainThread::Initialize");
	HookManager::RemoveHook(&DH2::idConsole::pConsoleOutputTarget, "ConsoleOutput");
}