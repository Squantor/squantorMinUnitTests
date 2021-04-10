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

/** \brief overridden reporting function
 * 
 * Executes the minunit test framework and checks the results
 */
void minunitReport(const char * message)
{
    printf("%s", message);
}

/** \brief main entrypoint
 * 
 * Executes the minunit test framework and checks the results
 */
int main()
{
    minunitRun();
    // check test state
    if(minunitTestState.executed != 5)
    {
        printf("incorrect number of tests executed\n");
    }
    else if(minunitTestState.checks != 13)
    {
        printf("incorrect number of checks executed\n");
    }
    else if(minunitTestState.failures != 0)
    {
        printf("Tests that have failed\n");
    }
    else
    {
        printf("minunit tests passed\n");
    }
    return 0;
}