#pragma once
#include <lib/constantium.hpp>
#include "../handler.hpp"

namespace cst::sdk {
	class Feature : public Handleable {
	public:
		Feature() = default;

		res_t onInit();
		res_t onExec();

		std::string id;
		std::string name;
		std::string category;
	};
}
