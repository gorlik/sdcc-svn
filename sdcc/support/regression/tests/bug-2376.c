/*
   bug-2195.c

   A peephole optimizer bug in calls to __z88dk_fastcall.
*/

#include <string.h>
#include <testfwk.h>

char v[5];

void kputchar(unsigned char c) __z88dk_fastcall
{
  static int i;
  v[i++] = c;
}

void kputs(const char *p) __z88dk_fastcall
{
  while(*p)
    kputchar(*p++); /* The bug resulted in the peephole optimizer optimizing out the parameter to this call */
}

void testBug(void)
{
  const char *s = "test";
  kputs(s);
  ASSERT(!strcmp(s, v));
}

