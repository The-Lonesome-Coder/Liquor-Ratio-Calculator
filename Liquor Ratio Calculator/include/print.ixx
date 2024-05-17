/**
* @file        print.ixx
* @ingroup     Liquor Ratio Calculator (LRC)
* @brief       Customized print function
*
* Copyright (c) 2024 The.Lonesome.Coder (the.lonesome.coder@gmail.com)
*
* Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)
*/
export module print;


import <string_view>;

#include "global.h"


LCR_START

/**
 * @brief   Print the message with a single std::cout
 *
 * @param[in] message   The message to be printed
 */
EXPORT void printMessage(std::string_view message) noexcept;


/**
* @brief   Print the calculated result (liquor ratio)
*
* @param[in] liquor_ratio   The result (liquor ratio) after all the calculation
*/
EXPORT void printResult(const double liquor_ratio, const double weight, const std::uint32_t waterUsage) noexcept;

LCR_END