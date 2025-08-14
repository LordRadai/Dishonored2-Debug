#pragma once
#include <Windows.h>
#include <stdio.h>
#include <thread>
#include <atomic>
#include <mutex>
#include "../Console.h"

class TerminalConsoleImpl : public Console
{
	std::thread m_terminalThread;
	std::atomic<bool> m_consoleThreadRunning;
	std::mutex m_consoleMutex;
public:
	TerminalConsoleImpl() {}
	~TerminalConsoleImpl() override {}
	bool Initialize() override;
	void Shutdown() override;
	void Update() override;

protected:
	void EnableAnsiColors();
};
