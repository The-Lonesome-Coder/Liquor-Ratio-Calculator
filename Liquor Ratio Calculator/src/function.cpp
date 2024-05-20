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
import <charconv>;
import <cstdint>;
import <iostream>;
import <ranges>;
import <string>;

#include "global.h"
import print;


LCR_START

// Convert a string to uppercase and return it
[[nodiscard]] std::string stringToUpper(std::string_view input) noexcept
{
    std::string result(input.size(), '\0'); // Create a string of the same size as input
    std::ranges::transform(input, result.begin(), [](char ch) { return std::toupper(ch); });

    return result;
}


// Keeps prompting for string input from user and check validity, return the input until valid
[[nodiscard]] std::string getString() noexcept
{
    std::string input;

    while (true)
    {
        std::getline(std::cin, input);

        input = trimString(input);

        // Check if input contains only alphabetic characters
        if (!input.empty() && std::ranges::all_of(input, [](unsigned char ch) { return std::isalpha(ch); }))
        {
            break;
        }

        std::cin.clear(); // Clear any error flags
        printMessage("\nInvalid input. Please enter alphabetic characters only: ");
    }

    return input;
}


// Get a numeric input from the user, check validity, and return the input
[[nodiscard]] std::uint32_t getNumeric() noexcept
{
    std::string input;
    std::uint32_t number;

    while (true)
    {
        std::getline(std::cin, input);

        input = trimString(input);

        if (input.empty())
        {
            printMessage("Invalid input. Please enter a number: ");
            continue;
        }

        // Attempt to parse the number
        auto [ptr, ec] { std::from_chars(input.data(), input.data() + input.size(), number) };

        if (ec == std::errc() && ptr == input.data() + input.size())
        {
            // Valid number
            break;
        }

        std::cin.clear(); // Clear any error flags
        printMessage("\nInvalid input. Please enter a valid number: ");
    }

    return number;
}


// Helper function. Trimmed the leading and trailing whitespaces of a string and return it
constexpr [[nodiscard]] std::string trimString(std::string_view input) noexcept
{
    auto trimmed_view = input | std::ranges::views::drop_while(std::isspace)
                              | std::ranges::views::reverse
                              | std::ranges::views::drop_while(std::isspace)
                              | std::ranges::views::reverse;

    return std::string(trimmed_view.begin(), trimmed_view.end());
}

LCR_END