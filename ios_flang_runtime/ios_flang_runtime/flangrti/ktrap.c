/*
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 */

/** \file
 *  \brief IEEE trap support
 */

#ifndef TARGET_WIN

#include <fenv.h>

#if !defined(TARGET_OSX)
/* Use the LINUX interpretation of 'weak references' */
extern int __ktrapval __attribute__ ((weak));

#else
/* Use the OSX feature of 'weak definitions' */
       int __ktrapval __attribute__ ((weak));
#endif

void
__ktrap(void)
{
}

#else
void
__ktrap(void)
{
}
#endif
