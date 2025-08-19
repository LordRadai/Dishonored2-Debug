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

        void __fastcall hkSys_ShowConsole(uint32_t visLevel, bool show)
        {
			return pSys_ShowConsole(visLevel, true);
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
                g_idConsoleLocal->Print(buffer);

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
			*g_engineConsoleVisLevel = EngineConsoleVisLevel::CON_HIDDEN;

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
	//HookManager::CreateHook(MODULE_ADDR+0xe9a80, &DH2hk::Console::pSys_ShowConsoleTarget, DH2hk::Console::hkSys_ShowConsole, &DH2hk::Console::pSys_ShowConsole, "Sys_ShowConsole");

	return true;
}

void DH2Hooks::FinalizeHooks()
{
	HookManager::RemoveHook(&DH2::idCommonLocal::GetVTableAddr()[1], "idCommonLocal::Init");
	HookManager::RemoveHook(&DH2hk::idMainThread::pInitializeTarget, "idMainThread::Initialize");
	HookManager::RemoveHook(&DH2hk::Console::pConsoleOutputTarget, "ConsoleOutput");
	//HookManager::RemoveHook(&DH2hk::Console::pSys_ShowConsoleTarget, "Sys_ShowConsole");
}