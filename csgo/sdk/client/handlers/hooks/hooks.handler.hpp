#pragma once
#include <lib/constantium.hpp>
#include <sdk/client_decl.hpp>
#include "../handler.hpp"
#include "hook.hpp"

namespace cst::client {
	class HookHandler : public ClientHandler<client::Hook> {
		HookHandler() = default;

		res_t init_registry(const client::Client * client);

		res_t register_member();
	};
}