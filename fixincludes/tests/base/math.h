/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/math.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */

#ifndef FIXINC_WRAP_MATH_H_MATH_EXCEPTION
#define FIXINC_WRAP_MATH_H_MATH_EXCEPTION 1

#ifdef __cplusplus
#define exception __math_exception
#endif


#if defined( BROKEN_CABS_CHECK )
#ifdef __STDC__

#else

#endif

#endif  /* BROKEN_CABS_CHECK */


#if defined( DARWIN_9_LONG_DOUBLE_FUNCS_2_CHECK )
#include <architecture/ppc/math.h>
#endif  /* DARWIN_9_LONG_DOUBLE_FUNCS_2_CHECK */


#if defined( HPPA_HPUX_FP_MACROS_CHECK )
#endif /* _INCLUDE_HPUX_SOURCE */

#if defined(_INCLUDE_HPUX_SOURCE) || \
   (defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L))
#  define FP_NORMAL     0
#  define FP_ZERO       1
#  define FP_INFINITE   2
#  define FP_SUBNORMAL  3
#  define FP_NAN        4
#endif

#ifdef _INCLUDE_HPUX_SOURCE

#endif  /* HPPA_HPUX_FP_MACROS_CHECK */


#if defined( HPUX11_CPP_POW_INLINE_CHECK )

#endif  /* HPUX11_CPP_POW_INLINE_CHECK */


#if defined( HPUX11_FABSF_CHECK )
#ifdef _PA_RISC
#ifndef __cplusplus
#  define fabsf(x) ((float)fabs((double)(float)(x)))
#endif
#endif
#endif  /* HPUX11_FABSF_CHECK */


#if defined( HPUX8_BOGUS_INLINES_CHECK )
extern "C" int abs(int);

#endif  /* HPUX8_BOGUS_INLINES_CHECK */


#if defined( MATH_EXCEPTION_CHECK )
typedef struct exception t_math_exception;
#endif  /* MATH_EXCEPTION_CHECK */


#if defined( MATH_HUGE_VAL_FROM_DBL_MAX_CHECK )

#define HUGE_VAL 3.1415e+9 /* really big */
#endif  /* MATH_HUGE_VAL_FROM_DBL_MAX_CHECK */


#if defined( RS6000_DOUBLE_CHECK )
#ifndef __cplusplus
extern int class();
#endif
#endif  /* RS6000_DOUBLE_CHECK */


#if defined( STRICT_ANSI_NOT_CTD_CHECK )
#if 1 && \
&& defined(mumbling) |& ( !defined(__STRICT_ANSI__)) \
(  !defined(__STRICT_ANSI__) && !defined(_XOPEN_SOURCE) \
||  !defined(__STRICT_ANSI__) ) /* not std C */
int foo;
#endif
#endif  /* STRICT_ANSI_NOT_CTD_CHECK */
#ifdef __cplusplus
#undef exception
#endif

#endif  /* FIXINC_WRAP_MATH_H_MATH_EXCEPTION */
