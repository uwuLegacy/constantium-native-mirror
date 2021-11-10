#include "hooks.handler.hpp"

using namespace cst::client;

res_t HookHandler::init_registry(const client::Client* client) {
	return res_t::none;
}

res_t HookHandler::register_member() {
	return res_t::none;
}
