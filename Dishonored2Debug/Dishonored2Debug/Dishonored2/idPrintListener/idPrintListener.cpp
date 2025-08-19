#include "idPrintListener.h"
#include "../DH2Call.h"

namespace DH2
{
	typedef void(_fastcall* oPrint_t)(idPrintListener* self, const char* fmt);

	void idPrintListener::Print(const char* fmt)
	{
		DH2_VCALL(this, 1, oPrint_t, this, fmt);
	}
}
