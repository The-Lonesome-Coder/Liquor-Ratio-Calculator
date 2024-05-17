/**
 * @file        function.cpp
 * @ingroup     Liquor Ratio Calculator (LRC)
 * @brief       Some generic functions, including value-getters with fool-proof mechanism
 *
 * Copyright (c) 2024 The.Lonesome.Coder (the.lonesome.coder@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)
 */
module function;

import <algorithm>;
import <cctype>;
import <cstdint>;
import <iostream>;
import <ranges>;
import <string>;

#include "global.h"
import print;


LCR_START

// Keeps prompting for string input from user and check validity, return the input until valid
[[nodiscard]] std::string getString() noexcept
{
    std::string input;

    while (input.empty() || !std::ranges::all_of(input, [](const unsigned char character) { return std::isalpha(character); }))
    {
        std::getline(std::cin, input);
    }

    return input;
}


// Get a numeric input from the user, check validity, and return the input


LCR_END