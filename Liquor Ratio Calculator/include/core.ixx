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


import <cstdint>;
import <string_view>;

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
 * @brief    Calculate the liquor ratio of the fabric
 *
 * @param[in] fabric    The fabric that needed liquor ratio to proceed to the next production phase
 */
EXPORT [[nodiscard]] double calculateLiquorRatio(const double weight, const std::uint32_t waterUsage) noexcept;


/**
* @brief    Calculate the weight of the fabric
*
* @param[in] fabric    The fabric that needed its weight calculated to calculate the liquor ratio
*/
EXPORT [[nodiscard]] double calculateWeight(const Fabric& fabric) noexcept;


/**
* @brief    Determine the water usage of the fabric based on its weight and type
*
* @param[in] weight     The weight of the fabric
* @param[in] type       The type of the fabric
*/
EXPORT constexpr [[nodiscard]] std::uint32_t determineWaterUsage(const double weight, std::string_view type) noexcept;


/**
 * @brief    Helper function. Get the type of the fabric from the user, and store it in the LCR::Fabric object
 */
void getType(Fabric& fabric) noexcept;


/**
 * @brief    Helper function. Get the total weight of the fabric from the user, and store it in the LCR::Fabric object
 */
void getTotalWeight(Fabric& fabric) noexcept;


/**
 * @brief    Helper function. Get the yard weight of the fabric from the user, and store it in the LCR::Fabric object
 */
void getYardWeight(Fabric& fabric) noexcept;

LCR_END