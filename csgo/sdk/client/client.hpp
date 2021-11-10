#pragma once
#include <lib/constantium.hpp>

#include "exceptions/client_exceptions.hpp"

#include "globals.hpp"
#include "subroutines.hpp"
#include "handlers/client_handlers.hpp"

namespace cst::client {

	// fdecl.
	class Client;

	using api_hook_t = res_t(*)(const Client*);
	

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

		// ctor.
		// Runs framework initialization.
		Client(Options _opt): options(_opt) {
			logger::setup_logger(options.logger_opts);
			this->logger = spdlog::get("console");

			sbrt::sanity_check();

			options.api_constructor(this);
		}

		// Runs feature and hook initialization.
		res_t init() {
			sbrt::init_interfaces();

			options.api_init(this);

			return res_t::none;
		}

		// dtor.
		// Safely shut down client.
		~Client() {

		}

		logger::inst logger;
	};
}