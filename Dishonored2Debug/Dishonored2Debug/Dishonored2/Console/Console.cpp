#include "Console.h"
#include "../idPrintListener/idPrintListener.h"
#include "../dh2Globals.h"
#include "../DH2Call.h"

namespace DH2
{
    typedef void(_fastcall* oSys_ShowConsole_t)(uint32_t visLevel, bool show);

	namespace Console
	{
        void Sys_ShowConsole(uint32_t visLevel, bool show)
        {
			DH2_CALL(oSys_ShowConsole_t, 0xe9a80, visLevel, show);
        }
	}
}