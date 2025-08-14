#pragma once

class Console
{
protected:
	bool m_bInitialized = false;

public:
	Console() = default;

	virtual ~Console() = default;
	virtual bool Initialize() = 0;
	virtual void Shutdown() = 0;
	virtual void Update() = 0;
	virtual bool IsVisible() = 0;
	virtual bool WantCaptureInputs() = 0;
	bool IsInitialized() const { return m_bInitialized; }
};