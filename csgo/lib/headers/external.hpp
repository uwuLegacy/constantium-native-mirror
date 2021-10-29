#pragma once

//
// WinAPI
//

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

// fmtlib
#include <fmt/format.h>
#include <fmt/printf.h>
#include <fmt/color.h>

// spdlog
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

// polyhook2



#pragma warning(pop)
