#pragma once
#include <lib/constantium.hpp>

namespace cst::client {

	class Options {
	public:
		int test;
		std::function<res_t()> api_init_hook;
	};

	class Client {
	public:
		Options* options;

		Client() {
			options->api_init_hook();
			
		}
	};
}