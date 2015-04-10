/* Test the `vreinterpretQf32_s64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vreinterpretQf32_s64 (void)
{
  float32x4_t out_float32x4_t;
  int64x2_t arg0_int64x2_t;

  out_float32x4_t = vreinterpretq_f32_s64 (arg0_int64x2_t);
}

/* { dg-final { cleanup-saved-temps } } */
