#include <Windows.h>
#include "ImGuiConsoleImpl.h"

ImGuiConsoleImpl::ImGuiConsoleImpl() : 
	m_console("Dishonored2 Console")
{
	m_bInitialized = false;
}

void ImGuiConsoleImpl::InitializeStyle()
{
	ImGuiStyle* style = &ImGui::GetStyle();
	style->WindowBorderSize = 1;
	style->FrameBorderSize = 0;
	style->PopupBorderSize = 1;
	style->FrameBorderSize = 0;
	style->TabBorderSize = 0;

	style->WindowRounding = 0;
	style->ChildRounding = 0;
	style->FrameRounding = 1;
	style->PopupRounding = 0;
	style->ScrollbarRounding = 2;
	style->GrabRounding = 0;
	style->TabRounding = 0;
	style->WindowMenuButtonPosition = ImGuiDir_Left;

	ImVec4* colors = ImGui::GetStyle().Colors;
	colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.99f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.99f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.99f);
	colors[ImGuiCol_Border] = ImVec4(0.08f, 0.08f, 0.08f, 1.00f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.04f, 0.04f, 0.04f, 0.50f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.20f, 0.20f, 0.20f, 0.50f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.39f, 0.39f, 0.39f, 0.50f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.08f, 0.08f, 0.08f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.27f, 0.27f, 0.27f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(0.78f, 0.78f, 0.78f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.39f, 0.39f, 0.39f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4(0.08f, 0.08f, 0.08f, 0.39f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.16f, 0.16f, 0.16f, 1.00f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.24f, 0.24f, 0.24f, 1.00f);
	colors[ImGuiCol_Header] = ImVec4(0.20f, 0.20f, 0.20f, 0.31f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.20f, 0.20f, 0.20f, 0.80f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_Separator] = ImVec4(0.39f, 0.39f, 0.39f, 0.50f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.39f, 0.39f, 0.39f, 0.78f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.39f, 0.39f, 0.39f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.08f, 0.08f, 0.08f, 0.24f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.08f, 0.08f, 0.08f, 0.67f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.08f, 0.08f, 0.08f, 0.95f);
	colors[ImGuiCol_InputTextCursor] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.08f, 0.08f, 0.08f, 0.80f);
	colors[ImGuiCol_Tab] = ImVec4(0.04f, 0.04f, 0.04f, 0.86f);
	colors[ImGuiCol_TabSelected] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_TabSelectedOverline] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_TabDimmed] = ImVec4(0.07f, 0.10f, 0.15f, 0.97f);
	colors[ImGuiCol_TabDimmedSelected] = ImVec4(0.14f, 0.26f, 0.42f, 1.00f);
	colors[ImGuiCol_TabDimmedSelectedOverline] = ImVec4(0.50f, 0.50f, 0.50f, 0.00f);
	colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
	colors[ImGuiCol_TableHeaderBg] = ImVec4(0.19f, 0.19f, 0.20f, 1.00f);
	colors[ImGuiCol_TableBorderStrong] = ImVec4(0.31f, 0.31f, 0.35f, 1.00f);
	colors[ImGuiCol_TableBorderLight] = ImVec4(0.23f, 0.23f, 0.25f, 1.00f);
	colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
	colors[ImGuiCol_TextLink] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
	colors[ImGuiCol_TreeLines] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
	colors[ImGuiCol_NavCursor] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
}

bool ImGuiConsoleImpl::Initialize()
{
	if (m_bInitialized)
		return false;

	InitializeStyle();

	m_bInitialized = true;
	return true;
}

void ImGuiConsoleImpl::Shutdown()
{
	if (m_bInitialized)
		m_bInitialized = false;
}

void ImGuiConsoleImpl::Update()
{
	if (!m_bInitialized)
		return;

	if (GetAsyncKeyState(VK_OEM_5) & 1)
		CycleDisplayMode();
}

void ImGuiConsoleImpl::Draw()
{
	if (!m_bInitialized)
		return;

	if (m_bShow)
		m_console.Draw();
}

void ImGuiConsoleImpl::AddLogMessage(const char* message, ...)
{
	if (!m_bInitialized)
		return;

	va_list args;
	va_start(args, message);
	char buffer[1024];
	vsnprintf(buffer, sizeof(buffer), message, args);
	va_end(args);

	m_console.System().Log(csys::ItemType::kLog) << buffer;
}

void ImGuiConsoleImpl::AddErrorMessage(const char* message, ...)
{
	if (!m_bInitialized)
		return;

	va_list args;
	va_start(args, message);
	char buffer[1024];
	vsnprintf(buffer, sizeof(buffer), message, args);
	va_end(args);

	m_console.System().Log(csys::ItemType::kError) << buffer;
}

void ImGuiConsoleImpl::AddWarningMessage(const char* message, ...)
{
	if (!m_bInitialized)
		return;

	va_list args;
	va_start(args, message);
	char buffer[1024];
	vsnprintf(buffer, sizeof(buffer), message, args);
	va_end(args);

	m_console.System().Log(csys::ItemType::kWarning) << buffer;
}

void ImGuiConsoleImpl::AddInfoMessage(const char* message, ...)
{
	if (!m_bInitialized)
		return;

	va_list args;
	va_start(args, message);
	char buffer[1024];
	vsnprintf(buffer, sizeof(buffer), message, args);
	va_end(args);

	m_console.System().Log(csys::ItemType::kInfo) << buffer;
}

void ImGuiConsoleImpl::CycleDisplayMode()
{
	switch (m_displayMode)
	{
	case ImGuiConsoleImpl::DisplayMode::kHidden:
		m_bShow = true;
		m_displayMode = ImGuiConsoleImpl::DisplayMode::kCaptureInputs;
		ImGui::GetIO().MouseDrawCursor = true;
		ImGui::GetIO().WantCaptureMouse = true;
		ImGui::GetIO().WantCaptureKeyboard = true;
		break;
	case ImGuiConsoleImpl::DisplayMode::kDefault:
		m_bShow = false;
		m_displayMode = ImGuiConsoleImpl::DisplayMode::kHidden;
		ImGui::GetIO().MouseDrawCursor = false;
		ImGui::GetIO().WantCaptureMouse = false;
		ImGui::GetIO().WantCaptureKeyboard = false;
		break;
	case ImGuiConsoleImpl::DisplayMode::kCaptureInputs:
		m_bShow = true;
		m_displayMode = ImGuiConsoleImpl::DisplayMode::kDefault;
		ImGui::GetIO().MouseDrawCursor = true;
		ImGui::GetIO().WantCaptureMouse = false;
		ImGui::GetIO().WantCaptureKeyboard = false;
		break;
	default:
		break;
	}
}
