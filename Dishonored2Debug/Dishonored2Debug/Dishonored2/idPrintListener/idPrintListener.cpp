#include "idPrintListener.h"
#include "../DH2Call.h"

namespace DH2
{
	typedef void(_fastcall* oPrint_t)(idPrintListener*, char*);

	void idPrintListener::Print(char* message)
	{
		DH2_VCALL(this, 1, oPrint_t, this, message);
	}
}
