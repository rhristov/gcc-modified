/* { dg-do compile { target { *-*-linux* && ia32 } } } */
/* { dg-options "-O2 -fpie" } */
/* { dg-final { scan-assembler "addl\[ \\t\]+\[$\]_GLOBAL_OFFSET_TABLE_, %ebx" } } */
/* { dg-final { scan-assembler "movl\[ \\t\]+c@GOTOFF\[(\]%ebx\[)\]" } } */
/* { dg-final { scan-assembler-not "movl\[ \\t\]+\[0-9]+\[(\]%esp\[)\], %ebx" } } */
long c;

int bar();

int foo (unsigned int iters)
{
  unsigned int i;
  
  int res = 0;
  static long t1;
  
  for (i = 0; i < iters; i++)
    {
      res = bar();
      t1 = c + res;
    }
  
  return t1 + res;
}
