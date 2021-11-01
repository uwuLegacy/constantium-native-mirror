#pragma once

enum Resolvable {
	none,
	err_generic,
	err_fatal,
	err_winapi
};

using res_t = Resolvable;
