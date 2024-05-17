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


import <cmath>;
import <format>;
import <iostream>;
import <string_view>;

#include "global.h"


LCR_START

// Print the message with a single std::cout
void printMessage(std::string_view message) noexcept
{
    std::cout << message;
}


// Print the calculated result (liquor ratio)
void printResult(const double liquor_ratio, const double weight, const std::uint32_t waterUsage) noexcept
{
    printMessage(std::format("                        \n\n{:^54}\n"
                             "------------------------------------------------------\n"
                             "  Liquor Ratio:   1 : {}  ({:.3f} before rounding)\n"
                             "------------------------------------------------------\n"
                             "  Total weight:   {:.2f}  KG\n"
                             "  Water Usage :   {}    L\n"
                             "------------------------------------------------------\n\n",
                             "Result", std::round(liquor_ratio), liquor_ratio, weight, waterUsage));
}

LCR_END