#include "Console.h"

namespace D2
{
	namespace Console
	{
		int* g_bAllowDebugCommands;

		oConsoleOutput pConsoleOutput = nullptr;
		oConsoleOutput pConsoleOutputTarget = nullptr;

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

            output += "\033[0m"; // always reset at the end
            return output;
        }

        void hDebugConsoleOutput(const char* message, ...)
        {
            char buffer[1024];

            va_list args;
            va_start(args, message);
            vsnprintf(buffer, sizeof(buffer), message, args);
            va_end(args);

            std::string colored = ConvertD2ConsoleMessageToStandardFmt(buffer);
            printf("%s", colored.c_str());
            fflush(stdout);
        }
	}
}