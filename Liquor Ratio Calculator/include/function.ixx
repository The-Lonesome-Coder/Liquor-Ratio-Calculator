/**
* @file        function.ixx
* @ingroup     Liquor Ratio Calculator (LRC)
* @brief       Some generic functions, including value-getters with fool-proof mechanism
*
* Copyright (c) 2024 The.Lonesome.Coder (the.lonesome.coder@gmail.com)
*
* Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)
*/
export module function;

import <cstdint>;
import <string>;

#include "global.h"


/**
* @brief    Get a string input from the user, check validity, and return the input
*
* @return   std::string object with its validity checked
*/
[[nodiscard]] std::string getString() noexcept;


/**
* @brief    Get a numeric input from the user, check validity, and return the input
*
* @return   std::uint32_t object with its validity checked
*/
[[nodiscard]] std::uint32_t getNumeric() noexcept;