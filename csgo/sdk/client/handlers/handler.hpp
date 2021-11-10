#pragma once
#include <lib/constantium.hpp>
#include <sdk/client_decl.hpp>
#include "handleable.hpp"

namespace cst::client {
	
	/*
	*  Base class for a client registry/handler.
	*/
	template <class member_t>
	class ClientHandler {
	public:
		ClientHandler() = default;

		// Initializes registry and its members.
		virtual res_t init_registry() = 0;
		// Registers a single member.
		virtual res_t register_member() = 0;

		// Called from register() to run base registration procedure.
		res_t _register(member_t member) {
			members.insert(member);
		}

		// Members contained in registry.
		std::unordered_map<std::string, member_t> members;
	};
}