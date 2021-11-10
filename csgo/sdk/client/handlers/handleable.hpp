#pragma once
#include <lib/constantium.hpp>

namespace cst::client {
	class Handleable {
	public:
		Handleable() = default;

		virtual res_t onExec() = 0;
		virtual res_t onInit() = 0;
	};
}
