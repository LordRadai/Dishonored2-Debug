#include "TerminalConsoleImpl.h"
#include "../Dishonored2/idCmdSystemLocal/idCmdSystemLocal.h"
#include "../Dishonored2/globals.h"
#include <string>
#include <iostream>

bool TerminalConsoleImpl::Initialize()
{
    if (m_bInitialized)
		return false;

    AllocConsole();

    freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
    freopen_s((FILE**)stdin, "CONIN$", "r", stdin);
    freopen_s((FILE**)stderr, "CONOUT$", "w", stderr);

    SetStdHandle(STD_OUTPUT_HANDLE, GetStdHandle(STD_OUTPUT_HANDLE));
    SetStdHandle(STD_INPUT_HANDLE, GetStdHandle(STD_INPUT_HANDLE));
    SetStdHandle(STD_ERROR_HANDLE, GetStdHandle(STD_ERROR_HANDLE));

    SetConsoleTitle(L"Debug Console");
    EnableAnsiColors();

    m_bInitialized = true;
    m_consoleThreadRunning = true;
    m_terminalThread = std::thread(&TerminalConsoleImpl::Update, this);
    return true;
} 

void TerminalConsoleImpl::Shutdown()
{
    if (m_bInitialized)
    {
        m_consoleThreadRunning = false;

        if (m_terminalThread.joinable())
            m_terminalThread.join();

        FreeConsole();
    }
}

void TerminalConsoleImpl::Update()
{
    m_consoleMutex.lock();

    if (m_bInitialized)
    {
        std::string line;

        while (m_consoleThreadRunning)
        {
            std::getline(std::cin, line);
            if (line.empty()) continue;

            DH2::g_idCmdSystemLocal->ExecuteCommand(line.c_str());
        }
    }

    m_consoleMutex.unlock();
}

void TerminalConsoleImpl::EnableAnsiColors()
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
}