/*
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 */

/* clang-format off */

/*	system3f.c - Implements LIB3F system subprogram.  */

#include <stdlib.h>
#include "ent3f.h"

extern char *__fstr2cstr();
extern void __cstr_free();

int ENT3F(SYSTEM, system)(DCHAR(str) DCLEN(str))
{
  char *p;
  int i;

  p = __fstr2cstr(CADR(str), CLEN(str));
  i = -1;
  __cstr_free(p);
  return i;
}
