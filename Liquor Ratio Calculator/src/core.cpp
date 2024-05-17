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


// Get the type of the fabric from the user, and store it in the LCR::Fabric object
void getType(Fabric& fabric) noexcept
{
    printMessage("Please enter the type of the fabric (Nylon = N; Polyester = P): ");

    fabric.m_type = getString();
}


// Get the total weight of the fabric from the user, and store it in the LCR::Fabric object
void getTotalWeight(Fabric& fabric) noexcept
{

}


// Get the yard weight of the fabric from the user, and store it in the LCR::Fabric object
void getYardWeight(Fabric& fabric) noexcept
{

}


LCR_END