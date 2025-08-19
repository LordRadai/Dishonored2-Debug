#pragma once
#include <Windows.h>
#include <cstdint>
#include "Dishonored2/dh2Globals.h"

namespace DH2
{
	class idCommon
	{
		void** _vfptr;
	};

	class idCommonLocal : public idCommon
	{
	public:
		typedef void(_fastcall* oInit_t)(idCommonLocal* self, int param2, uint64_t param3, char* commandLine);

		static void** GetVTableAddr() { return (void**)(MODULE_ADDR + 0x1ac4d88); }
	};
}
