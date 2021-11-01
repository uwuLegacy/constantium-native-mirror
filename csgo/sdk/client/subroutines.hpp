#pragma once
#include <lib/constantium.hpp>

namespace cst::client::sbrt {
	// Initialize interfaces with their respective addresses
	res_t init_interfaces();

	// Dump interfaces to file/debug console
	res_t dump_interfaces();

	// Runs basic runtime safety checks
	res_t sanity_check();
	
	// safety - checks process name
	res_t check_proc_name();
}
