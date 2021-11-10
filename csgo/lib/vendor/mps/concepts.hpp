// 
//    C++20 Metaprogramming Utilities
//
//  Section: Utility concepts
//

#pragma once
#include "../constantium.hpp"

template <class B, class D>
concept Extends = std::is_base_of<B, D>::value;
