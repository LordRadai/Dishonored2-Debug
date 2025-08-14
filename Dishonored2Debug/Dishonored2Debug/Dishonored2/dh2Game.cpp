#include "dh2Game.h"
#include "globals.h"
#include "idConsole/idConsole.h"
#include "idCmdSystemLocal/idCmdSystemLocal.h"

namespace DH2
{
	bool dh2Game::Initialize()
	{
		if (m_bInitialized)
			return false;
		
		DH2::idConsole::g_bAllowDebugCommands = (int*)(MODULE_ADDR + 0x32cd1c8);
		g_idCmdSystemLocal = *(DH2::idCmdSystemLocal**)(MODULE_ADDR + 0x228bae0);

		// The game has a terribly unsafe thing, a string element in a string array that has a null pointer (0x1). We set it to nullptr to avoid crashes.
		*(char**)(MODULE_ADDR + 0x22aba68) = nullptr;

		*DH2::idConsole::g_bAllowDebugCommands = 1;
		
		m_bInitialized = true;
		return true;
	}

	void dh2Game::Shutdown()
	{
		if (!m_bInitialized)
			return;
		// Shutdown logic here
		// ...
		m_bInitialized = false;
	}
}