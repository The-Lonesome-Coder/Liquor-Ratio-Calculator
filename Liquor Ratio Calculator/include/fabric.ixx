/**
* @file        fabric.ixx
* @ingroup     Liquor Ratio Calculator (LRC)
* @brief       The class that encapsulate the attributes of a fabric
*
* Copyright (c) 2024 The.Lonesome.Coder (the.lonesome.coder@gmail.com)
*
* Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)
*/

export module fabric;

import <cstdint>;
import <string>;
import <string_view>;

#include "global.h"


LCR_START

EXPORT class Fabric FINAL
{
    public:
        /**
         * @brief   Default constructor
         */
        Fabric() = default;

        /**
         * @brief   Primary constructor
         *
         * @param[in] type          The type of fabric (Nylon or Polyester)
         * @param[in] total_yard    Total yard of the fabric to be dyed
         * @param[in] yard_weight   The weight of the fabric per yard
         */
        Fabric(std::string_view type, const std::uint16_t total, const std::uint32_t yard_weight);

        /**
         * @brief   Default destructor
         */
        ~Fabric() = default;

        /**
         * @brief   Class members. Default "public" for convenience purposes
         */
        std::string     m_type;                 // The type of fabric (Nylon or Polyester)
        std::uint16_t   m_total;                // Total yard of the fabric to be dyed
        std::uint32_t   m_yard_weight;          // The weight of the fabric per yard
};

LCR_END