#include <stdio.h>
#include "idStr.h"
#include "../DH2Call.h"

namespace DH2
{
	typedef void(_fastcall* oConstructor_t)(idStr*);
	typedef void(_fastcall* oStrcpy_t)(idStr*, char*);

	idStr::idStr()
	{
		DH2_CALL(oConstructor_t, 0x13fb30, this);
	}

	idStr::idStr(char* str)
	{
		DH2_CALL(oConstructor_t, 0x13fb30, this);
		Strcpy(str);
	}

	void idStr::Strcpy(char* str)
	{
		DH2_CALL(oStrcpy_t, 0x13ff40, this, str);
	}
}