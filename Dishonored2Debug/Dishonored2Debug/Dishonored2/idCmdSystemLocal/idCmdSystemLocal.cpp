#include <string>
#include "idCmdSystemLocal.h"
#include "../DH2Call.h"

namespace DH2
{
	typedef const char* (_fastcall* GetCommandDescription_t)(idCmdSystemLocal* pThis, const char* command);

	const char* idCmdSystemLocal::GetCommandDescription(const char* command)
	{
		return DH2_VCALL(this, 0, GetCommandDescription_t, this, command);
	}

	void idCmdSystemLocal::ExecuteCommand(const char* command)
	{
		size_t commandLength = strlen(command) + 1;
		strcpy_s(this->m_commandStr, commandLength, command);
		this->m_commandStrLength = commandLength;
	}
}