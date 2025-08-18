#pragma once
#include <Windows.h>
#include <cstdint>
#include "Dishonored2/dh2Globals.h"

namespace DH2
{
	class idMainThread
	{
		void** _vfptr;
	public:
		typedef void(_fastcall* oInitialize_t)(idMainThread* self);
		static void** GetVTableAddr() { return (void**)(MODULE_ADDR + 0x1ae1078); }
	};
}
