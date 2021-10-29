#include <src/main.hpp>

// Basic DllMain that passes execution to our actual handler.
bool __stdcall
DllMain(HINSTANCE instance, unsigned long reason, void* reserved) {
	if (reason == DLL_PROCESS_ATTACH) {
		DisableThreadLibraryCalls(instance);
		cst::ConstantiumEntry(instance);
	}

	return true;
}
