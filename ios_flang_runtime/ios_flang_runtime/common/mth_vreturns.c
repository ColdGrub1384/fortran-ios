/*
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 */

/*
 * These functions are used in returning two vector arguments from a
 * single function.
 *
 * In particular, the sincos() function returns two results, SIN(x), and
 * COS(x).  The compiler expects the return values to be in (x86-64) x/ymm0
 * and x/ymm1.  There is no way with C to return those two values in those
 * two registers without some trickery.
 *
 * Given a function of the form:
 *
 * VectorType
 * FunctionNameReturning2Vectors(vector_type x)
 * {
 *   VectorType sine;
 *   VectorType cossine;
 *   return (sine,cosine); <------------ Will not work.
 * }
 *
 * But, because the our compiler ABI uses the same vector registers
 * to return the two registers as the x86-64 calling sequence ABI,
 * we can call a dummy function with those two "return" values as arguments
 * and then do nothing in the dummy function.
 *
 * This will work as long as the caller does nothing after calling the
 * dummy function.
 *
 * Now function FunctionNameReturning2Vectors becomes:
 *
 * extern VectorType return2VectorType(VectorType, VectorType);
 *
 * VectorType
 * FunctionNameReturning2Vectors(vector_type x)
 * {
 *   VectorType sine;
 *   VectorType cossine;
 *   return (return2VectorType(sine,cosine));
 * }
 *
 */

#ifdef __cplusplus
extern "C" {
#endif

void
__mth_return2vectors(void)
{
    return;
}

#ifdef __cplusplus
} /* extern "C" */
#endif
