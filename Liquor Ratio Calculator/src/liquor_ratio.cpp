/**
 * @file        liquor_ratio.cpp
 * @ingroup     Liquor Ratio Calculator (LRC)
 * @version     1.0
 * @brief       Driver code for the LCR program
 *
 * Copyright (c) 2024 The.Lonesome.Coder (the.lonesome.coder@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)
 */
import <string>;

import core_header;


// Driver code
int main()
{
    using namespace LCR;

    std::string flag { "Y" };

    while (flag == "Y")
    {
        Fabric fabric { getValues() };
        const double weight { calculateWeight(fabric) };
        const std::uint32_t waterUsage { determineWaterUsage(weight, fabric.m_type) };
        const double liquor_ratio { calculateLiquorRatio(weight, waterUsage) };

        printResult(liquor_ratio, weight, waterUsage);

        printMessage("Do you want to calculate another (Y = Yes; N = No): ");
        flag = getString();
    }

    return 0;
}