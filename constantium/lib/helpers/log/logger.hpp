#pragma once
#include <lib/constantium.hpp>

namespace cst::logger {
	typedef std::shared_ptr<spdlog::logger> inst;

	class options {
	public:
		std::string title;
		spdlog::level::level_enum level;
	};

	res_t init_console(std::string title);
	res_t setup_logger(options opts);

	inline std::shared_ptr<spdlog::logger> get() {
		return spdlog::get("console");
	}
}