#pragma once
#include "../idPrintListener/idPrintListener.h"

namespace DH2
{
	class idConsole
	{
		void** _vfptr;
	};

	class idConsoleLocal : public idConsole, public idPrintListener
	{
	};
}