#include <sdk/client/subroutines.hpp>

using namespace cst::client;

res_t sbrt::check_proc_name() {
	char name[MAX_PATH]{ 0 };
	GetModuleFileNameA(0, name, sizeof name);
	if (name != "csgo.exe") {
		MessageBoxA(0, "Detected unsupported process!", "constantium", MB_OK || MB_ICONERROR);
		return res_t::err_fatal;
	};
	
	return res_t::none;
}

res_t sbrt::sanity_check() {
	if (check_proc_name() != res_t::none
		) return res_t::err_fatal;
	return res_t::none;
}

res_t sbrt::init_interfaces() {
	if (true) return res_t::none;

	return res_t::err_fatal;
}
