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


LCR_START

/**
* @brief   Convert a string to uppercase and return it
*
* @return  std::string object that is converted to uppercase
*/
EXPORT [[nodiscard]] std::string stringToUpper(std::string_view input) noexcept;


/**
 * @brief   Get a string input from the user, check validity, and return the input
 *
 * @return  std::string object with its validity checked
 */
EXPORT [[nodiscard]] std::string getString() noexcept;


/**
 * @brief   Get a numeric input from the user, check validity, and return the input
 *
 * @return  std::uint32_t object with its validity checked
 */
EXPORT [[nodiscard]] std::uint32_t getNumeric() noexcept;


/**
 * @brief   Helper function. Trimmed the leading and trailing whitespaces of a string and return it
 *
 * @return  std::string object that is trimmed
 */
constexpr [[nodiscard]] std::string trimString(std::string_view input) noexcept;

LCR_END