#pragma once
#include "../idPrintListener/idPrintListener.h"

namespace DH2
{
	class idConsole
	{
		void** _vfptr;
	public:
	};

	class idConsoleLocal : public idConsole, public idPrintListener
	{
	};
}

extern DH2::idConsoleLocal* g_idConsoleLocal;