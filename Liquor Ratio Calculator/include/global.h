/**
 * @file
 * @ingroup     Liquor Ratio Calculator (LRC)
 * @brief
 *
 * Copyright (c) 2024 The.Lonesome.Coder (the.lonesome.coder@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)
 */

#pragma once


#define LCR_START       namespace LCR {
#define LCR_END         }

#define EXPORT          export                      // The class / function is visible outside the header file
#define FINAL           final                       // The class / function should not be inherited / override


#define SAMPLE_LIGHT    35                          // The weight definition (circumstances depend)
#define SAMPLE_HEAVY    65
#define LIGHT           120
#define HEAVY           250


#define SAMPLE_SMALL    350                         // The water usage based on the weight of the fabric (circumstances depend)
#define SAMPLE_LARGE    650
#define NYLON_SMALL     1250
#define NYLON_MEDIUM    3000
#define NYLON_LARGE     3300
#define POLY_SMALL      1100
#define POLY_LARGE      2500