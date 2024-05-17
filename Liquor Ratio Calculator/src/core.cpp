/**
* @file         core.cpp
* @ingroup      Liquor Ratio Calculator (LRC)
* @brief        Core functions for the program
*
* Copyright (c) 2024 The.Lonesome.Coder (the.lonesome.coder@gmail.com)
*
* Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)
*/
module core;

import <string>;

#include "global.h"
import fabric;
import function;
import print;


LCR_START

// Get values from the user and store them in the LCR::Fabric object
[[nodiscard]] Fabric getValues() noexcept
{
    Fabric fabric;

    getType(fabric);
    getTotalWeight(fabric);
    getYardWeight(fabric);

    return fabric;
}


// Calculate the liquor ratio of the fabric
[[nodiscard]] double calculateLiquorRatio(const double weight, const std::uint32_t waterUsage) noexcept
{
    return waterUsage / weight;
}


// Calculate the weight of the fabric
[[nodiscard]] double calculateWeight(const Fabric& fabric) noexcept
{
    constexpr double milligram_to_kilogram { 0.001 };

    return fabric.m_total * (fabric.m_yard_weight * milligram_to_kilogram);
}


// Determine the water usage of the fabric based on its weight and type
constexpr [[nodiscard]] std::uint32_t determineWaterUsage(const double weight, std::string_view type) noexcept
{
    if (weight <= SAMPLE_LIGHT)
    {
        return SAMPLE_SMALL;
    }
    else if (weight > SAMPLE_LIGHT && weight <= SAMPLE_HEAVY)
    {
        return SAMPLE_HEAVY;
    }

    if (type == "N")
    {
        if (weight <= LIGHT)
        {
            return NYLON_SMALL;
        }
        else if (weight > LIGHT && weight <= HEAVY)
        {
            return NYLON_MEDIUM;
        }
        else if (weight > HEAVY)
        {
            return NYLON_LARGE;
        }
    }
    else if (type == "P")
    {
        if (weight <= LIGHT)
        {
            return POLY_SMALL;
        }
        else if (weight > LIGHT)
        {
            return POLY_LARGE;
        }
    }
}


// Get the type of the fabric from the user, and store it in the LCR::Fabric object
void getType(Fabric& fabric) noexcept
{
    printMessage("Please enter the type of the fabric (Nylon = N; Polyester = P): ");

    fabric.m_type = getString();
}


// Get the total weight of the fabric from the user, and store it in the LCR::Fabric object
void getTotalWeight(Fabric& fabric) noexcept
{
    printMessage("Please enter the total yard of the fabric: ");

    fabric.m_total = getNumeric();
}


// Get the yard weight of the fabric from the user, and store it in the LCR::Fabric object
void getYardWeight(Fabric& fabric) noexcept
{
    printMessage("Please enter the yard weight of the fabric: ");

    fabric.m_yard_weight = getNumeric();
}

LCR_END