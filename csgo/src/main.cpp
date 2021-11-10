#include <lib/constantium.hpp>
#include <sdk/client/client.hpp>

namespace cst {

	res_t construct_hook(const client::Client* client) {
		return res_t::none;
	}

	res_t init_hook(const client::Client* client) {
		return res_t::none;
	}

	res_t ConstantiumEntry(HINSTANCE cur_inst) {

		auto client = client::Client({
			construct_hook,
			init_hook,
			{
				"title",
				spdlog::level::debug
			}
		});

		if (client.init() != res_t::none) {
			spdlog::get("console")->critical("Initialization failed, exiting.");
			Sleep(10000);
			exit(0);
		}

		return res_t::none;
	}
}