#pragma once

namespace DH2
{
	class idPrintListener
	{
		void** _vfptr; // VTable pointer, not used directly
		idPrintListener* m_next;

	public:
		void Print(char* message);

		idPrintListener* Next() const { return m_next; }
	};
}