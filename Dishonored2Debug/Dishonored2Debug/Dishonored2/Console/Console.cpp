#include "Console.h"
#include "../idPrintListener/idPrintListener.h"
#include "../idConsole/idConsole.h"
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

        bool IsColorCode(const char* p)
        {
            if (p == NULL) {
                return false;
            }

            // must start with a caret
            if (p[0] != '^') {
                return false;
            }

            // next character must be '0'..'9', ':' (10), ';' (11), '<' (12)
            unsigned char next = (unsigned char)p[1];
            if (next >= '0' && next <= '0' + 12) {
                return true;
            }

            return false;
        }

        void Sys_PrintToConsoleWindow(const char* msg)
        {
            char buffer[32760];
            char* out = buffer;
            size_t inPos = 0, outPos = 0;

            // Clamp input if too long
            int len = strlen(msg);
            if (len > 0x3fff)
            {
                len = strlen(msg);
                msg += (long long)len - 0x3fff;
            }

            while (msg[inPos] != '\0' && outPos < 0x7fff)
            {
                char c = msg[inPos];

                if (c == '\n' && msg[inPos + 1] == '\r')
                {
                    *out++ = '\r'; *out++ = '\n';
                    outPos += 2;
                    inPos++; // skip extra \r
                }
                else if (c == '\r' || c == '\n')
                {
                    *out++ = '\r'; *out++ = '\n';
                    outPos += 2;
                }
                else if (IsColorCode(&msg[inPos]))
                {
                    // skip "^<digit>" formatting code
                    inPos++;
                }
                else
                {
                    *out++ = c;
                    outPos++;
                }

                inPos++;
            }

            *out = '\0';

            DWORD_PTR result;

            *g_consoleTextBufferSize += (int)(out - buffer);
            if (*g_consoleTextBufferSize > 0x7000)
            {
                SendMessageTimeoutA(*g_voidEngineConsoleEditHwnd, EM_SETSEL, 0, -1, SMTO_ABORTIFHUNG, 100, &result);
                *g_consoleTextBufferSize = (int)(out - buffer);
            }

            SendMessageTimeoutA(*g_voidEngineConsoleEditHwnd, EM_LINESCROLL, 0, 0xFFFF, SMTO_ABORTIFHUNG, 100, &result);           // set selection to end
            SendMessageTimeoutA(*g_voidEngineConsoleEditHwnd, EM_SCROLLCARET, 0, 0, SMTO_ABORTIFHUNG, 100, &result);                // replace selection
            SendMessageTimeoutA(*g_voidEngineConsoleEditHwnd, EM_REPLACESEL, 0, (LPARAM)buffer, SMTO_ABORTIFHUNG, 100, &result);   // insert text
        }
	}
}