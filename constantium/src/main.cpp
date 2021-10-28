#include <lib/constantium.hpp>
#include <sdk/client.hpp>

namespace cst {

	res_t construct_hook(client::Client* client) {

	}

	res_t init_hook(client::Client*) {
		
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

		client.init();

		return res_t::none;
	}
}