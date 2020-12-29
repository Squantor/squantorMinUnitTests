/*
 * SPDX-License-Identifier: MIT
 *
 * Copyright (c) 2020-2020 Bart Bilos
 * For conditions of distribution and use, see LICENSE file
 */
#include <MinUnit.h>
#include <stdio.h>
#include <iostream>

MINUNIT_ADD(foo)
{
    minUnitCheck(1 == 1);
    printf("executing foo\n");
}

MINUNIT_ADD(bar)
{
    printf("executing bar\n");
}

//int main(int argc, char *argv[])
int main()
{
    // manually test minUnitCheck and minUnitFail

    return MINUNIT_RUN();
}