#include <CodeMotion3.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_INT32 CodeMotion3__P(CodeMotion3__Node ptr, CodeMotion3__Node x, OOC_CHAR8 deref) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)ptr;
  i1 = i0!=0;
  if (i1) goto l3;
  i0=0;
  goto l13;
l3:
  i1 = (OOC_INT32)x;
  i1 = *(OOC_INT32*)i1;
  i2 = deref;
  i3=0;
l4_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+4);
  if (!i2) goto l8;
  i3=i1;
l8:
  i4 = i0!=0;
  if (i4) goto l4_loop;
l12:
  i0=i3;
l13:
  return i0;
  ;
}

void OOC_CodeMotion3_init(void) {

  return;
  ;
}

void OOC_CodeMotion3_destroy(void) {
}

/* --- */
