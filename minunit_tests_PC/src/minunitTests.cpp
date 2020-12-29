/*
 * SPDX-License-Identifier: MIT
 *
 * Copyright (c) 2020-2020 Bart Bilos
 * For conditions of distribution and use, see LICENSE file
 */
#include <MinUnit.h>

/** 
 * \file minunitTests.cpp
 * 
 * Tests to execute minunit test functionality
 * 
 */ 

/**
 * \brief helper function to test automatic failure
 */
void TestBodyMinUnitFail( minunitState *testResults)
{
    minUnitFail();
}

/**
 * \brief Test passing mutest check
 */
MINUNIT_ADD(minunitTestmutestFail)
{
    minunitState localState;
    localState.executed = 0;
    localState.checks = 0;
    localState.failures = 0;
    localState.failed = 0;
    TestBodyMinUnitFail(&localState);
    minUnitCheck(localState.executed == 0);
    minUnitCheck(localState.checks == 1);
    minUnitCheck(localState.failures == 0);
    minUnitCheck(localState.failed == 1);
}

/**
 * \brief helper function to test passing mutest check
 */
void TestBodyMinUnitCheckFail( minunitState *testResults)
{
    minUnitCheck(1 == 0);
}

/**
 * \brief Test passing mutest check
 */
MINUNIT_ADD(minunitTestCheckFail)
{
    minunitState localState;
    localState.executed = 0;
    localState.checks = 0;
    localState.failures = 0;
    localState.failed = 0;
    TestBodyMinUnitCheckFail(&localState);
    minUnitCheck(localState.executed == 0);
    minUnitCheck(localState.checks == 1);
    minUnitCheck(localState.failures == 0);
    minUnitCheck(localState.failed == 1);
}

/**
 * \brief helper function to test passing mutest check
 */
void TestBodyMinUnitCheckPass( minunitState *testResults)
{
    minUnitCheck(1 == 1);
}

/**
 * \brief Test passing mutest check
 */
MINUNIT_ADD(minunitTestCheckPass)
{
    minunitState localState;
    localState.executed = 0;
    localState.checks = 0;
    localState.failures = 0;
    localState.failed = 0;
    TestBodyMinUnitCheckPass(&localState);
    minUnitCheck(localState.executed == 0);
    minUnitCheck(localState.checks == 1);
    minUnitCheck(localState.failures == 0);
    minUnitCheck(localState.failed == 0);
}