#pragma once
#include <cstdint>

namespace DH2
{
	class idCmdSystem
	{
		void** _vfptr;
	};

	class idCmdSystemLocal : public idCmdSystem
	{
		struct Command
		{
			Command* pNext;
			char* pName;
			void* pCallback;
			void* pUnk;
			char* pDescription;
		};

		Command* m_pCommandList;
		uint32_t m_iVar10;
		uint32_t m_iVar14;
		char* m_commandStr;
		uint32_t m_commandStrLength;

	public:
		const char* GetCommandDescription(const char* command);

		void ExecuteCommand(const char* command);
	};
}
