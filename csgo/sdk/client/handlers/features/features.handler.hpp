#pragma once
#include <lib/constantium.hpp>
#include <sdk/client_decl.hpp>
#include "../handler.hpp"
#include "feature.hpp"

namespace cst::client {
	class FeatureHandler : public ClientHandler<client::Feature> {
		FeatureHandler() = default;

		res_t init_registry(const client::Client* client);

		res_t register_member();
	};
}