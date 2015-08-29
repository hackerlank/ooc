#include "OOC/SSA/Schedule.d"
#include "__oo2c.h"

void OOC_SSA_Schedule__InitInfo(OOC_SSA_Schedule__Info info) {

  return;
  ;
}

static void OOC_SSA_Schedule__InitBlock(OOC_SSA_Schedule__Block b, OOC_SSA_Schedule__Block dominator) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 5806))+8) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 5831))+12) = (OOC_INT32)0;
  i1 = (OOC_INT32)dominator;
  *(OOC_INT32*)((_check_pointer(i0, 5856))+4) = i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  *(OOC_INT32*)(_check_pointer(i0, 5996)) = (OOC_INT32)0;
  goto l4;
l3:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5938))+16);
  *(OOC_INT32*)(_check_pointer(i0, 5916)) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 5964))+16) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i0, 6028))+16) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 6051))+20) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 6080))+24) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 6102))+32) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 6131))+36) = 0;
  *(OOC_UINT8*)((_check_pointer(i0, 6153))+28) = OOC_FALSE;
  *(OOC_INT32*)((_check_pointer(i0, 6181))+40) = -1;
  *(OOC_INT32*)((_check_pointer(i0, 6198))+44) = (OOC_INT32)0;
  return;
  ;
}

void OOC_SSA_Schedule__BlockDesc_SetInfo(OOC_SSA_Schedule__Block b, OOC_SSA_Schedule__Info info) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA_Schedule__Block nested;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)info;
  *(OOC_INT32*)((_check_pointer(i0, 6313))+44) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6344))+16);
  i2 = i0!=(OOC_INT32)0;
  nested = (OOC_SSA_Schedule__Block)i0;
  if (!i2) goto l8;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6395)))), OOC_SSA_Schedule__BlockDesc_SetInfo)),OOC_SSA_Schedule__BlockDesc_SetInfo)((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Info)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6435));
  nested = (OOC_SSA_Schedule__Block)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  return;
  ;
}

OOC_SSA_Schedule__Block OOC_SSA_Schedule__BlockDesc_DefaultTarget(OOC_SSA_Schedule__Block b) {

  return (OOC_SSA_Schedule__Block)(OOC_INT32)0;
  ;
}

static void OOC_SSA_Schedule__RevertDomList(OOC_SSA_Schedule__Block b) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SSA_Schedule__Block _new;
  OOC_SSA_Schedule__Block old;
  OOC_SSA_Schedule__Block next;

  _new = (OOC_SSA_Schedule__Block)(OOC_INT32)0;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6887))+16);
  old = (OOC_SSA_Schedule__Block)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  i1=(OOC_INT32)0;
  goto l9;
l3:
  i2=(OOC_INT32)0;
l4_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6940));
  next = (OOC_SSA_Schedule__Block)i3;
  *(OOC_INT32*)(_check_pointer(i1, 6960)) = i2;
  _new = (OOC_SSA_Schedule__Block)i1;
  old = (OOC_SSA_Schedule__Block)i3;
  i2 = i3!=(OOC_INT32)0;
  if (!i2) goto l9;
  i2=i1;i1=i3;
  goto l4_loop;
l9:
  *(OOC_INT32*)((_check_pointer(i0, 7029))+16) = i1;
  return;
  ;
}

static void OOC_SSA_Schedule__ClearJump(OOC_SSA_Schedule__Jump reference) {
  register OOC_INT32 i0,i1,i2;
  auto void OOC_SSA_Schedule__ClearJump_Remove(OOC_SSA_Schedule__Jump *list, OOC_SSA_Schedule__Jump entry);
    
    void OOC_SSA_Schedule__ClearJump_Remove(OOC_SSA_Schedule__Jump *list, OOC_SSA_Schedule__Jump entry) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)*list;
      i1 = (OOC_INT32)entry;
      i2 = i0==i1;
      if (i2) goto l3;
      OOC_SSA_Schedule__ClearJump_Remove((void*)((_check_pointer(i0, 7264))+8), (OOC_SSA_Schedule__Jump)i1);
      goto l4;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7217))+8);
      *list = (OOC_SSA_Schedule__Jump)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)reference;
  _assert((i0!=(OOC_INT32)0), 127, 7330);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7374))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7374))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 7380))+36);
  *(OOC_INT32*)((_check_pointer(i1, 7380))+36) = (i2-1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7414))+4);
  OOC_SSA_Schedule__ClearJump_Remove((void*)((_check_pointer(i1, 7420))+32), (OOC_SSA_Schedule__Jump)i0);
  return;
  ;
}

static void OOC_SSA_Schedule__SetJump(OOC_SSA_Schedule__Jump *reference, OOC_SSA_Schedule__Block src, OOC_SSA_Schedule__Block dest) {
  register OOC_INT32 i0,i1,i2;
  auto OOC_SSA_Schedule__Jump OOC_SSA_Schedule__SetJump_NewJump(OOC_SSA_Schedule__Block src, OOC_SSA_Schedule__Block dest, OOC_SSA_Schedule__Jump nextTargetUse);
    
    OOC_SSA_Schedule__Jump OOC_SSA_Schedule__SetJump_NewJump(OOC_SSA_Schedule__Block src, OOC_SSA_Schedule__Block dest, OOC_SSA_Schedule__Jump nextTargetUse) {
      register OOC_INT32 i0,i1;
      OOC_SSA_Schedule__Jump j;

      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__Jump.baseTypes[0]);
      j = (OOC_SSA_Schedule__Jump)i0;
      i1 = (OOC_INT32)src;
      *(OOC_INT32*)(_check_pointer(i0, 7649)) = i1;
      i1 = (OOC_INT32)dest;
      *(OOC_INT32*)((_check_pointer(i0, 7670))+4) = i1;
      i1 = (OOC_INT32)nextTargetUse;
      *(OOC_INT32*)((_check_pointer(i0, 7693))+8) = i1;
      *(OOC_UINT8*)((_check_pointer(i0, 7734))+12) = OOC_FALSE;
      return (OOC_SSA_Schedule__Jump)i0;
      ;
    }


  i0 = (OOC_INT32)*reference;
  _assert((i0==(OOC_INT32)0), 127, 7808);
  i0 = (OOC_INT32)dest;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7847))+36);
  *(OOC_INT32*)((_check_pointer(i0, 7847))+36) = (i1+1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7901))+32);
  i2 = (OOC_INT32)src;
  i0 = (OOC_INT32)OOC_SSA_Schedule__SetJump_NewJump((OOC_SSA_Schedule__Block)i2, (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Jump)i1);
  *reference = (OOC_SSA_Schedule__Jump)i0;
  i1 = (OOC_INT32)dest;
  *(OOC_INT32*)((_check_pointer(i1, 7927))+32) = i0;
  return;
  ;
}

OOC_CHAR8 OOC_SSA_Schedule__Dominates(OOC_SSA_Schedule__Block dominator, OOC_SSA_Schedule__Block child) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)child;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)dominator;
  i0 = i0!=i1;
  
l5:
  if (!i0) goto l16;
  i0 = (OOC_INT32)dominator;
l7_loop:
  i1 = (OOC_INT32)child;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8106))+4);
  child = (OOC_SSA_Schedule__Block)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = i1!=i0;
  
l12:
  if (i1) goto l7_loop;
l16:
  i0 = (OOC_INT32)child;
  return (i0!=(OOC_INT32)0);
  ;
}

void OOC_SSA_Schedule__ChangeJumpTarget(OOC_SSA_Schedule__Jump reference, OOC_SSA_Schedule__Block dest) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)reference;
  _assert((i0!=(OOC_INT32)0), 127, 8239);
  OOC_SSA_Schedule__ClearJump((OOC_SSA_Schedule__Jump)i0);
  i1 = (OOC_INT32)dest;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 8315))+36);
  *(OOC_INT32*)((_check_pointer(i1, 8315))+36) = (i2+1);
  *(OOC_INT32*)((_check_pointer(i0, 8341))+4) = i1;
  i2 = _check_pointer(i0, 8370);
  i3 = *(OOC_UINT8*)((_check_pointer(i1, 8402))+28);
  if (i3) goto l3;
  i3=OOC_FALSE;
  goto l4;
l3:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8443));
  i3 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i3);
  
l4:
  *(OOC_UINT8*)(i2+12) = i3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8487))+32);
  *(OOC_INT32*)((_check_pointer(i0, 8464))+8) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 8517))+32) = i0;
  return;
  ;
}

static void OOC_SSA_Schedule__ChangeTargets(OOC_SSA_Schedule__Block oldTarget, OOC_SSA_Schedule__Block newTarget) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)newTarget;
  i1 = (OOC_INT32)oldTarget;
  _assert((i1!=i0), 127, 8713);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8766))+32);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l8;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8825))+32);
  OOC_SSA_Schedule__ChangeJumpTarget((OOC_SSA_Schedule__Jump)i2, (OOC_SSA_Schedule__Block)i0);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8766))+32);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l3_loop;
l8:
  return;
  ;
}

static void OOC_SSA_Schedule__InitBranchBlock(OOC_SSA_Schedule__BranchBlock b, OOC_SSA_Schedule__Block dominator, OOC_SSA__Opnd predicate, OOC_CHAR8 branchOnTrue) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)dominator;
  i1 = (OOC_INT32)b;
  OOC_SSA_Schedule__InitBlock((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i0);
  *(OOC_INT32*)((_check_pointer(i1, 9062))+48) = (OOC_INT32)0;
  i0 = (OOC_INT32)predicate;
  *(OOC_INT32*)((_check_pointer(i1, 9082))+52) = i0;
  i0 = branchOnTrue;
  *(OOC_UINT8*)((_check_pointer(i1, 9112))+56) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 9149))+60) = (OOC_INT32)0;
  return;
  ;
}

static OOC_SSA_Schedule__BranchBlock OOC_SSA_Schedule__NewBranchBlock(OOC_SSA_Schedule__Block dominator, OOC_SSA__Opnd predicate, OOC_CHAR8 branchOnTrue) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__BranchBlock.baseTypes[0]);
  i1 = (OOC_INT32)dominator;
  i2 = (OOC_INT32)predicate;
  i3 = branchOnTrue;
  OOC_SSA_Schedule__InitBranchBlock((OOC_SSA_Schedule__BranchBlock)i0, (OOC_SSA_Schedule__Block)i1, (OOC_SSA__Opnd)i2, i3);
  return (OOC_SSA_Schedule__BranchBlock)i0;
  ;
}

OOC_SSA_Schedule__Block OOC_SSA_Schedule__BranchBlockDesc_DefaultTarget(OOC_SSA_Schedule__BranchBlock b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9533))+60);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9543))+4);
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9550)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
  if (i1) goto l3;
  i1=OOC_FALSE;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9574))+60);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9584))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9591)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 9591)), 9601))+48);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 9607))+12);
  
l5:
  if (i1) goto l7;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9684))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9690))+4);
  return (OOC_SSA_Schedule__Block)i0;
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9643))+60);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9653))+4);
  return (OOC_SSA_Schedule__Block)i0;
l8:
  _failed_function(9491); return 0;
  ;
}

static void OOC_SSA_Schedule__InitJumpBlock(OOC_SSA_Schedule__JumpBlock b, OOC_SSA_Schedule__Block dominator) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)dominator;
  i1 = (OOC_INT32)b;
  OOC_SSA_Schedule__InitBlock((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i0);
  *(OOC_INT32*)((_check_pointer(i1, 9831))+48) = (OOC_INT32)0;
  return;
  ;
}

static OOC_SSA_Schedule__JumpBlock OOC_SSA_Schedule__NewJumpBlock(OOC_SSA_Schedule__Block dominator) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__JumpBlock.baseTypes[0]);
  i1 = (OOC_INT32)dominator;
  OOC_SSA_Schedule__InitJumpBlock((OOC_SSA_Schedule__JumpBlock)i0, (OOC_SSA_Schedule__Block)i1);
  return (OOC_SSA_Schedule__JumpBlock)i0;
  ;
}

OOC_SSA_Schedule__Block OOC_SSA_Schedule__JumpBlockDesc_DefaultTarget(OOC_SSA_Schedule__JumpBlock b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10104))+48);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10110))+4);
  return (OOC_SSA_Schedule__Block)i0;
  ;
}

static void OOC_SSA_Schedule__InitDeadEndBlock(OOC_SSA_Schedule__DeadEndBlock b, OOC_SSA_Schedule__Block dominator) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)dominator;
  OOC_SSA_Schedule__InitBlock((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
  return;
  ;
}

static OOC_SSA_Schedule__DeadEndBlock OOC_SSA_Schedule__NewDeadEndBlock(OOC_SSA_Schedule__Block dominator) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__DeadEndBlock.baseTypes[0]);
  i1 = (OOC_INT32)dominator;
  OOC_SSA_Schedule__InitDeadEndBlock((OOC_SSA_Schedule__DeadEndBlock)i0, (OOC_SSA_Schedule__Block)i1);
  return (OOC_SSA_Schedule__DeadEndBlock)i0;
  ;
}

OOC_SSA_Schedule__Block OOC_SSA_Schedule__DeadEndBlockDesc_DefaultTarget(OOC_SSA_Schedule__DeadEndBlock b) {

  return (OOC_SSA_Schedule__Block)(OOC_INT32)0;
  ;
}

static void OOC_SSA_Schedule__InitSwitchBlock(OOC_SSA_Schedule__SwitchBlock b, OOC_SSA_Schedule__Block dominator, OOC_SSA__Opnd expr, OOC_INT32 paths) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dominator;
  i1 = (OOC_INT32)b;
  OOC_SSA_Schedule__InitBlock((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)((_check_pointer(i1, 10734))+48) = i0;
  i0 = paths;
  *(OOC_INT32*)((_check_pointer(i1, 10760))+52) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__5412.baseTypes[0], i0));
  *(OOC_INT32*)((_check_pointer(i1, 10786))+56) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__5453.baseTypes[0], i0));
  *(OOC_INT32*)((_check_pointer(i1, 10817))+60) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__5501.baseTypes[0], i0));
  i0 = i0-1;
  i2 = 0<=i0;
  i = 0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10875))+52);
  i3 = _check_pointer(i3, 10881);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 10881))*4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10894))+56);
  i3 = _check_pointer(i3, 10905);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 10905))*4) = (OOC_INT32)0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10918))+60);
  i3 = _check_pointer(i3, 10930);
  i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 10930))*4) = (OOC_INT32)0;
  i2 = i2+1;
  i3 = i2<=i0;
  i = i2;
  if (i3) goto l3_loop;
l8:
  return;
  ;
}

static OOC_SSA_Schedule__SwitchBlock OOC_SSA_Schedule__NewSwitchBlock(OOC_SSA_Schedule__Block dominator, OOC_SSA__Opnd expr, OOC_INT32 paths) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__SwitchBlock.baseTypes[0]);
  i1 = (OOC_INT32)dominator;
  i2 = (OOC_INT32)expr;
  i3 = paths;
  OOC_SSA_Schedule__InitSwitchBlock((OOC_SSA_Schedule__SwitchBlock)i0, (OOC_SSA_Schedule__Block)i1, (OOC_SSA__Opnd)i2, i3);
  return (OOC_SSA_Schedule__SwitchBlock)i0;
  ;
}

OOC_SSA_Schedule__Block OOC_SSA_Schedule__SwitchBlockDesc_DefaultTarget(OOC_SSA_Schedule__SwitchBlock b) {

  return (OOC_SSA_Schedule__Block)(OOC_INT32)0;
  ;
}

static void OOC_SSA_Schedule__InitInstrProxy(OOC_SSA_Schedule__InstrProxy proxy, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)proxy;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  *(OOC_INT32*)(_check_pointer(i0, 11430)) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 11459))+4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 11488))+8) = (OOC_INT32)0;
  i1 = (OOC_INT32)instr;
  *(OOC_INT32*)((_check_pointer(i0, 11513))+12) = i1;
  return;
  ;
}

static OOC_SSA_Schedule__InstrProxy OOC_SSA_Schedule__NewInstrProxy(OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__InstrProxy.baseTypes[0]);
  i1 = (OOC_INT32)instr;
  OOC_SSA_Schedule__InitInstrProxy((OOC_SSA_Schedule__InstrProxy)i0, (OOC_SSA__Instr)i1);
  return (OOC_SSA_Schedule__InstrProxy)i0;
  ;
}

static void OOC_SSA_Schedule__AppendProxy(OOC_SSA_Schedule__Block b, OOC_SSA_Schedule__InstrProxy proxy) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)proxy;
  i1 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 11808))+8) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11847))+12);
  *(OOC_INT32*)((_check_pointer(i0, 11831))+4) = i2;
  *(OOC_INT32*)(_check_pointer(i0, 11869)) = (OOC_INT32)0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11898))+12);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11966))+12);
  *(OOC_INT32*)(_check_pointer(i2, 11977)) = i0;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i1, 11929))+8) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 12012))+12) = i0;
  return;
  ;
}

static OOC_SSA_Schedule__JumpBlock OOC_SSA_Schedule__TransferInstructions(OOC_SSA_Blocker__Region region, OOC_SSA_Schedule__JumpBlock block) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA_Blocker__Proxy bProxy;
  OOC_SSA_Schedule__InstrProxy proxy;
  OOC_SSA_Schedule__JumpBlock newBlock;
  auto OOC_SSA_Schedule__JumpBlock OOC_SSA_Schedule__TransferInstructions_TransferSelect(OOC_SSA_Blocker__Select select, OOC_SSA_Schedule__JumpBlock block);
  auto OOC_SSA_Schedule__JumpBlock OOC_SSA_Schedule__TransferInstructions_TransferLoop(OOC_SSA_Blocker__Loop loop, OOC_SSA_Schedule__JumpBlock block);
    
    OOC_SSA_Schedule__JumpBlock OOC_SSA_Schedule__TransferInstructions_TransferSelect(OOC_SSA_Blocker__Select select, OOC_SSA_Schedule__JumpBlock block) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
      OOC_INT32 paths;
      OOC_SSA_Schedule__SwitchBlock _switch;
      OOC_SSA__Opnd opnd;
      OOC_INT32 i;
      OOC_SSA_Schedule__JumpBlock path;
      OOC_SSA_Schedule__JumpBlock out;
      OOC_SSA_Schedule__BranchBlock branch;
      OOC_SSA_Schedule__JumpBlock path1;
      OOC_SSA_Schedule__JumpBlock path2;

      i0 = (OOC_INT32)select;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12833))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12833))+8);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12840)))), OOC_SSA__InstrDesc_IsSwitchStatm)),OOC_SSA__InstrDesc_IsSwitchStatm)((OOC_SSA__Instr)i2);
      if (i1) goto l3;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13836))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13874))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13881))+24);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13891))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13901));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13874))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13881))+24);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13891))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 13901));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13843))+24);
      i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13906)))), OOC_SSA__ResultDesc_IsBooleanConst)),OOC_SSA__ResultDesc_IsBooleanConst)((OOC_SSA__Result)i3, OOC_TRUE);
      i3 = (OOC_INT32)block;
      i1 = (OOC_INT32)OOC_SSA_Schedule__NewBranchBlock((OOC_SSA_Schedule__Block)i3, (OOC_SSA__Opnd)i1, i2);
      branch = (OOC_SSA_Schedule__BranchBlock)i1;
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i3, 13954))+48), (OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)i1);
      i2 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i1);
      path1 = (OOC_SSA_Schedule__JumpBlock)i2;
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i1, 14050))+60), (OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i2);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14123))+60);
      i3 = _check_pointer(i3, 14130);
      i4 = OOC_ARRAY_LENGTH(i3, (OOC_INT32)0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(0, i4, OOC_UINT8, 14130))*4);
      i2 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions((OOC_SSA_Blocker__Region)i3, (OOC_SSA_Schedule__JumpBlock)i2);
      path1 = (OOC_SSA_Schedule__JumpBlock)i2;
      i3 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i1);
      path2 = (OOC_SSA_Schedule__JumpBlock)i3;
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i1, 14215))+48), (OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i3);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14284))+60);
      i0 = _check_pointer(i0, 14291);
      i4 = OOC_ARRAY_LENGTH(i0, (OOC_INT32)0);
      i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(1, i4, OOC_UINT8, 14291))*4);
      i0 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Schedule__JumpBlock)i3);
      path2 = (OOC_SSA_Schedule__JumpBlock)i0;
      i1 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i1);
      out = (OOC_SSA_Schedule__JumpBlock)i1;
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i2, 14373))+48), (OOC_SSA_Schedule__Block)i2, (OOC_SSA_Schedule__Block)i1);
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i0, 14416))+48), (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
      return (OOC_SSA_Schedule__JumpBlock)i1;
      goto l20;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12940))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12940))+8);
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12947)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i2, 16);
      paths = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13026))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13033))+24);
      i3 = (OOC_INT32)block;
      i2 = (OOC_INT32)OOC_SSA_Schedule__NewSwitchBlock((OOC_SSA_Schedule__Block)i3, (OOC_SSA__Opnd)i2, i1);
      _switch = (OOC_SSA_Schedule__SwitchBlock)i2;
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i3, 13075))+48), (OOC_SSA_Schedule__Block)i3, (OOC_SSA_Schedule__Block)i2);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13122))+8);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13129))+24);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 13139))+8);
      i4 = i1-1;
      opnd = (OOC_SSA__Opnd)i3;
      i5 = 0<=i4;
      i = 0;
      if (!i5) goto l11;
      i5=i3;i3=0;
l6_loop:
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13200))+60);
      i6 = _check_pointer(i6, 13212);
      i7 = OOC_ARRAY_LENGTH(i6, (OOC_INT32)0);
      *(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 13212))*4) = i5;
      i6 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i2);
      path = (OOC_SSA_Schedule__JumpBlock)i6;
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13302))+52);
      i7 = _check_pointer(i7, 13308);
      i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      OOC_SSA_Schedule__SetJump((void*)(i7+(_check_index(i3, i8, OOC_UINT32, 13308))*4), (OOC_SSA_Schedule__Block)i2, (OOC_SSA_Schedule__Block)i6);
      i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13344))+56);
      i7 = _check_pointer(i7, 13355);
      i8 = OOC_ARRAY_LENGTH(i7, (OOC_INT32)0);
      i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13390))+60);
      i9 = _check_pointer(i9, 13396);
      i10 = OOC_ARRAY_LENGTH(i9, (OOC_INT32)0);
      i9 = (OOC_INT32)*(OOC_INT32*)(i9+(_check_index(i3, i10, OOC_UINT32, 13396))*4);
      i6 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions((OOC_SSA_Blocker__Region)i9, (OOC_SSA_Schedule__JumpBlock)i6);
      *(OOC_INT32*)(i7+(_check_index(i3, i8, OOC_UINT32, 13355))*4) = i6;
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 13430))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 13440))+8);
      opnd = (OOC_SSA__Opnd)i5;
      i3 = i3+1;
      i6 = i3<=i4;
      i = i3;
      if (i6) goto l6_loop;
l11:
      i0 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i2);
      i1 = i1-1;
      out = (OOC_SSA_Schedule__JumpBlock)i0;
      i3 = 0<=i1;
      i = 0;
      if (!i3) goto l19;
      i3=0;
l14_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13570))+56);
      i4 = _check_pointer(i4, 13581);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 13581))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 13598))+56);
      i5 = _check_pointer(i5, 13609);
      i6 = OOC_ARRAY_LENGTH(i5, (OOC_INT32)0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 13609))*4);
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i4, 13584))+48), (OOC_SSA_Schedule__Block)i5, (OOC_SSA_Schedule__Block)i0);
      i3 = i3+1;
      i4 = i3<=i1;
      i = i3;
      if (i4) goto l14_loop;
l19:
      OOC_SSA_Schedule__RevertDomList((OOC_SSA_Schedule__Block)i2);
      return (OOC_SSA_Schedule__JumpBlock)i0;
l20:
      _failed_function(12587); return 0;
      ;
    }

    
    OOC_SSA_Schedule__JumpBlock OOC_SSA_Schedule__TransferInstructions_TransferLoop(OOC_SSA_Blocker__Loop loop, OOC_SSA_Schedule__JumpBlock block) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA_Schedule__JumpBlock body;
      OOC_SSA_Schedule__JumpBlock bodyEnd;
      OOC_SSA__Instr loopEnd;
      OOC_SSA_Schedule__JumpBlock out;
      OOC_SSA__Opnd opnd;
      OOC_SSA_Schedule__JumpBlock exit;

      i0 = (OOC_INT32)block;
      i1 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i0);
      body = (OOC_SSA_Schedule__JumpBlock)i1;
      *(OOC_UINT8*)((_check_pointer(i1, 14772))+28) = OOC_TRUE;
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i0, 14814))+48), (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
      i0 = (OOC_INT32)loop;
      i2 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Schedule__JumpBlock)i1);
      bodyEnd = (OOC_SSA_Schedule__JumpBlock)i2;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14910))+8);
      loopEnd = (OOC_SSA__Instr)i0;
      _assert((i0!=(OOC_INT32)0), 127, 14925);
      OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i2, 14971))+48), (OOC_SSA_Schedule__Block)i2, (OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i1);
      out = (OOC_SSA_Schedule__JumpBlock)i1;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15335)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3;
      i2=OOC_FALSE;
      goto l5;
l3:
      i2 = *(OOC_INT8*)((_check_pointer(i0, 15382))+4);
      i2 = i2==11;
      
l5:
      if (!i2) goto l16;
l7_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15431));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15436))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15443))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15450)))), &_td_OOC_SSA_Schedule__InstrProxyDesc, 15450)), 15461))+8);
      i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15469)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 15469);
      exit = (OOC_SSA_Schedule__JumpBlock)i2;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15511))+48);
      OOC_SSA_Schedule__ChangeJumpTarget((OOC_SSA_Schedule__Jump)i2, (OOC_SSA_Schedule__Block)i1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15545))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l10;
      i2=OOC_FALSE;
      goto l12;
l10:
      i2 = *(OOC_INT8*)((_check_pointer(i0, 15382))+4);
      i2 = i2==11;
      
l12:
      if (i2) goto l7_loop;
l16:
      return (OOC_SSA_Schedule__JumpBlock)i1;
      ;
    }


  i0 = (OOC_INT32)region;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15639))+48);
  i1 = i0!=(OOC_INT32)0;
  bProxy = (OOC_SSA_Blocker__Proxy)i0;
  if (!i1) goto l22;
l3_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15712))+8);
  i1 = (OOC_INT32)OOC_SSA_Schedule__NewInstrProxy((OOC_SSA__Instr)i1);
  proxy = (OOC_SSA_Schedule__InstrProxy)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15734))+8);
  *(OOC_INT32*)((_check_pointer(i2, 15741))+16) = i1;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15782)))), &_td_OOC_SSA_Blocker__LoopDesc);
  if (i1) goto l13;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15861)))), &_td_OOC_SSA_Blocker__SelectDesc);
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15944)))), &_td_OOC_SSA_Blocker__RegionDesc);
  if (!i1) goto l14;
  i1 = (OOC_INT32)block;
  i0 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Schedule__JumpBlock)i1);
  block = (OOC_SSA_Schedule__JumpBlock)i0;
  goto l14;
l11:
  i1 = (OOC_INT32)block;
  i0 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions_TransferSelect((OOC_SSA_Blocker__Select)i0, (OOC_SSA_Schedule__JumpBlock)i1);
  block = (OOC_SSA_Schedule__JumpBlock)i0;
  goto l14;
l13:
  i1 = (OOC_INT32)block;
  i0 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions_TransferLoop((OOC_SSA_Blocker__Loop)i0, (OOC_SSA_Schedule__JumpBlock)i1);
  block = (OOC_SSA_Schedule__JumpBlock)i0;
l14:
  i0 = (OOC_INT32)block;
  i1 = (OOC_INT32)proxy;
  OOC_SSA_Schedule__AppendProxy((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__InstrProxy)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16162))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 16169))+36);
  i1 = i1==9;
  if (!i1) goto l17;
  i1 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)i0);
  newBlock = (OOC_SSA_Schedule__JumpBlock)i1;
  OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i0, 16382))+48), (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
  block = (OOC_SSA_Schedule__JumpBlock)i1;
l17:
  i0 = (OOC_INT32)bProxy;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 16475));
  bProxy = (OOC_SSA_Blocker__Proxy)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l22:
  i0 = (OOC_INT32)block;
  return (OOC_SSA_Schedule__JumpBlock)i0;
  ;
}

OOC_SSA_Schedule__Block OOC_SSA_Schedule__Schedule(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2;
  OOC_SSA_Blocker__Region root;
  OOC_SSA_Schedule__InstrProxy proxy;
  OOC_SSA_Schedule__JumpBlock b;
  OOC_SSA_Schedule__JumpBlock lastBlock;
  OOC_INT32 count;
  auto void OOC_SSA_Schedule__Schedule_ArrangeBlock(OOC_SSA_Schedule__Block b);
  auto void OOC_SSA_Schedule__Schedule_MarkBackedges(OOC_SSA_Schedule__Block b);
  auto void OOC_SSA_Schedule__Schedule_RemoveUnreachable(OOC_SSA_Schedule__Block *b);
  auto void OOC_SSA_Schedule__Schedule_RemoveEmpty(OOC_SSA_Schedule__Block *b);
  auto void OOC_SSA_Schedule__Schedule_NumberBlocks(OOC_SSA_Schedule__Block b, OOC_INT32 *count);
  auto void OOC_SSA_Schedule__Schedule_Check(OOC_SSA_Schedule__Block b);
  auto void OOC_SSA_Schedule__Schedule_MoveSelectReturn(OOC_SSA_Blocker__Region root, OOC_SSA_Schedule__Block block);
    
    void OOC_SSA_Schedule__Schedule_ArrangeBlock(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA_Schedule__Block nested;
      auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps(OOC_SSA_Schedule__Block path, OOC_SSA_Schedule__Block b);
      auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_AddToList(OOC_SSA_Schedule__Block *list, OOC_SSA_Schedule__Block b);
      auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_AppendToList(OOC_SSA_Schedule__Block *list, OOC_SSA_Schedule__Block b);
      auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_RemoveFromList(OOC_SSA_Schedule__Block *list, OOC_SSA_Schedule__Block b);
      auto OOC_CHAR8 OOC_SSA_Schedule__Schedule_ArrangeBlock_In(OOC_SSA_Schedule__Block list, OOC_SSA_Schedule__Block b);
      auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_SortBlocks(OOC_SSA_Schedule__Block domBlock);
        
        void OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps(OOC_SSA_Schedule__Block path, OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_INT32 i;
          OOC_SSA_Schedule__Block nested;
          auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump(OOC_SSA_Schedule__Block target);
            
            void OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump(OOC_SSA_Schedule__Block target) {
              register OOC_INT32 i0,i1,i2;
              auto void OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump_WriteBefore(OOC_SSA_Schedule__Dependent *dependentList, OOC_SSA_Schedule__Block b);
                
                void OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump_WriteBefore(OOC_SSA_Schedule__Dependent *dependentList, OOC_SSA_Schedule__Block b) {
                  register OOC_INT32 i0,i1,i2;

                  i0 = (OOC_INT32)*dependentList;
                  i1 = i0==(OOC_INT32)0;
                  if (i1) goto l6;
                  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17840))+4);
                  i2 = (OOC_INT32)b;
                  i1 = i1!=i2;
                  if (!i1) goto l7;
                  OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump_WriteBefore((void*)(_check_pointer(i0, 17898)), (OOC_SSA_Schedule__Block)i2);
                  goto l7;
l6:
                  i0 = (OOC_INT32)b;
                  i1 = (OOC_INT32)path;
                  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17631))+4);
                  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17646))+4);
                  _assert((i2==i1), 127, 17622);
                  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Schedule__Dependent.baseTypes[0]);
                  *dependentList = (OOC_SSA_Schedule__Dependent)i1;
                  *(OOC_INT32*)((_check_pointer(i1, 17719))+4) = i0;
                  i1 = (OOC_INT32)*dependentList;
                  *(OOC_INT32*)(_check_pointer(i1, 17760)) = (OOC_INT32)0;
                  i1 = *(OOC_INT32*)((_check_pointer(i0, 17795))+24);
                  *(OOC_INT32*)((_check_pointer(i0, 17795))+24) = (i1+1);
l7:
                  return;
                  ;
                }


              i0 = (OOC_INT32)path;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18003))+4);
              i2 = (OOC_INT32)target;
              i1 = i2!=i1;
              if (!i1) goto l26;
              i1 = i2!=(OOC_INT32)0;
              if (i1) goto l5;
              i1=OOC_FALSE;
              goto l7;
l5:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18075))+4);
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18060))+4);
              i1 = i2!=i1;
              
l7:
              if (!i1) goto l18;
l9_loop:
              i1 = (OOC_INT32)target;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18118))+4);
              target = (OOC_SSA_Schedule__Block)i1;
              i2 = i1!=(OOC_INT32)0;
              if (i2) goto l12;
              i1=OOC_FALSE;
              goto l14;
l12:
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18060))+4);
              i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18075))+4);
              i1 = i1!=i2;
              
l14:
              if (i1) goto l9_loop;
l18:
              i1 = (OOC_INT32)target;
              i2 = i1!=(OOC_INT32)0;
              if (i2) goto l21;
              i2=OOC_FALSE;
              goto l23;
l21:
              i2 = i1!=i0;
              
l23:
              if (!i2) goto l26;
              OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump_WriteBefore((void*)((_check_pointer(i0, 18228))+20), (OOC_SSA_Schedule__Block)i1);
l26:
              return;
              ;
            }


          i0 = (OOC_INT32)b;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18343)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
          if (i1) goto l22;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18453)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
          if (i1) goto l20;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18518)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
          if (i1) goto l23;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18577)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
          if (i1) goto l9;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18574)))), 18574);
          goto l23;
l9:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18624))+52);
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 18630)), (OOC_INT32)0);
          i0 = i0-1;
          i1 = 0<=i0;
          i = 0;
          if (!i1) goto l23;
          i1=0;
l12_loop:
          i2 = (OOC_INT32)b;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 18664))+52);
          i2 = _check_pointer(i2, 18670);
          i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
          i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 18670))*4);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18673))+4);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump((OOC_SSA_Schedule__Block)i1);
          i1 = i;
          i1 = i1+1;
          i2 = i1<=i0;
          i = i1;
          if (i2) goto l12_loop;
          goto l23;
l20:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18492))+48);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18498))+4);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump((OOC_SSA_Schedule__Block)i0);
          goto l23;
l22:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18384))+60);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18394))+4);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump((OOC_SSA_Schedule__Block)i0);
          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18427))+48);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18433))+4);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps_ProcessJump((OOC_SSA_Schedule__Block)i0);
l23:
          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18738))+16);
          i1 = i0!=(OOC_INT32)0;
          nested = (OOC_SSA_Schedule__Block)i0;
          if (!i1) goto l31;
          i1 = (OOC_INT32)path;
          
l26_loop:
          OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i0);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18845));
          nested = (OOC_SSA_Schedule__Block)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l26_loop;
l31:
          return;
          ;
        }

        
        void OOC_SSA_Schedule__Schedule_ArrangeBlock_AddToList(OOC_SSA_Schedule__Block *list, OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)b;
          i1 = (OOC_INT32)*list;
          *(OOC_INT32*)(_check_pointer(i0, 18966)) = i1;
          *list = (OOC_SSA_Schedule__Block)i0;
          return;
          ;
        }

        
        void OOC_SSA_Schedule__Schedule_ArrangeBlock_AppendToList(OOC_SSA_Schedule__Block *list, OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)*list;
          i1 = i0==(OOC_INT32)0;
          if (i1) goto l3;
          i1 = (OOC_INT32)b;
          OOC_SSA_Schedule__Schedule_ArrangeBlock_AppendToList((void*)(_check_pointer(i0, 19212)), (OOC_SSA_Schedule__Block)i1);
          goto l4;
l3:
          i0 = (OOC_INT32)b;
          *(OOC_INT32*)(_check_pointer(i0, 19133)) = (OOC_INT32)0;
          *list = (OOC_SSA_Schedule__Block)i0;
l4:
          return;
          ;
        }

        
        void OOC_SSA_Schedule__Schedule_ArrangeBlock_RemoveFromList(OOC_SSA_Schedule__Block *list, OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)*list;
          i1 = (OOC_INT32)b;
          i2 = i0==i1;
          if (i2) goto l3;
          OOC_SSA_Schedule__Schedule_ArrangeBlock_RemoveFromList((void*)(_check_pointer(i0, 19436)), (OOC_SSA_Schedule__Block)i1);
          goto l4;
l3:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19383));
          *list = (OOC_SSA_Schedule__Block)i0;
l4:
          return;
          ;
        }

        
        OOC_CHAR8 OOC_SSA_Schedule__Schedule_ArrangeBlock_In(OOC_SSA_Schedule__Block list, OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1,i2;
          OOC_SSA_Schedule__Block ptr;

          i0 = (OOC_INT32)list;
          ptr = (OOC_SSA_Schedule__Block)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3;
          i1=OOC_FALSE;
          goto l5;
l3:
          i1 = (OOC_INT32)b;
          i1 = i0!=i1;
          
l5:
          if (!i1) goto l17;
          i1 = (OOC_INT32)b;
          
l8_loop:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19665));
          ptr = (OOC_SSA_Schedule__Block)i0;
          i2 = i0!=(OOC_INT32)0;
          if (i2) goto l11;
          i2=OOC_FALSE;
          goto l13;
l11:
          i2 = i0!=i1;
          
l13:
          if (i2) goto l8_loop;
l17:
          return (i0!=(OOC_INT32)0);
          ;
        }

        
        void OOC_SSA_Schedule__Schedule_ArrangeBlock_SortBlocks(OOC_SSA_Schedule__Block domBlock) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA_Schedule__Block ready;
          OOC_SSA_Schedule__Block waiting;
          OOC_SSA_Schedule__Block nested;
          OOC_SSA_Schedule__Block next;
          OOC_SSA_Schedule__Block preferedBlock;
          OOC_SSA_Schedule__Block b;
          OOC_SSA_Schedule__Dependent dep;

          ready = (OOC_SSA_Schedule__Block)(OOC_INT32)0;
          waiting = (OOC_SSA_Schedule__Block)(OOC_INT32)0;
          i0 = (OOC_INT32)domBlock;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20087))+16);
          nested = (OOC_SSA_Schedule__Block)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l12;
l3_loop:
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 20154));
          next = (OOC_SSA_Schedule__Block)i2;
          i3 = *(OOC_INT32*)((_check_pointer(i1, 20185))+24);
          i3 = i3==0;
          if (i3) goto l6;
          OOC_SSA_Schedule__Schedule_ArrangeBlock_AddToList((void*)(OOC_INT32)&waiting, (OOC_SSA_Schedule__Block)i1);
          goto l7;
l6:
          OOC_SSA_Schedule__Schedule_ArrangeBlock_AddToList((void*)(OOC_INT32)&ready, (OOC_SSA_Schedule__Block)i1);
l7:
          nested = (OOC_SSA_Schedule__Block)i2;
          i1 = i2!=(OOC_INT32)0;
          if (!i1) goto l12;
          i1=i2;
          goto l3_loop;
l12:
          *(OOC_INT32*)((_check_pointer(i0, 20377))+16) = (OOC_INT32)0;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20428)))), OOC_SSA_Schedule__BlockDesc_DefaultTarget)),OOC_SSA_Schedule__BlockDesc_DefaultTarget)((OOC_SSA_Schedule__Block)i0);
          i2 = (OOC_INT32)ready;
          i2 = i2!=(OOC_INT32)0;
          preferedBlock = (OOC_SSA_Schedule__Block)i1;
          if (!i2) goto l39;
l15_loop:
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l18;
          i2=OOC_FALSE;
          goto l20;
l18:
          i2 = (OOC_INT32)ready;
          i2 = OOC_SSA_Schedule__Schedule_ArrangeBlock_In((OOC_SSA_Schedule__Block)i2, (OOC_SSA_Schedule__Block)i1);
          
l20:
          if (i2) goto l22;
          i1 = (OOC_INT32)ready;
          b = (OOC_SSA_Schedule__Block)i1;
          
          goto l23;
l22:
          b = (OOC_SSA_Schedule__Block)i1;
          
l23:
          OOC_SSA_Schedule__Schedule_ArrangeBlock_RemoveFromList((void*)(OOC_INT32)&ready, (OOC_SSA_Schedule__Block)i1);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20697))+4);
          _assert((i2==i0), 127, 20688);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_AppendToList((void*)((_check_pointer(i0, 20751))+16), (OOC_SSA_Schedule__Block)i1);
          *(OOC_INT32*)((_check_pointer(i1, 20777))+24) = -1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20824))+20);
          dep = (OOC_SSA_Schedule__Dependent)i2;
          i3 = i2!=(OOC_INT32)0;
          if (!i3) goto l34;
l26_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20892))+4);
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20892))+4);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 20899))+24);
          *(OOC_INT32*)((_check_pointer(i3, 20899))+24) = (i4-1);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 20931))+4);
          i3 = *(OOC_INT32*)((_check_pointer(i3, 20938))+24);
          i3 = i3==0;
          if (!i3) goto l29;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21001))+4);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_RemoveFromList((void*)(OOC_INT32)&waiting, (OOC_SSA_Schedule__Block)i3);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 21046))+4);
          OOC_SSA_Schedule__Schedule_ArrangeBlock_AddToList((void*)(OOC_INT32)&ready, (OOC_SSA_Schedule__Block)i3);
l29:
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 21094));
          dep = (OOC_SSA_Schedule__Dependent)i2;
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l26_loop;
l34:
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21144)))), OOC_SSA_Schedule__BlockDesc_DefaultTarget)),OOC_SSA_Schedule__BlockDesc_DefaultTarget)((OOC_SSA_Schedule__Block)i1);
          i2 = (OOC_INT32)ready;
          i2 = i2!=(OOC_INT32)0;
          preferedBlock = (OOC_SSA_Schedule__Block)i1;
          if (i2) goto l15_loop;
l39:
          i0 = (OOC_INT32)waiting;
          _assert((i0==(OOC_INT32)0), 127, 21184);
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21311))+16);
      i2 = i1!=(OOC_INT32)0;
      nested = (OOC_SSA_Schedule__Block)i1;
      if (!i2) goto l8;
l3_loop:
      OOC_SSA_Schedule__Schedule_ArrangeBlock((OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21407));
      nested = (OOC_SSA_Schedule__Block)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l8:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21553)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc));
      if (!i1) goto l27;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21593))+16);
      nested = (OOC_SSA_Schedule__Block)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l18;
l13_loop:
      *(OOC_INT32*)((_check_pointer(i1, 21652))+20) = (OOC_INT32)0;
      *(OOC_INT32*)((_check_pointer(i1, 21692))+24) = 0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 21735));
      nested = (OOC_SSA_Schedule__Block)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l13_loop;
l18:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21786))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l26;
l21_loop:
      OOC_SSA_Schedule__Schedule_ArrangeBlock_LocateJumps((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)nested;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21895));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l21_loop;
l26:
      i0 = (OOC_INT32)b;
      OOC_SSA_Schedule__Schedule_ArrangeBlock_SortBlocks((OOC_SSA_Schedule__Block)i0);
l27:
      return;
      ;
    }

    
    void OOC_SSA_Schedule__Schedule_MarkBackedges(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 i;
      OOC_SSA_Schedule__Block nested;
      auto void OOC_SSA_Schedule__Schedule_MarkBackedges_Check(OOC_SSA_Schedule__Jump jump);
        
        void OOC_SSA_Schedule__Schedule_MarkBackedges_Check(OOC_SSA_Schedule__Jump jump) {
          register OOC_INT32 i0,i1,i2;

          i0 = (OOC_INT32)jump;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22164))+4);
          i2 = (OOC_INT32)b;
          i1 = OOC_SSA_Schedule__Dominates((OOC_SSA_Schedule__Block)i1, (OOC_SSA_Schedule__Block)i2);
          *(OOC_UINT8*)((_check_pointer(i0, 22129))+12) = i1;
          return;
          ;
        }


      i0 = (OOC_INT32)b;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22220)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l22;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22268)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l20;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22347)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22402)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l9;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22399)))), 22399);
      goto l23;
l9:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22447))+52);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 22453)), (OOC_INT32)0);
      i0 = i0-1;
      i1 = 0<=i0;
      i = 0;
      if (!i1) goto l23;
      i1=0;
l12_loop:
      i2 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 22479))+52);
      i2 = _check_pointer(i2, 22485);
      i3 = OOC_ARRAY_LENGTH(i2, (OOC_INT32)0);
      i1 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 22485))*4);
      OOC_SSA_Schedule__Schedule_MarkBackedges_Check((OOC_SSA_Schedule__Jump)i1);
      i1 = i;
      i1 = i1+1;
      i2 = i1<=i0;
      i = i1;
      if (i2) goto l12_loop;
      goto l23;
l20:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22301))+60);
      OOC_SSA_Schedule__Schedule_MarkBackedges_Check((OOC_SSA_Schedule__Jump)i0);
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22330))+48);
      OOC_SSA_Schedule__Schedule_MarkBackedges_Check((OOC_SSA_Schedule__Jump)i0);
      goto l23;
l22:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22251))+48);
      OOC_SSA_Schedule__Schedule_MarkBackedges_Check((OOC_SSA_Schedule__Jump)i0);
l23:
      i0 = (OOC_INT32)b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22533))+16);
      i1 = i0!=(OOC_INT32)0;
      nested = (OOC_SSA_Schedule__Block)i0;
      if (!i1) goto l31;
l26_loop:
      OOC_SSA_Schedule__Schedule_MarkBackedges((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 22630));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l26_loop;
l31:
      return;
      ;
    }

    
    void OOC_SSA_Schedule__Schedule_RemoveUnreachable(OOC_SSA_Schedule__Block *b) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 d;
      OOC_SSA_Schedule__Jump j;
      OOC_INT32 i;
      auto OOC_CHAR8 OOC_SSA_Schedule__Schedule_RemoveUnreachable_ContainsEndOfBlock(OOC_SSA_Schedule__Block b);
        
        OOC_CHAR8 OOC_SSA_Schedule__Schedule_RemoveUnreachable_ContainsEndOfBlock(OOC_SSA_Schedule__Block b) {
          register OOC_INT32 i0,i1;
          OOC_SSA_Schedule__InstrProxy proxy;

          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23085))+8);
          i1 = i0!=(OOC_INT32)0;
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          if (!i1) goto l12;
l3_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23149))+12);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 23156))+36);
          switch (i1) {
          case 8:
          case 11:
            return OOC_TRUE;
            goto l7;
          default:
            goto l7;
          }
l7:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 23296));
          proxy = (OOC_SSA_Schedule__InstrProxy)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l12:
          return OOC_FALSE;
          ;
        }


      i0 = (OOC_INT32)*b;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l56;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 23427))+36);
      d = i1;
      i2 = *(OOC_UINT8*)((_check_pointer(i0, 23451))+28);
      if (!i2) goto l19;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23555))+32);
      j = (OOC_SSA_Schedule__Jump)i2;
      i3 = i2!=(OOC_INT32)0;
      if (!i3) goto l19;
      {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l9_loop:
      i3 = *(OOC_UINT8*)((_check_pointer(i1, 23617))+12);
      if (!i3) goto l13;
      i2 = i2-1;
      d = i2;
      
l13:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 23697))+8);
      j = (OOC_SSA_Schedule__Jump)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l9_loop;
l17:
      i1=i2;
l19:
      i1 = i1==0;
      if (i1) goto l22;
      i0=OOC_FALSE;
      goto l24;
l22:
      i0 = OOC_SSA_Schedule__Schedule_RemoveUnreachable_ContainsEndOfBlock((OOC_SSA_Schedule__Block)i0);
      
l24:
      if (!i0) goto l26;
      i0 = d;
      d = (i0+1);
l26:
      i0 = d;
      i1 = i0==0;
      i2 = (OOC_INT32)*b;
      if (!i1) goto l52;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24054))+32);
      _assert((i1==(OOC_INT32)0), 127, 24045);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24181)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l50;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24242)))), &_td_OOC_SSA_Schedule__BranchBlockDesc);
      if (i1) goto l48;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24342)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l38;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24501)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (i1) goto l52;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24498)))), 24498);
      goto l52;
l38:
      _assert(OOC_FALSE, 127, 24371);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24419))+52);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 24425)), (OOC_INT32)0);
      i1 = i1-1;
      i3 = 0<=i1;
      i = 0;
      if (!i3) goto l52;
      i3=0;
l41_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24459))+52);
      i4 = _check_pointer(i4, 24465);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 24465))*4);
      OOC_SSA_Schedule__ClearJump((OOC_SSA_Schedule__Jump)i4);
      i3 = i3+1;
      i4 = i3<=i1;
      i = i3;
      if (i4) goto l41_loop;
      goto l52;
l48:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24283))+48);
      OOC_SSA_Schedule__ClearJump((OOC_SSA_Schedule__Jump)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24316))+60);
      OOC_SSA_Schedule__ClearJump((OOC_SSA_Schedule__Jump)i1);
      goto l52;
l50:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24220))+48);
      OOC_SSA_Schedule__ClearJump((OOC_SSA_Schedule__Jump)i1);
l52:
      OOC_SSA_Schedule__Schedule_RemoveUnreachable((void*)((_check_pointer(i2, 24610))+16));
      OOC_SSA_Schedule__Schedule_RemoveUnreachable((void*)(_check_pointer(i2, 24650)));
      i0 = i0==0;
      if (!i0) goto l56;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 24714))+16);
      _assert((i0==(OOC_INT32)0), 127, 24705);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 24748));
      *b = (OOC_SSA_Schedule__Block)i0;
l56:
      return;
      ;
    }

    
    void OOC_SSA_Schedule__Schedule_RemoveEmpty(OOC_SSA_Schedule__Block *b) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*b;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l22;
      OOC_SSA_Schedule__Schedule_RemoveEmpty((void*)((_check_pointer(i0, 24909))+16));
      OOC_SSA_Schedule__Schedule_RemoveEmpty((void*)(_check_pointer(i0, 24943)));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24978)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l5;
      i1=OOC_FALSE;
      goto l7;
l5:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25007))+8);
      i1 = i1==(OOC_INT32)0;
      
l7:
      if (i1) goto l9;
      i1=OOC_FALSE;
      goto l11;
l9:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25042))+4);
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 25051)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc));
      
l11:
      if (i1) goto l13;
      i1=OOC_FALSE;
      goto l15;
l13:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25083)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 25083)), 25093))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25099))+4);
      i1 = i1!=i0;
      
l15:
      if (!i1) goto l22;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25146)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 25146)), 25156))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 25162))+4);
      OOC_SSA_Schedule__ChangeTargets((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25190))+32);
      _assert((i1==(OOC_INT32)0), 127, 25181);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25237)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 25237)), 25247))+48);
      OOC_SSA_Schedule__ClearJump((OOC_SSA_Schedule__Jump)i1);
      *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25268)))), &_td_OOC_SSA_Schedule__JumpBlockDesc, 25268)), 25278))+48) = (OOC_INT32)0;
      i0 = (OOC_INT32)*b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25319))+16);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l19;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25543));
      *b = (OOC_SSA_Schedule__Block)i0;
      goto l22;
l19:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25362))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 25371));
      _assert((i1==(OOC_INT32)0), 127, 25353);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25402))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25425));
      *(OOC_INT32*)(_check_pointer(i1, 25411)) = i0;
      i0 = (OOC_INT32)*b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25449))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25471))+4);
      *(OOC_INT32*)((_check_pointer(i1, 25458))+4) = i0;
      i0 = (OOC_INT32)*b;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25499))+16);
      *b = (OOC_SSA_Schedule__Block)i0;
l22:
      return;
      ;
    }

    
    void OOC_SSA_Schedule__Schedule_NumberBlocks(OOC_SSA_Schedule__Block b, OOC_INT32 *count) {
      register OOC_INT32 i0,i1;
      OOC_SSA_Schedule__Block nested;

      i0 = (OOC_INT32)b;
      i1 = *count;
      *(OOC_INT32*)((_check_pointer(i0, 25720))+40) = i1;
      *count = (i1+1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25778))+16);
      i1 = i0!=(OOC_INT32)0;
      nested = (OOC_SSA_Schedule__Block)i0;
      if (!i1) goto l8;
l3_loop:
      OOC_SSA_Schedule__Schedule_NumberBlocks((OOC_SSA_Schedule__Block)i0, (void*)(OOC_INT32)count);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 25881));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_SSA_Schedule__Schedule_Check(OOC_SSA_Schedule__Block b) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_SSA_Schedule__InstrProxy proxy;
      OOC_SSA_Schedule__InstrProxy select;
      OOC_SSA_Schedule__Block nested;
      OOC_INT32 i;

      i0 = (OOC_INT32)b;
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27068)))), &_td_OOC_SSA_Schedule__JumpBlockDesc));
      if (!i1) goto l11;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27105))+8);
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l11;
l5_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27172))+12);
      i2 = *(OOC_INT8*)((_check_pointer(i2, 27179))+36);
      _assert((i2!=6), 127, 27159);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 27231));
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l5_loop;
l11:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 27494))+36);
      i1 = i1>1;
      if (!i1) goto l26;
      select = (OOC_SSA_Schedule__InstrProxy)(OOC_INT32)0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27556))+8);
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l26;
      i2=(OOC_INT32)0;
l16_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27620))+12);
      i3 = *(OOC_INT8*)((_check_pointer(i3, 27627))+36);
      switch (i3) {
      case 5:
      case 10:
      case 11:
        _assert((i2==(OOC_INT32)0), 127, 27712);
        select = (OOC_SSA_Schedule__InstrProxy)i1;
        i2=i1;
        goto l20;
      default:
        
        goto l20;
      }
l20:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 27818));
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l16_loop;
l26:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27867)))), &_td_OOC_SSA_Schedule__SwitchBlockDesc);
      if (i1) goto l56;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28583)))), &_td_OOC_SSA_Schedule__JumpBlockDesc);
      if (i1) goto l34;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30250)))), &_td_OOC_SSA_Schedule__DeadEndBlockDesc);
      if (!i1) goto l66;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30330))+16);
      _assert((i1==(OOC_INT32)0), 127, 30321);
      goto l66;
l34:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28610))+48);
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 28616))+12);
      if (i1) goto l50;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28887))+16);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l66;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 28923))+28);
      if (i1) goto l44;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30070))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 30079));
      _assert((i1==(OOC_INT32)0), 127, 30061);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30114))+16);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 30123))+36);
      i1 = i1!=0;
      if (!i1) goto l66;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30167))+48);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30183))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30173))+4);
      _assert((i1==i2), 127, 30158);
      goto l66;
l44:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29636))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 29645));
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l66;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29690))+16);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 29699));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 29708));
      _assert((i1==(OOC_INT32)0), 127, 29681);
      goto l66;
l50:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 28799))+28);
      i1 = !i1;
      if (!i1) goto l66;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28838))+16);
      _assert((i1==(OOC_INT32)0), 127, 28829);
      goto l66;
l56:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28353))+16);
      nested = (OOC_SSA_Schedule__Block)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28392))+52);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 28398)), (OOC_INT32)0);
      i2 = i2-1;
      i3 = 0<=i2;
      i = 0;
      if (!i3) goto l65;
      i3=i1;i1=0;
l60_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28425))+52);
      i4 = _check_pointer(i4, 28431);
      i5 = OOC_ARRAY_LENGTH(i4, (OOC_INT32)0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 28431))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 28434))+4);
      _assert((i4==i3), 127, 28416);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 28478));
      nested = (OOC_SSA_Schedule__Block)i3;
      i1 = i1+1;
      i4 = i1<=i2;
      i = i1;
      if (i4) goto l60_loop;
l64:
      i1=i3;
l65:
      _assert((i1!=(OOC_INT32)0), 127, 28510);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 28555));
      _assert((i1==(OOC_INT32)0), 127, 28541);
l66:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30394))+16);
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l74;
l69_loop:
      OOC_SSA_Schedule__Schedule_Check((OOC_SSA_Schedule__Block)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30483));
      nested = (OOC_SSA_Schedule__Block)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l69_loop;
l74:
      return;
      ;
    }

    
    void OOC_SSA_Schedule__Schedule_MoveSelectReturn(OOC_SSA_Blocker__Region root, OOC_SSA_Schedule__Block block) {
      register OOC_INT32 i0,i1;
      OOC_SSA_Schedule__InstrProxy proxy;

      i0 = (OOC_INT32)root;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30664))+8);
      i1 = (OOC_INT32)OOC_SSA_Schedule__NewInstrProxy((OOC_SSA__Instr)i1);
      proxy = (OOC_SSA_Schedule__InstrProxy)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30684))+8);
      *(OOC_INT32*)((_check_pointer(i0, 30691))+16) = i1;
      i0 = (OOC_INT32)block;
      OOC_SSA_Schedule__AppendProxy((OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__InstrProxy)i1);
      return;
      ;
    }


  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)OOC_SSA_Blocker__ArrangeInstructions((OOC_SSA__ProcBlock)i0, OOC_TRUE);
  root = (OOC_SSA_Blocker__Region)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30916))+8);
  i1 = (OOC_INT32)OOC_SSA_Schedule__NewInstrProxy((OOC_SSA__Instr)i1);
  proxy = (OOC_SSA_Schedule__InstrProxy)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30934))+8);
  *(OOC_INT32*)((_check_pointer(i2, 30941))+16) = i1;
  i1 = (OOC_INT32)OOC_SSA_Schedule__NewJumpBlock((OOC_SSA_Schedule__Block)(OOC_INT32)0);
  b = (OOC_SSA_Schedule__JumpBlock)i1;
  i1 = (OOC_INT32)OOC_SSA_Schedule__TransferInstructions((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Schedule__JumpBlock)i1);
  lastBlock = (OOC_SSA_Schedule__JumpBlock)i1;
  OOC_SSA_Schedule__Schedule_MoveSelectReturn((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Schedule__Block)i1);
  i0 = (OOC_INT32)lastBlock;
  i1 = (OOC_INT32)OOC_SSA_Schedule__NewDeadEndBlock((OOC_SSA_Schedule__Block)i0);
  OOC_SSA_Schedule__SetJump((void*)((_check_pointer(i0, 31098))+48), (OOC_SSA_Schedule__Block)i0, (OOC_SSA_Schedule__Block)i1);
  i0 = (OOC_INT32)b;
  OOC_SSA_Schedule__Schedule_MarkBackedges((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)b;
  OOC_SSA_Schedule__Schedule_RemoveUnreachable((void*)((_check_pointer(i0, 31303))+16));
  i0 = (OOC_INT32)b;
  OOC_SSA_Schedule__Schedule_RemoveEmpty((void*)((_check_pointer(i0, 31333))+16));
  i0 = (OOC_INT32)b;
  OOC_SSA_Schedule__Schedule_Check((OOC_SSA_Schedule__Block)i0);
  i0 = (OOC_INT32)b;
  OOC_SSA_Schedule__Schedule_ArrangeBlock((OOC_SSA_Schedule__Block)i0);
  count = 0;
  i0 = (OOC_INT32)b;
  OOC_SSA_Schedule__Schedule_NumberBlocks((OOC_SSA_Schedule__Block)i0, (void*)(OOC_INT32)&count);
  i0 = (OOC_INT32)pb;
  OOC_SSA_Blocker__RemoveAntiDeps((OOC_SSA__ProcBlock)i0);
  i0 = (OOC_INT32)b;
  *(OOC_INT32*)((_check_pointer(i0, 32060))+36) = 1;
  return (OOC_SSA_Schedule__Block)i0;
  ;
}

void OOC_OOC_SSA_Schedule_init(void) {

  return;
  ;
}

/* --- */
