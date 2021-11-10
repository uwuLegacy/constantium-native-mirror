#pragma once

//
// WinAPI
//

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>
#include <fcntl.h>


//
// std
//

#include <type_traits>
#include <filesystem>
#include <functional>
#include <iostream>
#include <concepts>
#include <fstream>
#include <utility>
#include <thread>
#include <memory>
#include <vector>


//
// vcpkg
//

#pragma warning(push, 0)

// zeromq
#include <zmq.hpp>
#include <zmq_addon.hpp>

// fmtlib
#include <fmt/format.h>
#include <fmt/printf.h>
#include <fmt/color.h>

// spdlog
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

// polyhook2
#include "polyhook2/ZydisDisassembler.hpp"
#include "polyhook2/Virtuals/VFuncSwapHook.hpp"
#include "polyhook2/Virtuals/VTableSwapHook.hpp"

#pragma warning(pop)
