/*
 * SPDX-License-Identifier: MIT
 *
 * Copyright (c) 2020-2020 Bart Bilos
 * For conditions of distribution and use, see LICENSE file
 */
#include <MinUnit.h>
#include <stdio.h>
#include <iostream>

int main()
{
    MINUNIT_RUN();
    // check test state
    if(minunitTestState.executed != 4)
    {
        printf("incorrect number of tests executed\n");
    }
    else if(minunitTestState.checks != 12)
    {
        printf("incorrect number of checks executed\n");
    }
    else if(minunitTestState.failures != 0)
    {
        printf("Tests failed\n");
    }
    else
    {
        printf("minunit tests passed\n");
    }
    return 0;
}