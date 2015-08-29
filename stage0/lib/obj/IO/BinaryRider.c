#include <IO/BinaryRider.d>
#include <__oo2c.h>
#include <setjmp.h>

void IO_BinaryRider__ReaderDesc_SetPos(IO_BinaryRider__Reader r, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2102))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2102))+4);
  i2 = newPos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2110)))), IO__ChannelDesc_SetPos)),IO__ChannelDesc_SetPos)((IO__Channel)i0, i2);
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadBytes(IO_BinaryRider__Reader r, OOC_CHAR8 x[], OOC_LEN x_0d, OOC_INT32 start, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2362))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2362))+4);
  i2 = start;
  i3 = n;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2370)))), IO__ByteChannelDesc_Read)),IO__ByteChannelDesc_Read)((IO__ByteChannel)i0, (void*)(OOC_INT32)x, -1, i2, i3);
  i0 = i0!=i3;
  if (!i0) goto l4;
  IO__RaiseFormatError((Object__String)((OOC_INT32)_c0));
l4:
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadBytesOrdered(IO_BinaryRider__Reader r, OOC_CHAR8 x[], OOC_LEN x_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_INT8*)(_check_pointer(i0, 2660));
  i1 = i1==0;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)(_check_pointer(i0, 2690));
  i2 = IO_BinaryRider__systemByteOrder;
  i1 = i1==i2;
  
  goto l4;
l3:
  i1=OOC_TRUE;
l4:
  if (i1) goto l18;
  i1 = x_0d-1;
  i = i1;
  i2 = i1>=0;
  if (!i2) goto l22;
  i2 = (OOC_INT32)_c1;
  
l9_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2930))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2930))+4);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2938)))), IO__ByteChannelDesc_Read)),IO__ByteChannelDesc_Read)((IO__ByteChannel)i4, (void*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 2945))), 1, 0, 1);
  i3 = i3!=1;
  if (!i3) goto l12;
  IO__RaiseFormatError((Object__String)i2);
l12:
  i1 = i1+-1;
  i = i1;
  i3 = i1>=0;
  if (i3) goto l9_loop;
  goto l22;
l18:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2735))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2735))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2743)))), IO__ByteChannelDesc_Read)),IO__ByteChannelDesc_Read)((IO__ByteChannel)i0, (void*)(OOC_INT32)x, -1, 0, x_0d);
  i0 = i0!=x_0d;
  if (!i0) goto l22;
  IO__RaiseFormatError((Object__String)((OOC_INT32)_c2));
l22:
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadBool(IO_BinaryRider__Reader r, OOC_CHAR8 *_bool) {
  register OOC_INT32 i0,i1;
  OOC_INT8 byte;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3179))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3179))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3187)))), IO__ByteChannelDesc_Read)),IO__ByteChannelDesc_Read)((IO__ByteChannel)i0, (void*)(OOC_INT32)&byte, 1, 0, 1);
  i0 = i0!=1;
  if (i0) goto l10;
  i0 = byte;
  i1 = i0!=0;
  if (i1) goto l5;
  i0=OOC_FALSE;
  goto l7;
l5:
  i0 = i0!=1;
  
l7:
  if (!i0) goto l11;
  IO__RaiseFormatError((Object__String)((OOC_INT32)_c3));
  goto l11;
l10:
  IO__RaiseFormatError((Object__String)((OOC_INT32)_c4));
l11:
  i0 = byte;
  *_bool = (i0!=0);
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadChar(IO_BinaryRider__Reader r, OOC_CHAR8 *ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3477))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3477))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3485)))), IO__ByteChannelDesc_Read)),IO__ByteChannelDesc_Read)((IO__ByteChannel)i0, (void*)(OOC_INT32)ch, 1, 0, 1);
  i0 = i0!=1;
  if (!i0) goto l4;
  IO__RaiseFormatError((Object__String)((OOC_INT32)_c5));
l4:
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadLChar(IO_BinaryRider__Reader r, OOC_CHAR16 *ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3659)))), IO_BinaryRider__ReaderDesc_ReadBytesOrdered)),IO_BinaryRider__ReaderDesc_ReadBytesOrdered)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)ch, 2);
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadString(IO_BinaryRider__Reader r, OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 len;
  OOC_INT16 cnt;

  i0 = s_0d-1;
  len = i0;
  i1 = (OOC_INT32)r;
  i2=-1;
l1_loop:
  i2 = i2+1;
  cnt = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4071)))), IO_BinaryRider__ReaderDesc_ReadChar)),IO_BinaryRider__ReaderDesc_ReadChar)((IO_BinaryRider__Reader)i1, (void*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 4082))));
  i3 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 4101)));
  i3 = i3==(OOC_CHAR8)'\000';
  if (i3) goto l4;
  i3 = i2==i0;
  
  goto l6;
l4:
  i3=OOC_TRUE;
l6:
  if (!i3) goto l1_loop;
l9:
  i0 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 4134)));
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l12;
  IO__RaiseFormatError((Object__String)((OOC_INT32)_c6));
l12:
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadLString(IO_BinaryRider__Reader r, OOC_CHAR16 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 len;
  OOC_INT16 cnt;

  i0 = s_0d-1;
  len = i0;
  i1 = (OOC_INT32)r;
  i2=-1;
l1_loop:
  i2 = i2+1;
  cnt = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4607)))), IO_BinaryRider__ReaderDesc_ReadLChar)),IO_BinaryRider__ReaderDesc_ReadLChar)((IO_BinaryRider__Reader)i1, (void*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 4619))*2));
  i3 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 4638))*2);
  i3 = i3==(OOC_CHAR8)'\000';
  if (i3) goto l4;
  i3 = i2==i0;
  
  goto l6;
l4:
  i3=OOC_TRUE;
l6:
  if (!i3) goto l1_loop;
l9:
  i0 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 4671))*2);
  i0 = i0!=(OOC_CHAR8)'\000';
  if (!i0) goto l12;
  IO__RaiseFormatError((Object__String)((OOC_INT32)_c7));
l12:
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadSInt(IO_BinaryRider__Reader r, OOC_INT8 *sint) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4853)))), IO_BinaryRider__ReaderDesc_ReadBytesOrdered)),IO_BinaryRider__ReaderDesc_ReadBytesOrdered)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)sint, 1);
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadInt(IO_BinaryRider__Reader r, OOC_INT16 *_int) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4974)))), IO_BinaryRider__ReaderDesc_ReadBytesOrdered)),IO_BinaryRider__ReaderDesc_ReadBytesOrdered)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)_int, 2);
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadLInt(IO_BinaryRider__Reader r, OOC_INT32 *lint) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5113)))), IO_BinaryRider__ReaderDesc_ReadBytesOrdered)),IO_BinaryRider__ReaderDesc_ReadBytesOrdered)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)lint, 4);
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadNum(IO_BinaryRider__Reader r, OOC_INT32 *num) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT8 s;
  OOC_INT32 y;
  OOC_CHAR8 x;

  s = 0;
  y = 0;
  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5343)))), IO_BinaryRider__ReaderDesc_ReadChar)),IO_BinaryRider__ReaderDesc_ReadChar)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
  i1 = x;
  i1 = i1>=(OOC_CHAR8)'\200';
  if (i1) goto l3;
  i0=0;i1=0;
  goto l13;
l3:
  i1=0;i2=0;
l4_loop:
  i3 = x;
  i1 = i1+(_ash((i3-128),i2));
  y = i1;
  i2 = i2+7;
  s = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5451)))), IO_BinaryRider__ReaderDesc_ReadChar)),IO_BinaryRider__ReaderDesc_ReadChar)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
  i3 = i2<28;
  if (i3) goto l7;
  i3=OOC_FALSE;
  goto l9;
l7:
  i3 = x;
  i3 = i3>=(OOC_CHAR8)'\200';
  
l9:
  if (i3) goto l4_loop;
l12:
  i0=i2;
l13:
  i2 = x;
  i3 = i2>=(OOC_CHAR8)'\200';
  if (i3) goto l24;
  i3 = i0==28;
  if (i3) goto l18;
  i3=OOC_FALSE;
  goto l20;
l18:
  i3 = (OOC_CHAR8)'\010'<=i2;
  
l20:
  if (i3) goto l22;
  i3=OOC_FALSE;
  goto l26;
l22:
  i3 = i2<(OOC_CHAR8)'x';
  
  goto l26;
l24:
  i3=OOC_TRUE;
l26:
  if (i3) goto l28;
  *num = ((_ash((_lsh(OOC_INT32, i2, 25)),(i0-25)))+i1);
  goto l29;
l28:
  IO__RaiseFormatError((Object__String)((OOC_INT32)_c8));
l29:
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadReal(IO_BinaryRider__Reader r, OOC_REAL32 *real) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5889)))), IO_BinaryRider__ReaderDesc_ReadBytesOrdered)),IO_BinaryRider__ReaderDesc_ReadBytesOrdered)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)real, 4);
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadLReal(IO_BinaryRider__Reader r, OOC_REAL64 *lreal) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6033)))), IO_BinaryRider__ReaderDesc_ReadBytesOrdered)),IO_BinaryRider__ReaderDesc_ReadBytesOrdered)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)lreal, 8);
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadSet(IO_BinaryRider__Reader r, OOC_UINT32 *s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6151)))), IO_BinaryRider__ReaderDesc_ReadBytesOrdered)),IO_BinaryRider__ReaderDesc_ReadBytesOrdered)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)s, 4);
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_ReadStr(IO_BinaryRider__Reader r, Object__String *s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 len;
  OOC_CHAR8 buffer8[1024];
  OOC_CHAR8 *dynBuffer8;
  OOC_INT32 i;
  OOC_INT32 x;
  OOC_CHAR32 buffer32[512];
  OOC_CHAR32 *dynBuffer32;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6547)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i1 = len;
  i2 = i1==0;
  if (i2) goto l31;
  i2 = i1>0;
  if (i2) goto l25;
  i1 = (-i1)-1;
  i2 = i1<512;
  len = i1;
  if (i2) goto l15;
  i2 = (OOC_INT32)RT0__NewObject(_td_IO_BinaryRider__6488.baseTypes[0], i1);
  dynBuffer32 = (void*)i2;
  i1 = i1-1;
  i3 = 0<=i1;
  i = 0;
  if (!i3) goto l14;
  i3=0;
l9_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7303)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
  i4 = x;
  *(OOC_UINT32*)((OOC_INT32)buffer32+(_check_index(i3, 512, OOC_UINT32, 7334))*4) = i4;
  i3 = i3+1;
  i4 = i3<=i1;
  i = i3;
  if (i4) goto l9_loop;
l14:
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 7411)), (OOC_INT32)0);
  i1 = len;
  i0 = (OOC_INT32)Object__NewUCS4Region((void*)(_check_pointer(i2, 7411)), i0, 0, i1);
  *s = (Object__String)i0;
  goto l32;
l15:
  i1 = i1-1;
  i2 = 0<=i1;
  i = 0;
  if (!i2) goto l23;
  i2=0;
l18_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7103)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
  i3 = x;
  *(OOC_UINT32*)((OOC_INT32)buffer32+(_check_index(i2, 512, OOC_UINT32, 7134))*4) = i3;
  i2 = i2+1;
  i3 = i2<=i1;
  i = i2;
  if (i3) goto l18_loop;
l23:
  i0 = len;
  i0 = (OOC_INT32)Object__NewUCS4Region((void*)(OOC_INT32)buffer32, 512, 0, i0);
  *s = (Object__String)i0;
  goto l32;
l25:
  i1 = i1-1;
  len = i1;
  i2 = i1<1024;
  if (i2) goto l28;
  i2 = (OOC_INT32)RT0__NewObject(_td_IO_BinaryRider__6399.baseTypes[0], i1);
  dynBuffer8 = (void*)i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6824)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i0, (void*)(_check_pointer(i2, 6845)), -1, 0, i1);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6903)), (OOC_INT32)0);
  i1 = len;
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i2, 6903)), i0, 0, i1);
  *s = (Object__String)i0;
  goto l32;
l28:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6691)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)buffer8, 1024, 0, i1);
  i0 = len;
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)buffer8, 1024, 0, i0);
  *s = (Object__String)i0;
  goto l32;
l31:
  *s = (Object__String)(OOC_INT32)0;
l32:
  return;
  ;
}

void IO_BinaryRider__ReaderDesc_SetByteOrder(IO_BinaryRider__Reader r, OOC_INT8 order) {
  register OOC_INT32 i0,i1;

  i0 = order;
  i1 = i0>=0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = i0<=2;
  
l4:
  _assert(i1, 127, 7526);
  i1 = (OOC_INT32)r;
  *(OOC_INT8*)(_check_pointer(i1, 7583)) = i0;
  return;
  ;
}

void IO_BinaryRider__WriterDesc_SetPos(IO_BinaryRider__Writer w, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8021))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8021))+4);
  i2 = newPos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8029)))), IO__ChannelDesc_SetPos)),IO__ChannelDesc_SetPos)((IO__Channel)i0, i2);
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteBytes(IO_BinaryRider__Writer w, const OOC_CHAR8 x[], OOC_LEN x_0d, OOC_INT32 start, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8309))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8309))+4);
  i2 = start;
  i3 = n;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8317)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i0, (void*)(OOC_INT32)x, -1, i2, i3);
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteOrdered(IO_BinaryRider__Writer w, OOC_CHAR8 x[], OOC_LEN x_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 d;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT8*)(_check_pointer(i0, 8547));
  i1 = i1==0;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)(_check_pointer(i0, 8577));
  i2 = IO_BinaryRider__systemByteOrder;
  i1 = i1==i2;
  
  goto l4;
l3:
  i1=OOC_TRUE;
l4:
  if (i1) goto l15;
  i1 = x_0d-1;
  i = i1;
  i2 = i1>=0;
  if (!i2) goto l16;
l9_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8703))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8703))+4);
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8711)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i3, (void*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 8719))), 1, 0, 1);
  d = i2;
  i1 = i1+-1;
  i = i1;
  i2 = i1>=0;
  if (i2) goto l9_loop;
  goto l16;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8622))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8622))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8630)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i0, (void*)(OOC_INT32)x, -1, 0, x_0d);
l16:
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteChar(IO_BinaryRider__Writer w, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8866))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8866))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8875)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i0, (void*)(OOC_INT32)&ch, 1, 0, 1);
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteBool(IO_BinaryRider__Writer w, OOC_CHAR8 _bool) {
  register OOC_INT32 i0;

  i0 = _bool;
  if (i0) goto l3;
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9044)))), IO_BinaryRider__WriterDesc_WriteChar)),IO_BinaryRider__WriterDesc_WriteChar)((IO_BinaryRider__Writer)i0, (OOC_CHAR8)'\000');
  goto l4;
l3:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9011)))), IO_BinaryRider__WriterDesc_WriteChar)),IO_BinaryRider__WriterDesc_WriteChar)((IO_BinaryRider__Writer)i0, (OOC_CHAR8)'\001');
l4:
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteLChar(IO_BinaryRider__Writer w, OOC_CHAR16 ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9168)))), IO_BinaryRider__WriterDesc_WriteOrdered)),IO_BinaryRider__WriterDesc_WriteOrdered)((IO_BinaryRider__Writer)i0, (void*)(OOC_INT32)&ch, 2);
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteString(IO_BinaryRider__Writer w, const OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9383))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9383))+4);
  i2 = Strings__Length((void*)(OOC_INT32)s, s_0d);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9391)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i0, (void*)(OOC_INT32)s, -1, 0, (i2+1));
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteLString(IO_BinaryRider__Writer w, const OOC_CHAR16 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1=-1;
l1_loop:
  i1 = i1+1;
  i = i1;
  i2 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT32, 9673))*2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9658)))), IO_BinaryRider__WriterDesc_WriteLChar)),IO_BinaryRider__WriterDesc_WriteLChar)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT32, 9690))*2);
  i2 = i2==(OOC_CHAR8)'\000';
  if (!i2) goto l1_loop;
l5:
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteSInt(IO_BinaryRider__Writer w, OOC_INT8 sint) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9828))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9828))+4);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9836)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i0, (void*)(OOC_INT32)&sint, 1, 0, 1);
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteInt(IO_BinaryRider__Writer w, OOC_INT16 _int) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9950)))), IO_BinaryRider__WriterDesc_WriteOrdered)),IO_BinaryRider__WriterDesc_WriteOrdered)((IO_BinaryRider__Writer)i0, (void*)(OOC_INT32)&_int, 2);
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteLInt(IO_BinaryRider__Writer w, OOC_INT32 lint) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10084)))), IO_BinaryRider__WriterDesc_WriteOrdered)),IO_BinaryRider__WriterDesc_WriteOrdered)((IO_BinaryRider__Writer)i0, (void*)(OOC_INT32)&lint, 4);
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteNum(IO_BinaryRider__Writer w, OOC_INT32 lint) {
  register OOC_INT32 i0,i1,i2;

  i0 = lint;
  i1 = i0<-64;
  if (i1) goto l3;
  i0 = i0>63;
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  i1 = (OOC_INT32)w;
  if (!i0) goto l16;
l7_loop:
  i0 = lint;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10298)))), IO_BinaryRider__WriterDesc_WriteChar)),IO_BinaryRider__WriterDesc_WriteChar)((IO_BinaryRider__Writer)i1, ((_mod(i0,128))+128));
  i0 = i0>>7;
  i2 = i0<-64;
  lint = i0;
  if (i2) goto l10;
  i0 = i0>63;
  
  goto l12;
l10:
  i0=OOC_TRUE;
l12:
  if (i0) goto l7_loop;
l16:
  i0 = lint;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10372)))), IO_BinaryRider__WriterDesc_WriteChar)),IO_BinaryRider__WriterDesc_WriteChar)((IO_BinaryRider__Writer)i1, (_mod(i0,128)));
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteReal(IO_BinaryRider__Writer w, OOC_REAL32 real) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10514)))), IO_BinaryRider__WriterDesc_WriteOrdered)),IO_BinaryRider__WriterDesc_WriteOrdered)((IO_BinaryRider__Writer)i0, (void*)(OOC_INT32)&real, 4);
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteLReal(IO_BinaryRider__Writer w, OOC_REAL64 lreal) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10653)))), IO_BinaryRider__WriterDesc_WriteOrdered)),IO_BinaryRider__WriterDesc_WriteOrdered)((IO_BinaryRider__Writer)i0, (void*)(OOC_INT32)&lreal, 8);
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteSet(IO_BinaryRider__Writer w, OOC_UINT32 s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10764)))), IO_BinaryRider__WriterDesc_WriteOrdered)),IO_BinaryRider__WriterDesc_WriteOrdered)((IO_BinaryRider__Writer)i0, (void*)(OOC_INT32)&s, 4);
  return;
  ;
}

void IO_BinaryRider__WriterDesc_WriteStr(IO_BinaryRider__Writer w, Object__String s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Object__CharsLatin1 chars8;
  Object__CharsUCS4 chars32;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l19;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11026)))), &_td_Object__String8Desc);
  if (i1) goto l17;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11183)))), &_td_Object__String32Desc);
  if (i1) goto l7;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11180)))), 11180);
  goto l20;
l7:
  i1 = (OOC_INT32)w;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 11266));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11254)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, ((-i2)-1));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11298)))), Object__String32Desc_CharsUCS4)),Object__String32Desc_CharsUCS4)((Object__String32)i0);
  chars32 = (Object__CharsUCS4)i2;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 11335));
  i0 = i0-1;
  i3 = 0<=i0;
  i = 0;
  if (!i3) goto l20;
  i3=0;
l10_loop:
  i4 = _check_pointer(i2, 11380);
  i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
  i4 = *(OOC_UINT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 11380))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11359)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i4);
  i3 = i3+1;
  i4 = i3<=i0;
  i = i3;
  if (i4) goto l10_loop;
  goto l20;
l17:
  i1 = (OOC_INT32)w;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 11066));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11055)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, (i2+1));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11097)))), Object__String8Desc_CharsLatin1)),Object__String8Desc_CharsLatin1)((Object__String8)i0);
  chars8 = (Object__CharsLatin1)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11127))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11127))+4);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 11155));
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11135)))), IO__ByteChannelDesc_Write)),IO__ByteChannelDesc_Write)((IO__ByteChannel)i1, (void*)(_check_pointer(i2, 11148)), -1, 0, i0);
  goto l20;
l19:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10991)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, 0);
l20:
  return;
  ;
}

void IO_BinaryRider__WriterDesc_SetByteOrder(IO_BinaryRider__Writer w, OOC_INT8 order) {
  register OOC_INT32 i0,i1;

  i0 = order;
  i1 = i0>=0;
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l4;
l3:
  i1 = i0<=2;
  
l4:
  _assert(i1, 127, 11504);
  i1 = (OOC_INT32)w;
  *(OOC_INT8*)(_check_pointer(i1, 11561)) = i0;
  return;
  ;
}

void IO_BinaryRider__InitReader(IO_BinaryRider__Reader r, IO__ByteChannel ch, OOC_INT8 byteOrder) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = byteOrder;
  *(OOC_INT8*)(_check_pointer(i0, 12055)) = i1;
  i1 = (OOC_INT32)ch;
  *(OOC_INT32*)((_check_pointer(i0, 12086))+4) = i1;
  return;
  ;
}

IO_BinaryRider__Reader IO_BinaryRider__ConnectReader(IO__ByteChannel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO_BinaryRider__Reader.baseTypes[0]);
  i1 = (OOC_INT32)ch;
  IO_BinaryRider__InitReader((IO_BinaryRider__Reader)i0, (IO__ByteChannel)i1, 1);
  return (IO_BinaryRider__Reader)i0;
  ;
}

void IO_BinaryRider__InitWriter(IO_BinaryRider__Writer w, IO__ByteChannel ch, OOC_INT8 byteOrder) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = byteOrder;
  *(OOC_INT8*)(_check_pointer(i0, 12813)) = i1;
  i1 = (OOC_INT32)ch;
  *(OOC_INT32*)((_check_pointer(i0, 12843))+4) = i1;
  return;
  ;
}

IO_BinaryRider__Writer IO_BinaryRider__ConnectWriter(IO__ByteChannel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO_BinaryRider__Writer.baseTypes[0]);
  i1 = (OOC_INT32)ch;
  IO_BinaryRider__InitWriter((IO_BinaryRider__Writer)i0, (IO__ByteChannel)i1, 1);
  return (IO_BinaryRider__Writer)i0;
  ;
}

static void IO_BinaryRider__SetDefaultByteOrder(OOC_CHAR8 x[], OOC_LEN x_0d) {
  register OOC_INT32 i0;

  i0 = *(OOC_UINT8*)((OOC_INT32)x+(_check_index(0, x_0d, OOC_UINT8, 13208)));
  i0 = (_type_cast_fast(OOC_UINT8, OOC_UINT8, i0))==(OOC_CHAR8)'\001';
  if (i0) goto l3;
  IO_BinaryRider__systemByteOrder = 2;
  goto l4;
l3:
  IO_BinaryRider__systemByteOrder = 1;
l4:
  return;
  ;
}

static void IO_BinaryRider__Init() {
  OOC_INT16 i;

  i = 1;
  IO_BinaryRider__SetDefaultByteOrder((void*)(OOC_INT32)&i, 2);
  return;
  ;
}

void OOC_IO_BinaryRider_init(void) {
  _c0 = Object__NewLatin1Region("Short file", 11, (OOC_INT32)0, 10);
  _c1 = Object__NewLatin1Region("Short file", 11, (OOC_INT32)0, 10);
  _c2 = Object__NewLatin1Region("Short file", 11, (OOC_INT32)0, 10);
  _c3 = Object__NewLatin1Region("Value out of range", 19, (OOC_INT32)0, 18);
  _c4 = Object__NewLatin1Region("Short file", 11, (OOC_INT32)0, 10);
  _c5 = Object__NewLatin1Region("Short file", 11, (OOC_INT32)0, 10);
  _c6 = Object__NewLatin1Region("String not terminated", 22, (OOC_INT32)0, 21);
  _c7 = Object__NewLatin1Region("String not terminated", 22, (OOC_INT32)0, 21);
  _c8 = Object__NewLatin1Region("Overflow", 9, (OOC_INT32)0, 8);

  IO_BinaryRider__Init();
  return;
  ;
}

/* --- */