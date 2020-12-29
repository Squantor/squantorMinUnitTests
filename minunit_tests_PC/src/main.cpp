/*
 * SPDX-License-Identifier: MIT
 *
 * Copyright (c) 2020-2020 Bart Bilos
 * For conditions of distribution and use, see LICENSE file
 */
/** 
 * \file main.cpp
 * 
 * Main entrypoint for executing minunit tests
 * 
 */ 
#include <MinUnit.h>
#include <stdio.h>

/** \brief main entrypoint
 * 
 * Executes the minunit test framework and checks the results
 */
int main()
{
    minunitRun();
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