#pragma once
#include "include/imgui_console/imgui_console.h"
#include "../Console.h"

class ImGuiConsoleImpl : public Console
{
	enum class DisplayMode
	{
		kHidden,
		kDefault,
		kCaptureInputs,
		kNumModes
	};

	bool m_bShowStyleEditor = false;
	bool m_bShow = false;
	DisplayMode m_displayMode = DisplayMode::kHidden;
	ImGuiConsole m_console;

	void InitializeStyle();
public:
	ImGuiConsoleImpl();
	~ImGuiConsoleImpl() override {}

	bool Initialize() override;
	void Shutdown() override;
	void Update() override;

	void Draw();

	void AddLogMessage(const char* message, ...);
	void AddErrorMessage(const char* message, ...);
	void AddWarningMessage(const char* message, ...);
	void AddInfoMessage(const char* message, ...);

	void CycleDisplayMode();
};