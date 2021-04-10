/*
 * SPDX-License-Identifier: MIT
 *
 * Copyright (c) 2020-2020 Bart Bilos
 * For conditions of distribution and use, see LICENSE file
 */
#include <MinUnit.h>

#pragma GCC diagnostic ignored "-Wunused-parameter"
MINUNIT_ADD(suite1, NULL, NULL)
{
    // check registration across multiple compilation units
}