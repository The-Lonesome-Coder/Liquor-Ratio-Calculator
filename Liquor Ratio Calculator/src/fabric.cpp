/**
* @file        fabric.cpp
* @ingroup     Liquor Ratio Calculator (LRC)
* @brief       The class that encapsulate the attributes of a fabric
*
* Copyright (c) 2024 The.Lonesome.Coder (the.lonesome.coder@gmail.com)
*
* Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)
*/
module fabric;


import <string_view>;

#include "global.h"


LCR_START

// Primary constructor
Fabric::Fabric(std::string_view type, const std::uint16_t total, const std::uint32_t yard_weight)
    : m_type { type }, m_total { total }, m_yard_weight { yard_weight }
{ }

LCR_END