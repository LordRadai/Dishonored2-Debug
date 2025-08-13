#include "../Framework.h"
#include "../kiero/kiero.h"
#include "../kiero/minhook/include/MinHook.h"

namespace HookManager
{
	template <typename T>
	bool Hookless(void** pTargetFn, T pHookFn, T* pOriginalFn, const char* name)
	{
		DWORD dOldProtect;

		if (!VirtualProtect(pTargetFn, 8, PAGE_READWRITE, &dOldProtect))
		{
			printf("[HLS] Hook %s failed.\n", name);
			return false;
		}

		*pOriginalFn = static_cast<T>(*pTargetFn);
		*pTargetFn = pHookFn;

		printf("[HLS] Hook %s succeeded.\n", name);
		return VirtualProtect(pTargetFn, 8, dOldProtect, &dOldProtect);
	}

	template<typename T>
	bool EnableHook(T* pTargetFn, const char* hookName)
	{
		MH_STATUS status = MH_EnableHook(reinterpret_cast<void*>(*pTargetFn));

		if (status != MH_OK)
		{
			printf("[MH] Hook %s enabling failed: %s.\n", hookName, MH_StatusToString(status));
			return false;
		}
		else
			printf("[MH] Hook %s enabled\n", hookName);

		return true;
	}

	template<typename T>
	bool DisableHook(T* pTargetFn, const char* hookName)
	{
		MH_STATUS status = MH_DisableHook(reinterpret_cast<void*>(*pTargetFn));

		if (status != MH_OK)
		{
			printf("[MH] Hook %s disabling failed: %s\n", hookName, MH_StatusToString(status));
			return false;
		}
		else
			printf("[MH] Hook %s disabled\n", hookName);

		return true;
	}

	template <typename T>
	bool CreateHook(uint64_t targetAddress, T* pTargetFn, T pHookFn, T* pOriginalFn, const char* hookName) 
	{
		*pTargetFn = reinterpret_cast<T>(targetAddress);

		MH_STATUS status = MH_CreateHook(reinterpret_cast<void*>(*pTargetFn), pHookFn, reinterpret_cast<LPVOID*>(pOriginalFn));

		if (status != MH_OK)
		{
			printf("[MH] Hook %s creation failed: %s\n", hookName, MH_StatusToString(status));
			return false;
		}
		else
			printf("[MH] Hook %s creation succeeded\n", hookName);

		if (!EnableHook(pTargetFn, hookName))
			return false;

		return true;
	}

	template<typename T>
	bool RemoveHook(T* pTargetFn, const char* hookName)
	{
		if (!DisableHook(pTargetFn, hookName))
			return false;

		MH_STATUS status = MH_RemoveHook(*pTargetFn);

		if (status != MH_OK)
		{
			printf("[MH] Hook %s removal failed: %s\n", hookName, MH_StatusToString(status));
			return false;
		}
		else
			printf("[MH] Hook %s removed\n", hookName);

		return true;
	}
}