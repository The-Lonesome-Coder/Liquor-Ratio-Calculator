/**
* @file         core.ixx
* @ingroup      Liquor Ratio Calculator (LRC)
* @brief        Core functions for the program
*
* Copyright (c) 2024 The.Lonesome.Coder (the.lonesome.coder@gmail.com)
*
* Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)
*/
export module core;


import <iostream>;


#include "global.h"
import fabric;


LCR_START

/**
 * @brief    Get values from the user and store them in the LCR::Fabric object
 *
 * @return   A LCR::Fabric object with values
 */
EXPORT [[nodiscard]] Fabric getValues() noexcept;


/**
 * @brief    Get the type of the fabric from the user, and store it in the LCR::Fabric object
 */
void getType(Fabric& fabric) noexcept;


/**
 * @brief    Get the total weight of the fabric from the user, and store it in the LCR::Fabric object
 */
void getTotalWeight(Fabric& fabric) noexcept;


/**
 * @brief    Get the yard weight of the fabric from the user, and store it in the LCR::Fabric object
 */
void getYardWeight(Fabric& fabric) noexcept;

LCR_END