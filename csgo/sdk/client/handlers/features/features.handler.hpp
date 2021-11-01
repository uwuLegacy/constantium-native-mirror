#pragma once
#include <lib/constantium.hpp>
#include "../handler.hpp"
#include "feature.hpp"

namespace cst::sdk {
	class FeatureHandler : public ClientHandler<sdk::Feature> {
		FeatureHandler() = default;

		res_t init_registry(const client::Client* client);

		res_t register_member();
	};
}