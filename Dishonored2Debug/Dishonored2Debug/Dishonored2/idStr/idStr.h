#pragma once

namespace DH2
{
	class idStr
	{
		char* m_data;
		int m_lengthAndFlags;
		int m_bufferSize;
		char m_buffer[24];

	public:
		idStr();
		idStr(char* str);

		void Strcpy(char* str);

		const char* c_str() const { return m_buffer; }
	};
}