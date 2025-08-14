#pragma once

namespace DH2
{
	class dh2Game
	{
		bool m_bInitialized = false;

	public:
		dh2Game() = default;
		~dh2Game() = default;

		bool Initialize();
		void Shutdown();

		bool IsInitialized() const { return m_bInitialized; }
	};
}
