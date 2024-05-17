/**
 * @file        print.cpp
 * @ingroup     Liquor Ratio Calculator (LRC)
 * @brief       Customized print function
 *
 * Copyright (c) 2024 The.Lonesome.Coder (the.lonesome.coder@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)
 */
module print;

import <iostream>;
import <string_view>;

#include "global.h"


LCR_START

// Print the message with a single std::cout
void printMessage(std::string_view message) noexcept
{
    std::cout << message;
}

LCR_END