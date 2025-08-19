#include "DH2Hooks.h"
#include "Dishonored2/idPrintListener/idPrintListener.h"
#include "Dishonored2/idCommon/idCommon.h"
#include "Dishonored2/idCmdSystem/idCmdSystem.h"
#include "Dishonored2/idConsole/idConsole.h"
#include "Dishonored2/Console/Console.h"
#include "Dishonored2/idMainThread/idMainThread.h"
#include "Dishonored2/dh2Globals.h"

namespace DH2hk
{
    namespace Console
    {
        DH2::Console::oConsoleOutput_t pConsoleOutput = nullptr;
        DH2::Console::oConsoleOutput_t pConsoleOutputTarget = nullptr;

		DH2::Console::oSys_ShowConsole_t pSys_ShowConsole = nullptr;
		DH2::Console::oSys_ShowConsole_t pSys_ShowConsoleTarget = nullptr;

		DH2::Console::oSys_PrintToConsoleWindow_t pSys_PrintToConsoleWindow = nullptr;
		DH2::Console::oSys_PrintToConsoleWindow_t pSys_PrintToConsoleWindowTarget = nullptr;

        void __fastcall hkSys_ShowConsole(uint32_t visLevel, bool show)
        {
			return pSys_ShowConsole(visLevel, true);
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

        void hkSys_PrintToConsoleWindow(const char* msg)
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

        std::string ConvertD2ConsoleMessageToStandardFmt(const char* input)
        {
            if (!input) return "";

            static const std::unordered_map<char, const char*> colorMap = {
                {'0', "\033[30m"},
                {'1', "\033[31m"},
                {'2', "\033[32m"},
                {'3', "\033[33m"},
                {'4', "\033[34m"},
                {'5', "\033[35m"},
                {'6', "\033[36m"},
                {'7', "\033[37m"},
                {'8', "\033[90m"},
                {'9', "\033[91m"}
            };

            std::string output;

            for (size_t i = 0; input[i]; ++i)
            {
                if (input[i] == '^' && input[i + 1])
                {
                    char code = input[i + 1];
                    auto it = colorMap.find(code);
                    if (it != colorMap.end())
                    {
                        output += it->second;
                        i++;
                        continue;
                    }
                }

                output += input[i];
            }

            output += "\033[0m";

            return output;
        }

        std::string ConvertD2ConsoleMessageToStripped(const char* input)
        {
            if (!input) return "";

            std::string output;

            for (size_t i = 0; input[i]; ++i)
            {
                if (input[i] == '^' && input[i + 1])
                {
                    ++i;
                    continue;
                }

                output += input[i];
            }

            return output;
        }

        void hkDebugConsoleOutput(const char* message, ...)
        {
            constexpr size_t bufferSize = 256;

            char buffer[bufferSize];
            va_list args;
            va_start(args, message);
            vsnprintf(buffer, bufferSize, message, args);
            va_end(args);

            if (g_idConsoleLocal)
            {
                DH2::idPrintListener* pConPrint = g_idConsoleLocal->Next();

                if (pConPrint)
                    pConPrint->Print(buffer);

                g_idConsoleLocal->Print(buffer);
            }

            OutputDebugStringA(ConvertD2ConsoleMessageToStripped(buffer).c_str());

#ifdef _CONSOLE 
            printf_s("%s", ConvertD2ConsoleMessageToStandardFmt(buffer).c_str());
            fflush(stdout);
#endif
        }
    }

	namespace idCommonLocal
	{
		DH2::idCommonLocal::oInit_t pInit = nullptr;

		void __fastcall hkInit(DH2::idCommonLocal* self, int param2, uint64_t param3, char* commandLine)
		{
			DH2::Console::Sys_ShowConsole(*g_engineConsoleVisLevel, true);

			pInit(self, param2, param3, commandLine);
		}
	}

	namespace idMainThread
	{
		DH2::idMainThread::oInitialize_t pInitialize = nullptr;
		DH2::idMainThread::oInitialize_t pInitializeTarget = nullptr;

		void __fastcall hkInitialize(DH2::idMainThread* self)
		{
			*g_bDeveloperMode = TRUE;
			
			*g_showEngineConsole = FALSE;
			*g_engineConsoleVisLevel = EngineConsoleVisLevel::CON_NORMAL;

			// The game has a terribly unsafe thing, a string element in a string array that has a null pointer (0x1). We set it to nullptr to avoid crashes when issuing the listCvars -type command.
			*(char**)(MODULE_ADDR + 0x22aba68) = nullptr;
			
			pInitialize(self);
		}
	}
}

bool DH2Hooks::InitializeHooks()
{
	HookManager::Hookless(&DH2::idCommonLocal::GetVTableAddr()[1], &DH2hk::idCommonLocal::hkInit, &DH2hk::idCommonLocal::pInit, "idCommonLocal::Init");

	HookManager::CreateHook(MODULE_ADDR+0x166ad0, &DH2hk::idMainThread::pInitializeTarget, &DH2hk::idMainThread::hkInitialize, &DH2hk::idMainThread::pInitialize, "idMainThread::Initialize");
	HookManager::CreateHook(MODULE_ADDR+0x166830, &DH2hk::Console::pConsoleOutputTarget, DH2hk::Console::hkDebugConsoleOutput, &DH2hk::Console::pConsoleOutput, "ConsoleOutput");
	HookManager::CreateHook(MODULE_ADDR+0xe9a80, &DH2hk::Console::pSys_ShowConsoleTarget, DH2hk::Console::hkSys_ShowConsole, &DH2hk::Console::pSys_ShowConsole, "Sys_ShowConsole");
	HookManager::CreateHook(MODULE_ADDR+0xe8d50, &DH2hk::Console::pSys_PrintToConsoleWindowTarget, DH2hk::Console::hkSys_PrintToConsoleWindow, &DH2hk::Console::pSys_PrintToConsoleWindow, "Sys_PrintToConsoleWindow");

	return true;
}

void DH2Hooks::FinalizeHooks()
{
	HookManager::RemoveHook(&DH2::idCommonLocal::GetVTableAddr()[1], "idCommonLocal::Init");
	HookManager::RemoveHook(&DH2hk::idMainThread::pInitializeTarget, "idMainThread::Initialize");
	HookManager::RemoveHook(&DH2hk::Console::pConsoleOutputTarget, "ConsoleOutput");
	HookManager::RemoveHook(&DH2hk::Console::pSys_ShowConsoleTarget, "Sys_ShowConsole");
	HookManager::RemoveHook(&DH2hk::Console::pSys_PrintToConsoleWindowTarget, "Sys_PrintToConsoleWindow");
}