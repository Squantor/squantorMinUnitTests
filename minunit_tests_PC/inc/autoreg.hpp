
/*
 * SPDX-License-Identifier: MIT
 *
 * Copyright (c) 2020-2020 Bart Bilos
 * For conditions of distribution and use, see LICENSE file
 */
#ifndef AUTOREG_HPP
#define AUTOREG_HPP

#define AUTOREG_ADD(name)                                                       \
  static void autoreg_##name(void);                                             \
  static void __attribute__((constructor())) __construct_autoreg_##name(void) { \
    autoreg_construct_impl(#name, &autoreg_##name);                             \
  }                                                                             \
  static void autoreg_##name(void)

#define AUTOREG_RUN(argc, argv) autoregRun(argc, argv)

#endif