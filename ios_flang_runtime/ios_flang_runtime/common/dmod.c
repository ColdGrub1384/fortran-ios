/*
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 */

#include "mthdecls.h"

double __mth_i_dmod(double f, double g) {
  return fmod(f, g);
}

double __fmth_i_dmod(double f, double g) {
  return __mth_i_dmod(f, g);
}
