#include "DH2Hooks.h"
#include "Dishonored2/idPrintListener/idPrintListener.h"
#include "Dishonored2/idCommonLocal/idCommonLocal.h"
#include "Dishonored2/idCmdSystemLocal/idCmdSystemLocal.h"
#include "Dishonored2/Console/Console.h"
#include "Dishonored2/idMainThread/idMainThread.h"
#include "Dishonored2/dh2Globals.h"

namespace DH2hk
{
	namespace Console
	{
		typedef void(_fastcall* oConsoleOutput_t)(const char* message, ...);

		oConsoleOutput_t pConsoleOutput = nullptr;
		oConsoleOutput_t pConsoleOutputTarget = nullptr;

        std::string ConvertD2ConsoleMessageToStandardFmt(const char* input)
        {
            if (!input) return "";

            static const std::unordered_map<char, const char*> colorMap = {
                {'0', "\033[30m"}, {'1', "\033[31m"}, {'2', "\033[32m"},
                {'3', "\033[33m"}, {'4', "\033[34m"}, {'5', "\033[35m"},
                {'6', "\033[36m"}, {'7', "\033[37m"}, {'8', "\033[90m"}, {'9', "\033[91m"}
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
            char buffer[1024];

            va_list args;
            va_start(args, message);
            vsnprintf(buffer, sizeof(buffer), message, args);
            va_end(args);

            std::string stripped = ConvertD2ConsoleMessageToStripped(buffer);

            if (g_idPrintListeners)
            {
                DH2::idPrintListener* listener = *g_idPrintListeners;

                while (listener != nullptr)
                {
					uint64_t vtableAddr = *(uint64_t*)listener;

                    listener->Print(stripped.c_str());
                    listener = listener->Next();
                }
            }

			printf_s("%s", stripped.c_str());
            fflush(stdout);
        }
	}

	namespace idCommonLocal
	{
		DH2::idCommonLocal::oInit_t pInit = nullptr;

		void __fastcall hkInit(DH2::idCommonLocal* self, int param2, uint64_t param3, char* commandLine)
		{
			DH2::Console::Sys_ShowConsole(*g_consoleVisLevel, true);

			pInit(self, param2, param3, commandLine);
		}
	}

	namespace idMainThread
	{
		DH2::idMainThread::oInitialize_t pInitialize = nullptr;
		DH2::idMainThread::oInitialize_t pInitializeTarget = nullptr;

		void __fastcall hkInitialize(DH2::idMainThread* self)
		{
			*g_bDeveloperMode = 1;
			*g_showConsole = 1;
			*g_consoleVisLevel = 1;

			// The game has a terribly unsafe thing, a string element in a string array that has a null pointer (0x1). We set it to nullptr to avoid crashes.
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

	return true;
}

void DH2Hooks::FinalizeHooks()
{
	HookManager::RemoveHook(&DH2::idCommonLocal::GetVTableAddr()[1], "idCommonLocal::Init");
	HookManager::RemoveHook(&DH2hk::idMainThread::pInitializeTarget, "idMainThread::Initialize");
	HookManager::RemoveHook(&DH2hk::Console::pConsoleOutputTarget, "ConsoleOutput");
}