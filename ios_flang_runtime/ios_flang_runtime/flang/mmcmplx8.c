/*
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 */

/* clang-format off */

#include "stdioInterf.h"
#include "fioMacros.h"
#include "complex.h"

#define SMALL_ROWSA 10
#define SMALL_ROWSB 10
#define SMALL_COLSB 10

void ENTF90(MMUL_CMPLX8,
            mmul_cmplx8)(int ta, int tb, __POINT_T mra, __POINT_T ncb,
                         __POINT_T kab, float complex *alpha, float complex a[],
                         __POINT_T lda, float complex b[], __POINT_T ldb,
                         float complex *beta, float complex c[], __POINT_T ldc)
{
  /*
   *   Notes on parameters
   *   ta, tb = 0 -> no transpose of matrix
   *   ta, tb = 1 -> transpose of matrix
   *   ta, tb = 2 -> conjugate of matrix
   *   mra = number of rows in matrices a and c ( = m )
   *   ncb = number of columns in matrices b and c ( = n )
   *   kab = shared dimension of matrices a and b ( = k, but need k elsewhere )
   *   a = starting address of matrix a
   *   b = starting address of matrix b
   *   c = starting address of matric c
   *   lda = leading dimension of matrix a
   *   ldb = leading dimension of matrix b
   *   ldc = leading dimension of matrix c
   *   alpha = 1.0
   *   beta = 0.0
   *   Note that these last two conditions are inconsitent with the general
   *   case for dgemm.
   *   Taken together we have
   *   c = beta * c + alpha * ( (ta)a * (tb)*b )
   *   where the meaning of (ta) and (tb) is that if ta = 0 a is not transposed
   *   and transposed otherwise and if tb = 0, b is not transpose and transposed
   *   otherwise.
   */

  // Local variables

  int colsa, rowsa, rowsb, colsb;
  int ar, ac;
  int ndx, ndxsav, colchunk, colchunks, rowchunk, rowchunks;
  int colsb_chunks, colsb_end, colsb_strt;
  int bufr, bufc, loc, lor;
  int small_size = SMALL_ROWSA * SMALL_ROWSB * SMALL_COLSB;
  int tindex = 0;
  float complex buffera[SMALL_ROWSA * SMALL_ROWSB];
  float complex bufferb[SMALL_COLSB * SMALL_ROWSB];
  float complex temp;
  void ftn_mvmul_cmplx8_(), ftn_vmmul_cmplx8_();
  void ftn_mnaxnb_cmplx8_(), ftn_mnaxtb_cmplx8_();
  void ftn_mtaxnb_cmplx8_(), ftn_mtaxtb_cmplx8_();
  float complex calpha, cbeta;
  /*
   * Small matrix multiply variables
   */
  int i, ia, ja, j, k, bk;
  int astrt, bstrt, cstrt, andx, bndx, cndx, indx, indx_strt;
  /*
   * We will structure this code a bit different from the real code
   * since there are 9 cases rather than 4.
   * We will switch on ta and then on tb.
   */
  calpha = *alpha;
  cbeta = *beta;
  rowsa = mra;
  colsa = kab;
  rowsb = kab;
  colsb = ncb;
  if (calpha == 0.0) {
    if (cbeta == 0.0) {
      cndx = 0;
      indx_strt = ldc;
      for (j = 0; j < ncb; j++) {
        for (i = 0; i < mra; i++)
          c[cndx + i] = 0.0;
        cndx = indx_strt;
        indx_strt += ldc;
      }
    } else {
      cndx = 0;
      indx_strt = ldc;
      for (j = 0; j < ncb; j++) {
        for (i = 0; i < mra; i++)
          c[cndx + i] = cbeta * c[cndx + i];
        cndx = indx_strt;
        indx_strt += ldc;
      }
    }
    return;
  }

  /*  if( ( tb != 1 ) && ( ncb == 1 ) && ( ldc == 1 ) ){ */
  if ((tb != 1) && (ncb == 1)) {
    /* matrix vector multiply */
    ftn_mvmul_cmplx8_(&ta, &tb, &mra, &kab, alpha, a, &lda, b, beta, c);
    return;
  }
  if ((ta != 1) && (mra == 1)) {
    /* vector matrix multiply */
    ftn_vmmul_cmplx8_(&ta, &tb, &ncb, &kab, alpha, a, b, &ldb, beta, c);
    return;
  }

  // Check for really small matrix sizes
  if ((colsb <= SMALL_COLSB) && (rowsa <= SMALL_ROWSA) &&
      (rowsb <= SMALL_ROWSB)) {
    if (ta == 0) { /* a is normally oriented */
      if (tb == 0) {
        astrt = 0;
        cstrt = 0;
        for (i = 0; i < rowsa; i++) {
          /* Transpose the a row of the a matrix */
          bstrt = 0;
          andx = astrt;
          indx = 0;
          for (ja = 0; ja < colsa; ja++) {
            buffera[indx++] = calpha * a[andx];
            andx += lda;
          }
          astrt++;
          cndx = cstrt;
          /* Now use the transposed row on all of b */
          if (cbeta == 0.0) {
            for (j = 0; j < colsb; j++) {
              temp = 0.0;
              bndx = bstrt;
              for (k = 0; k < rowsb; k++)
                temp += buffera[k] * b[bndx++];
              bstrt += ldb;
              c[cndx] = temp;
              cndx += ldc;
            }
          } else {
            for (j = 0; j < colsb; j++) {
              temp = 0.0;
              bndx = bstrt;
              for (k = 0; k < rowsb; k++)
                temp += buffera[k] * b[bndx++];
              bstrt += ldb;
              c[cndx] = temp + cbeta * c[cndx];
              cndx += ldc;
            }
          }
          cstrt++; /* set index for next row of c */
        }
      } else {
        if (tb == 1) { /* b is transposed */
          indx_strt = 0;
          bstrt = 0;
          for (j = 0; j < rowsb; j++) {
            indx = indx_strt;
            bndx = bstrt;
            for (i = 0; i < colsb; i++) {
              bufferb[indx] = b[bndx++];
              //	      	      printf( "( %f, %f )\n", crealf(
              // bufferb[indx] ), cimagf( bufferb[indx] ) );

              indx += rowsb;
            }
            indx_strt++;
            bstrt += ldb;
          }
        } else { /* b is conjugated */
          indx_strt = 0;
          bstrt = 0;
          for (j = 0; j < rowsb; j++) {
            indx = indx_strt;
            bndx = bstrt;
            for (i = 0; i < colsb; i++) {
              bufferb[indx] = conjf(b[bndx++]);
              //	      printf( "( %f, %f )\n", crealf( bufferb[indx] ),
              // cimagf( bufferb[indx] ) );
              indx += rowsb;
            }
            indx_strt++;
            bstrt += ldb;
          }
        }

        /* Now muliply the transposed b matrix by a */

        if (cbeta == 0.0) { /* beta == 0.0 */
          astrt = 0;
          indx = 0;
          cstrt = 0;
          for (i = 0; i < rowsa; i++) {
            /* Transpose the a row of the a matrix */
            andx = astrt;
            indx = 0; /* indx will be used for accessing both buffera and
                         bufferb */
            for (ja = 0; ja < colsa; ja++) {
              buffera[indx++] = a[andx];
              andx += lda;
            }
            astrt++;
            cndx = cstrt;
            indx = 0;
            for (j = 0; j < colsb; j++) {
              temp = 0.0;
              for (k = 0; k < rowsb; k++)
                temp += buffera[k] * bufferb[indx++];
              c[cndx] = calpha * temp;
              cndx += ldc;
              //	      printf( "( %f, %f )\n", crealf( c[cndx] ), cimagf(
              // c[cndx] ) );
            }
            cstrt++; /* set index for next row of c */
            indx_strt = 0;
          }
        } else { /* beta != 0.0 */
          astrt = 0;
          indx = 0;
          cstrt = 0;
          for (i = 0; i < rowsa; i++) {
            /* Transpose the a row of the a matrix */
            andx = astrt;
            indx = 0; /* indx will be used for accessing both buffera and
                         bufferb */
            for (ja = 0; ja < colsa; ja++) {
              buffera[indx++] = a[andx];
              andx += lda;
            }
            astrt++;
            cndx = cstrt;
            indx = 0;
            for (j = 0; j < colsb; j++) {
              temp = 0.0;
              for (k = 0; k < rowsb; k++)
                temp += buffera[k] * bufferb[indx++];
              c[cndx] = cbeta * c[cndx] + calpha * temp;
              cndx += ldc;
            }
            cstrt++; /* set index for next row of c */
            indx_strt = 0;
          }
        }
      }
    }

    else if (ta == 1) { /* a is transposed */
      if (tb == 0) {
        astrt = 0;
        cstrt = 0;
        if (cbeta == 0.0) { /* beta == 0 */
          for (i = 0; i < rowsa; i++) {
            cndx = cstrt;
            bstrt = 0;
            for (j = 0; j < colsb; j++) {
              temp = 0.0;
              bndx = bstrt;
              andx = astrt;
              for (k = 0; k < rowsb; k++)
                temp += a[andx++] * b[bndx++];
              c[cndx] = calpha * temp;
              //	      printf( "( %f, %f )\n", crealf( c[cndx] ), cimagf(
              // c[cndx] ) );

              bstrt += ldb;
              cndx += ldc;
            }
            cstrt++;
            astrt += lda;
            cstrt++; /* set index for next row of c */
          }
        } else { /* beta != 0 */
          astrt = 0;
          cstrt = 0;
          for (i = 0; i < rowsa; i++) {
            cndx = cstrt;
            bstrt = 0;
            ;
            for (j = 0; j < colsb; j++) {
              temp = 0.0;
              bndx = bstrt;
              andx = astrt;
              for (k = 0; k < rowsb; k++) {
                temp += a[andx] * b[bndx];
                andx++;
                bndx++;
              }
              c[cndx] = cbeta * c[cndx] + calpha * temp;
              // printf( "( %f, %f )\n", crealf( c[cndx] ), cimagf( c[cndx] ) );
              bstrt += ldb;
              cndx += ldc;
            }
            cstrt++;
            astrt += lda;
          }
        }
      } else {
        if (tb == 1) { /* b is transposed */
          indx_strt = 0;
          bstrt = 0;
          for (j = 0; j < rowsb; j++) {
            indx = indx_strt;
            bndx = bstrt;
            for (i = 0; i < colsb; i++) {
              bufferb[indx] = calpha * b[bndx++];
              // printf( "( %f, %f )\n", crealf( bufferb[indx] ), cimagf(
              // bufferb[indx] ) );
              indx += rowsb;
            }
            indx_strt++;
            bstrt += ldb;
          }
        } else { /* b is conjugated */
          indx_strt = 0;
          bstrt = 0;
          for (j = 0; j < rowsb; j++) {
            indx = indx_strt;
            bndx = bstrt;
            for (i = 0; i < colsb; i++) {
              bufferb[indx] = calpha * conjf(b[bndx++]);
              //	      printf( "( %f, %f )\n", crealf( bufferb[indx] ),
              // cimagf( bufferb[indx] ) );
              indx += rowsb;
            }
            indx_strt++;
            bstrt += ldb;
          }
        }

        /* Now muliply the transposed b matrix by a, which is transposed */

        if (cbeta == 0.0) { /* beta == 0.0 */
          astrt = 0;
          indx = 0;
          cstrt = 0;
          for (i = 0; i < rowsa; i++) {
            andx = astrt;
            indx = 0; /* indx will be used for accessing both buffera and
                         bufferb */
            cndx = cstrt;
            for (j = 0; j < colsb; j++) {
              temp = 0.0;
              andx = astrt;
              for (k = 0; k < rowsb; k++)
                temp += a[andx++] * bufferb[indx++];
              c[cndx] = temp;
              cndx += ldc;
              //	      printf( "( %f, %f )\n", crealf( c[cndx] ), cimagf(
              // c[cndx] ) );
            }
            cstrt++; /* set index for next row of c */
            astrt += lda;
          }
        }

        else { /* beta != 0.0 */
          astrt = 0;
          indx = 0;
          cstrt = 0;
          for (i = 0; i < rowsa; i++) {
            andx = astrt;
            indx = 0; /* indx will be used for accessing both buffera and
                         bufferb */

            cndx = cstrt;
            for (j = 0; j < colsb; j++) {
              temp = 0.0;
              andx = astrt;
              for (k = 0; k < rowsb; k++)
                temp += a[andx++] * bufferb[indx++];
              c[cndx] = cbeta * c[cndx] + temp;
              cndx += ldc;
              //	      printf( "( %f, %f )\n", crealf( c[cndx] ), cimagf(
              // c[cndx] ) );
            }
            cstrt++; /* set index for next row of c */
            astrt += lda;
          }
        }
      }
    } else { /* a is conjugated */
      if (tb == 0) {
        astrt = 0;
        cstrt = 0;
        for (i = 0; i < rowsa; i++) {
          /* Transpose the a row of the a matrix */
          bstrt = 0;
          andx = astrt;
          indx = 0;
          for (ja = 0; ja < colsa; ja++) {
            buffera[indx++] = calpha * a[andx];
            andx += lda;
          }
          astrt++;
          cndx = cstrt;
          /* Now use the transposed row on all of b */
          if (cbeta == 0.0) {
            for (j = 0; j < colsb; j++) {
              temp = 0.0;
              bndx = bstrt;
              for (k = 0; k < rowsb; k++)
                temp += buffera[k] * b[bndx++];
              bstrt += ldb;
              c[cndx] = temp;
              cndx += ldc;
            }
            cstrt++; /* set index for next row of c */
          } else {
            for (j = 0; j < colsb; j++) {
              temp = 0.0;
              bndx = bstrt;
              for (k = 0; k < rowsb; k++)
                temp += buffera[k] * b[bndx++];
              bstrt += ldb;
              c[cndx] = temp + cbeta * c[cndx];
              cndx += ldc;
            }
            cstrt++; /* set index for next row of c */
          }
        }
      } else {
        if (tb == 1) { /* b is transposed */
          indx_strt = 0;
          bstrt = 0;
          for (j = 0; j < rowsb; j++) {
            indx = indx_strt;
            bndx = bstrt;
            for (i = 0; i < colsb; i++) {
              bufferb[indx] = calpha * b[bndx++];
              //	      	      printf( "( %f, %f )\n", crealf(
              // bufferb[indx] ), cimagf( bufferb[indx] ) );

              indx += rowsb;
            }
            indx_strt++;
            bstrt += ldb;
          }
        } else { /* b is conjugated */
          indx_strt = 0;
          bstrt = 0;
          for (j = 0; j < rowsb; j++) {
            indx = indx_strt;
            bndx = bstrt;
            for (i = 0; i < colsb; i++) {
              bufferb[indx] = calpha * conjf(b[bndx++]);
              //	      printf( "( %f, %f )\n", crealf( bufferb[indx] ),
              // cimagf( bufferb[indx] ) );
              indx += rowsb;
            }
            indx_strt++;
            bstrt += ldb;
          }
        }

        /* Now muliply the transposed b matrix by a */

        if (cbeta == 0.0) { /* beta == 0.0 */
          astrt = 0;
          indx = 0;
          cstrt = 0;
          for (i = 0; i < rowsa; i++) {
            /* Transpose the a row of the a matrix */
            andx = astrt;
            indx = 0; /* indx will be used for accessing both buffera and
                         bufferb */
            for (ja = 0; ja < colsa; ja++) {
              buffera[indx++] = calpha * a[andx];
              andx += lda;
            }
            astrt++;
            cndx = cstrt;
            indx = 0;
            for (j = 0; j < colsb; j++) {
              temp = 0.0;
              for (k = 0; k < rowsb; k++)
                temp += buffera[k] * bufferb[indx++];
              c[cndx] = temp;
              cndx += ldc;
              //	      printf( "( %f, %f )\n", crealf( c[cndx] ), cimagf(
              // c[cndx] ) );
            }
            cstrt++; /* set index for next row of c */
            indx_strt = 0;
          }
        } else { /* beta != 0.0 */
          astrt = 0;
          indx = 0;
          cstrt = 0;
          for (i = 0; i < rowsa; i++) {
            /* Transpose the a row of the a matrix */
            andx = astrt;
            indx = 0; /* indx will be used for accessing both buffera and
                         bufferb */
            for (ja = 0; ja < colsa; ja++) {
              buffera[indx++] = calpha * a[andx];
              andx += lda;
            }
            astrt++;
            cndx = cstrt;
            indx = 0;
            for (j = 0; j < colsb; j++) {
              temp = 0.0;
              for (k = 0; k < rowsb; k++)
                temp += buffera[k] * bufferb[indx++];
              c[cndx] = cbeta * c[cndx] + temp;
              //	      printf( "( %f, %f )\n", crealf( c[cndx] ), cimagf(
              // c[cndx] ) );
              cndx += ldc;
            }
            cstrt++; /* set index for next row of c */
            indx_strt = 0;
          }
        }
      }
    }
  }

  else {
    tindex = 3;
    if (ta == 0)
      tindex--;
    if (tb == 0)
      tindex -= 2;
    switch (tindex) {
    case 0:
      ftn_mnaxnb_cmplx8_(&mra, &ncb, &kab, alpha, a, &lda, b, &ldb,
                           beta, c, &ldc);
      break;
    case 1:
      ftn_mtaxnb_cmplx8_(&mra, &ncb, &kab, alpha, a, &lda, b, &ldb,
                           beta, c, &ldc);
      break;
    case 2:
      ftn_mnaxtb_cmplx8_(&mra, &ncb, &kab, alpha, a, &lda, b, &ldb,
                           beta, c, &ldc);
      break;
    case 3:
      ftn_mtaxtb_cmplx8_(&mra, &ncb, &kab, alpha, a, &lda, b, &ldb,
                           beta, c, &ldc);
    }
  }

}

