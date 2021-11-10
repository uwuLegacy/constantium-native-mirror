#pragma once
#include <lib/constantium.hpp>

// Constantium multithreading library - libcstmt
namespace mt {
	using thread = std::function<res_t()>;

	res_t init_thread(thread t);

}