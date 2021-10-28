#pragma once
#include <lib/constantium.hpp>

#include "globals.hpp"
#include "handlers/client_handlers.hpp"

namespace cst {
	res_t ConstantiumEntry(HINSTANCE);
}

namespace cst::client {

	using api_hook_t = res_t(*)(Client*);
	

	class Options {
	public:
		Options(api_hook_t _ctr, api_hook_t _init, logger::options _log):
			api_constructor(_ctr), api_init(_init), logger_opts(_log) {}

		api_hook_t api_constructor;
		api_hook_t api_init;
		logger::options logger_opts;
	};

	// Constantium client container.
	//
	class Client {
	public:
		Options options;

		// Runs framework-based initialization.
		Client(Options _opt): options(_opt) {
			options.api_constructor(this);

			logger::setup_logger(options.logger_opts);
			this->logger = spdlog::get("console");
		}

		// Runs feature and hook initialization.
		res_t init() {
			options.api_init(this);
		}

		logger::inst logger;
	};
}