#pragma once
#include <lib/constantium.hpp>

namespace cst::logger {
	typedef std::shared_ptr<spdlog::logger> inst;

	res_t init_console(std::string title) {
		CONSOLE_SCREEN_BUFFER_INFO coninfo;
		FILE* fp;

		if (!AllocConsole()) return res_t::err_winapi;

		GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &coninfo);
		coninfo.dwSize.Y = 500;

		freopen_s(&fp, "CONOUT$", "w", stdout);
		freopen_s(&fp, "CONIN$", "r", stdin);

		std::ios::sync_with_stdio();

		SetConsoleTitleA(title.c_str());

		return res_t::none;
	}

	class options {
	public:
		std::string title;
		spdlog::level::level_enum level;
	};

	res_t setup_logger(options opts) {
		init_console(opts.title);

		auto console = spdlog::stdout_color_mt("console");
		spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");
		spdlog::set_level(opts.level);
	}

	std::shared_ptr<spdlog::logger> get() {
		return spdlog::get("console");
	}
}