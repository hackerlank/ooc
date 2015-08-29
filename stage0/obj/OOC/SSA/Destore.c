#include <OOC/SSA/Destore.d>
#include <__oo2c.h>
#include <setjmp.h>

static OOC_CHAR8 OOC_SSA_Destore__IsLocalVariable(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4514)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l3;
  i0=OOC_FALSE;
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4537)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4555))+16);
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

static void OOC_SSA_Destore__InitState(OOC_SSA_Destore__State *s, OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0,i1,i2;
  ADT_Dictionary__Dictionary localVarWithAdr;
  OOC_SSA__Instr instr;
  auto OOC_CHAR8 OOC_SSA_Destore__InitState_UsesAreVarAccess(OOC_SSA__Result res);
    
    OOC_CHAR8 OOC_SSA_Destore__InitState_UsesAreVarAccess(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd use;

      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4836))+12);
      i1 = i0!=(OOC_INT32)0;
      use = (OOC_SSA__Opnd)i0;
      if (!i1) goto l19;
l3_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4889))+4);
      i1 = i1!=4;
      if (i1) goto l6;
      i1=OOC_FALSE;
      goto l8;
l6:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4930))+4);
      i1 = i1!=6;
      
l8:
      if (i1) goto l10;
      i1=OOC_FALSE;
      goto l12;
l10:
      i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4972)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i0);
      i1 = !i1;
      
l12:
      if (!i1) goto l14;
      return OOC_FALSE;
l14:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5051))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l19:
      return OOC_TRUE;
      ;
    }


  i0 = (OOC_INT32)*s;
  i1 = (OOC_INT32)pb;
  *(OOC_INT32*)(_check_pointer(i0, 5134)) = i1;
  i0 = (OOC_INT32)ADT_Dictionary__New();
  localVarWithAdr = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5393))+8);
  i1 = i0!=(OOC_INT32)0;
  instr = (OOC_SSA__Instr)i0;
  if (!i1) goto l19;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5449)))), &_td_OOC_SSA__AddressDesc);
  if (i1) goto l6;
  i1=OOC_FALSE;
  goto l8;
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5507)))), &_td_OOC_SSA__AddressDesc, 5507)), 5515))+44);
  i2 = (OOC_INT32)pb;
  i1 = OOC_SSA_Destore__IsLocalVariable((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i1);
  
l8:
  if (i1) goto l10;
  i0=OOC_FALSE;
  goto l11;
l10:
  i0 = OOC_SSA_Destore__InitState_UsesAreVarAccess((OOC_SSA__Result)i0);
  i0 = !i0;
  
l11:
  i1 = (OOC_INT32)instr;
  if (!i0) goto l14;
  i0 = (OOC_INT32)localVarWithAdr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5605)))), &_td_OOC_SSA__AddressDesc, 5605)), 5613))+44);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5588)))), ADT_Dictionary__DictionaryDesc_Set)),ADT_Dictionary__DictionaryDesc_Set)((ADT_Dictionary__Dictionary)i0, (Object__Object)i2, (Object__Object)(OOC_INT32)0);
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5658))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l19:
  i0 = (OOC_INT32)*s;
  i1 = (OOC_INT32)localVarWithAdr;
  *(OOC_INT32*)((_check_pointer(i0, 5685))+4) = i1;
  return;
  ;
}

OOC_SSA_Destore__State OOC_SSA_Destore__New(OOC_SSA__ProcBlock pb) {
  register OOC_INT32 i0;
  OOC_SSA_Destore__State s;

  s = (OOC_SSA_Destore__State)((OOC_INT32)RT0__NewObject(_td_OOC_SSA_Destore__State.baseTypes[0]));
  i0 = (OOC_INT32)pb;
  OOC_SSA_Destore__InitState((void*)(OOC_INT32)&s, (OOC_SSA__ProcBlock)i0);
  i0 = (OOC_INT32)s;
  return (OOC_SSA_Destore__State)i0;
  ;
}

static OOC_CHAR8 OOC_SSA_Destore__AccessedByCall(OOC_SSA_Destore__State s, OOC_SSA__Result calledAdr, OOC_SSA__Opnd design, OOC_INT8 mode) {
  register OOC_INT32 i0,i1;
  auto OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_LocalVarWithoutAdr(OOC_SSA__Opnd design);
  auto OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_NestedProc(OOC_SSA__Result calledAdr, OOC_SymbolTable__ProcDecl procDecl);
    
    OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_LocalVarWithoutAdr(OOC_SSA__Opnd design) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)design;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7075));
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7081)))), &_td_OOC_SSA__DeclRefDesc);
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = (OOC_INT32)s;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7138));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7126));
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7148)))), &_td_OOC_SSA__DeclRefDesc, 7148)), 7156))+44);
      i1 = OOC_SSA_Destore__IsLocalVariable((OOC_SSA__ProcBlock)i1, (OOC_SymbolTable__Declaration)i2);
      
l5:
      if (i1) goto l7;
      return OOC_FALSE;
      goto l8;
l7:
      i1 = (OOC_INT32)s;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7186))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7219));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7186))+4);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7229)))), &_td_OOC_SSA__DeclRefDesc, 7229)), 7237))+44);
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7203)))), ADT_Dictionary__DictionaryDesc_HasKey)),ADT_Dictionary__DictionaryDesc_HasKey)((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
      return (!i0);
l8:
      _failed_function(7001); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_NestedProc(OOC_SSA__Result calledAdr, OOC_SymbolTable__ProcDecl procDecl) {
      register OOC_INT32 i0,i1,i2;
      OOC_SymbolTable__ProcDecl proc;

      i0 = (OOC_INT32)calledAdr;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7465))+8);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 7472))+36);
      i1 = i1==3;
      if (i1) goto l3;
      return OOC_FALSE;
      goto l13;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7529))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7541)))), &_td_OOC_SSA__AddressDesc, 7541)), 7549))+44);
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7560)))), &_td_OOC_SymbolTable__ProcDeclDesc, 7560);
      proc = (OOC_SymbolTable__ProcDecl)i0;
      i1 = (OOC_INT32)procDecl;
      
l4_loop:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7608)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
      proc = (OOC_SymbolTable__ProcDecl)i0;
      i2 = i0==(OOC_INT32)0;
      if (i2) goto l7;
      i2 = i0==i1;
      
      goto l9;
l7:
      i2=OOC_TRUE;
l9:
      if (!i2) goto l4_loop;
l12:
      return (i0!=(OOC_INT32)0);
l13:
      _failed_function(7333); return 0;
      ;
    }


  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8004));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8008))+16);
  i1 = (OOC_INT32)calledAdr;
  i0 = OOC_SSA_Destore__AccessedByCall_NestedProc((OOC_SSA__Result)i1, (OOC_SymbolTable__ProcDecl)i0);
  if (i0) goto l3;
  i0 = (OOC_INT32)design;
  i0 = OOC_SSA_Destore__AccessedByCall_LocalVarWithoutAdr((OOC_SSA__Opnd)i0);
  i0 = !i0;
  
  goto l4;
l3:
  i0=OOC_TRUE;
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA_Destore__StateDesc_ClobberedBy(OOC_SSA_Destore__State s, OOC_SSA__Opnd readDesign, OOC_SSA__Instr instr) {
  register OOC_INT32 i0,i1,i2;
  auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_ClobberedBy_ModuleVariable(OOC_SSA__Result adr, const OOC_CHAR8 moduleName__ref[], OOC_LEN moduleName_0d);
    
    OOC_CHAR8 OOC_SSA_Destore__StateDesc_ClobberedBy_ModuleVariable(OOC_SSA__Result adr, const OOC_CHAR8 moduleName__ref[], OOC_LEN moduleName_0d) {
      register OOC_INT32 i0,i1,i2;
      OOC_ALLOCATE_VPAR(moduleName,OOC_CHAR8 ,moduleName_0d)
      OOC_SymbolTable__Module module;

      OOC_INITIALIZE_VPAR(moduleName__ref,moduleName,OOC_CHAR8 ,moduleName_0d)
      i0 = (OOC_INT32)adr;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8507)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l3;
      return OOC_FALSE;
      goto l8;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8545))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8545))+44);
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8550)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i2);
      module = (OOC_SymbolTable__Module)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8580))+44);
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8586)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i0) goto l6;
      i0=OOC_FALSE;
      goto l7;
l6:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8611))+16);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8616))+12);
      i0 = (
      _cmp8((const void*)(_check_pointer(i0, 8620)),(const void*)(OOC_INT32)moduleName))==(OOC_INT32)0;
      
l7:
      return i0;
l8:
      _failed_function(8380); return 0;
      ;
    }


  i0 = (OOC_INT32)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 8806))+36);
  switch (i1) {
  case 13:
  case 14:
  case 15:
    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8967)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 7);
    i1 = (OOC_INT32)readDesign;
    i0 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i0);
    return (i0!=0);
    goto l8;
  case 4:
  case 12:
  case 5:
  case 10:
  case 11:
  case 6:
  case 59:
  case 60:
  case 58:
  case 9:
  case 7:
  case 65:
  case 64:
  case 66:
  case 67:
  case 68:
  case 71:
  case 70:
  case 69:
  case 72:
  case 73:
  case 79:
  case 77:
  case 78:
    return OOC_FALSE;
    goto l8;
  case 55:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9629))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9639));
    i1 = (OOC_INT32)s;
    i2 = (OOC_INT32)readDesign;
    i0 = OOC_SSA_Destore__AccessedByCall((OOC_SSA_Destore__State)i1, (OOC_SSA__Result)i0, (OOC_SSA__Opnd)i2, 1);
    return i0;
    goto l8;
  case 76:
    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9729))+24);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9738));
    i0 = OOC_SSA_Destore__StateDesc_ClobberedBy_ModuleVariable((OOC_SSA__Result)i0, "Exception", 10);
    return i0;
    goto l8;
  case 18:
    return OOC_TRUE;
    goto l8;
  default:
    _failed_case(i1, 8796);
    goto l8;
  }
l8:
  _failed_function(8105); return 0;
  ;
}

void OOC_SSA_Destore__StateDesc_Transform(OOC_SSA_Destore__State s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SSA__ProcBlock pb;
  OOC_SSA__Instr instr;
  OOC_SSA__Result value;
  OOC_SSA_Destore__Worklist worklist;
  OOC_SSA__Instr next;
  OOC_SSA__Opnd use;
  OOC_SSA__Opnd nextUse;
  OOC_SSA__Opnd opnd;
  auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_UnknownValue(OOC_SSA__Result res);
  auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue(OOC_SSA__Result store, OOC_SSA__Instr get);
  auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect(OOC_SSA__Result store, OOC_SSA__Instr set);
  auto void OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses(OOC_SSA__Result storeOut, OOC_SSA__Result storeIn);
  auto void OOC_SSA_Destore__StateDesc_Transform_AddToWorklist(OOC_SSA__Instr instr);
  auto void OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist(OOC_SSA__Result res);
  auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement(OOC_SSA__Instr dgate);
  auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_DGateReplacement(OOC_SSA__Instr dgate);
    
    OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_UnknownValue(OOC_SSA__Result res) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)res;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 10576))+4);
      return (i0==2);
      ;
    }

    
    OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue(OOC_SSA__Result store, OOC_SSA__Instr get) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_SSA__Instr instr;
      OOC_INT8 alias;
      auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_GetValue_InCache(OOC_SSA__Instr instr, OOC_SSA__Result *value);
      auto OOC_SSA_Destore__CacheEntry OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache(OOC_SSA__Instr instr, OOC_SSA__Result value);
      auto void OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement(OOC_SSA__Instr dgate);
      auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue_GetSelectValue(OOC_SSA__Instr select);
      auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue_GetLoopValue(OOC_SSA__Instr loopStart);
        
        OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_GetValue_InCache(OOC_SSA__Instr instr, OOC_SSA__Result *value) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
          OOC_SSA_Destore__CacheEntry ptr;
          OOC_SSA__Opnd readDesign;
          OOC_SSA__Opnd opnd1;
          OOC_SSA__Opnd opnd2;

          i0 = (OOC_INT32)instr;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11320))+16);
          i1 = i1!=(OOC_INT32)0;
          if (!i1) goto l51;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11361))+16);
          i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11368)))), &_td_OOC_SSA_Destore__CacheEntryDesc, 11368);
          ptr = (OOC_SSA_Destore__CacheEntry)i0;
          i1 = (OOC_INT32)get;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11408)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 5);
          readDesign = (OOC_SSA__Opnd)i1;
          i2 = i0!=(OOC_INT32)0;
          if (!i2) goto l51;
          i2 = i1!=(OOC_INT32)0;
          
l5_loop:
          opnd1 = (OOC_SSA__Opnd)i1;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11518))+4);
          opnd2 = (OOC_SSA__Opnd)i3;
          i4 = *(OOC_INT8*)((_check_pointer(i1, 11553))+4);
          _assert((i4==5), 127, 11540);
          i4 = *(OOC_INT8*)((_check_pointer(i3, 11606))+4);
          _assert((i4==5), 127, 11593);
          if (i2) goto l8;
          i4=OOC_FALSE;
          goto l10;
l8:
          i4 = i3!=(OOC_INT32)0;
          
l10:
          if (i4) goto l12;
          i4=OOC_FALSE;
          goto l14;
l12:
          i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11721));
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11708));
          i4 = i5==i4;
          
l14:
          if (i4) goto l16;
          i4=i3;i3=i1;
          goto l30;
l16:
          i4=i3;i3=i1;
l17_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11759))+8);
          opnd1 = (OOC_SSA__Opnd)i3;
          i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 11785))+8);
          opnd2 = (OOC_SSA__Opnd)i4;
          i5 = i3!=(OOC_INT32)0;
          if (i5) goto l20;
          i5=OOC_FALSE;
          goto l22;
l20:
          i5 = i4!=(OOC_INT32)0;
          
l22:
          if (i5) goto l24;
          i5=OOC_FALSE;
          goto l26;
l24:
          i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 11721));
          i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11708));
          i5 = i6==i5;
          
l26:
          if (i5) goto l17_loop;
l30:
          i5 = i3!=(OOC_INT32)0;
          if (i5) goto l33;
          i3=OOC_FALSE;
          goto l35;
l33:
          i3 = *(OOC_INT8*)((_check_pointer(i3, 11851))+4);
          i3 = i3==5;
          
l35:
          if (i3) goto l41;
          i3 = i4!=(OOC_INT32)0;
          if (i3) goto l39;
          i3=OOC_FALSE;
          goto l43;
l39:
          i3 = *(OOC_INT8*)((_check_pointer(i4, 11918))+4);
          i3 = i3==5;
          
          goto l43;
l41:
          i3=OOC_TRUE;
l43:
          if (i3) goto l45;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12128))+8);
          *value = (OOC_SSA__Result)i3;
          return OOC_TRUE;
l45:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12203));
          ptr = (OOC_SSA_Destore__CacheEntry)i0;
          i3 = i0!=(OOC_INT32)0;
          if (i3) goto l5_loop;
l51:
          return OOC_FALSE;
          ;
        }

        
        OOC_SSA_Destore__CacheEntry OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache(OOC_SSA__Instr instr, OOC_SSA__Result value) {
          register OOC_INT32 i0,i1,i2;
          OOC_SSA_Destore__CacheEntry entry;

          i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Destore__CacheEntry.baseTypes[0]);
          entry = (OOC_SSA_Destore__CacheEntry)i0;
          i1 = (OOC_INT32)get;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12458)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 5);
          *(OOC_INT32*)((_check_pointer(i0, 12443))+4) = i1;
          i1 = (OOC_INT32)value;
          *(OOC_INT32*)((_check_pointer(i0, 12505))+8) = i1;
          i1 = (OOC_INT32)instr;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12540))+16);
          i2 = i2==(OOC_INT32)0;
          if (i2) goto l3;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12632))+16);
          *(OOC_INT32*)(_check_pointer(i0, 12617)) = (_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12639)))), &_td_OOC_SSA_Destore__CacheEntryDesc, 12639));
          goto l4;
l3:
          *(OOC_INT32*)(_check_pointer(i0, 12574)) = (OOC_INT32)0;
l4:
          *(OOC_INT32*)((_check_pointer(i1, 12678))+16) = i0;
          return (OOC_SSA_Destore__CacheEntry)i0;
          ;
        }

        
        void OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement(OOC_SSA__Instr dgate) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)dgate;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 12925))+5);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12830)))), OOC_SSA__InstrDesc_AddResultSubclass)),OOC_SSA__InstrDesc_AddResultSubclass)((OOC_SSA__Instr)i0, 23, i1);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12816)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          return;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue_GetSelectValue(OOC_SSA__Instr select) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          OOC_SSA__Result res;
          OOC_SSA__Instr dgate;
          OOC_SSA_Destore__CacheEntry dummy;
          OOC_SSA__Opnd opnd;

          i0 = (OOC_INT32)select;
          i1 = OOC_SSA_Destore__StateDesc_Transform_GetValue_InCache((OOC_SSA__Instr)i0, (void*)(OOC_INT32)&res);
          if (i1) goto l32;
          i1 = (OOC_INT32)pb;
          i2 = (OOC_INT32)get;
          i2 = *(OOC_INT8*)((_check_pointer(i2, 13730))+5);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13703)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 82, i2);
          dgate = (OOC_SSA__Instr)i1;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13757)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 21);
          OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement((OOC_SSA__Instr)i1);
          i2 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
          dummy = (OOC_SSA_Destore__CacheEntry)i2;
          i2 = *(OOC_INT8*)((_check_pointer(i0, 13907))+36);
          switch (i2) {
          case 5:
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13964)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
            opnd = (OOC_SSA__Opnd)i2;
            goto l7;
          case 11:
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14023)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
            opnd = (OOC_SSA__Opnd)i2;
            goto l7;
          default:
            _failed_case(i2, 13896);
            goto l7;
          }
l7:
          i2 = (OOC_INT32)opnd;
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l10;
          i2=OOC_FALSE;
          goto l12;
l10:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14088)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i2);
          i2 = !i2;
          
l12:
          if (!i2) goto l31;
l14_loop:
          i2 = (OOC_INT32)opnd;
          i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 14149));
          i4 = (OOC_INT32)get;
          i3 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i3, (OOC_SSA__Instr)i4);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14127)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i3, 1);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14197))+8);
          opnd = (OOC_SSA__Opnd)i2;
          i3 = *(OOC_INT8*)((_check_pointer(i0, 14231))+36);
          i3 = i3==5;
          if (i3) goto l17;
          i3=OOC_FALSE;
          goto l19;
l17:
          i3 = i2!=(OOC_INT32)0;
          
l19:
          if (!i3) goto l22;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14303))+8);
          opnd = (OOC_SSA__Opnd)i2;
          
l22:
          i3 = i2!=(OOC_INT32)0;
          if (i3) goto l25;
          i2=OOC_FALSE;
          goto l27;
l25:
          i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14088)))), OOC_SSA__OpndDesc_IsScheduleOpnd)),OOC_SSA__OpndDesc_IsScheduleOpnd)((OOC_SSA__Opnd)i2);
          i2 = !i2;
          
l27:
          if (i2) goto l14_loop;
l31:
          return (OOC_SSA__Result)i1;
          goto l33;
l32:
          i0 = (OOC_INT32)res;
          return (OOC_SSA__Result)i0;
l33:
          _failed_function(13059); return 0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue_GetLoopValue(OOC_SSA__Instr loopStart) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA__Result res;
          OOC_SSA__Instr dgate;
          OOC_SSA_Destore__CacheEntry dummy;

          i0 = (OOC_INT32)loopStart;
          i1 = OOC_SSA_Destore__StateDesc_Transform_GetValue_InCache((OOC_SSA__Instr)i0, (void*)(OOC_INT32)&res);
          if (i1) goto l3;
          i1 = (OOC_INT32)pb;
          i2 = (OOC_INT32)get;
          i2 = *(OOC_INT8*)((_check_pointer(i2, 14962))+5);
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14935)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 82, i2);
          dgate = (OOC_SSA__Instr)i1;
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14989)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 21);
          OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement((OOC_SSA__Instr)i1);
          i2 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
          dummy = (OOC_SSA_Destore__CacheEntry)i2;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15157))+24);
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 15166));
          i3 = (OOC_INT32)get;
          i2 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i2, (OOC_SSA__Instr)i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15129)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15231)))), OOC_SSA__InstrDesc_GetBackwardFeed)),OOC_SSA__InstrDesc_GetBackwardFeed)((OOC_SSA__Instr)i0);
          i2 = (OOC_INT32)get;
          i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15204)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
          return (OOC_SSA__Result)i1;
          goto l4;
l3:
          i0 = (OOC_INT32)res;
          return (OOC_SSA__Result)i0;
l4:
          _failed_function(14425); return 0;
          ;
        }


      i0 = (OOC_INT32)store;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15360))+8);
      instr = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 15385))+36);
      switch (i2) {
      case 13:
        i0 = (OOC_INT32)get;
        i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15463)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
        i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15545)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 7);
        i2 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i3);
        alias = i2;
        i3 = i2==1;
        if (i3) goto l9;
        i2 = i2!=0;
        if (i2) goto l7;
        i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16261)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 2);
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
        return (OOC_SSA__Result)i0;
        goto l34;
l7:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16035)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l34;
l9:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15731)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 8);
        return (OOC_SSA__Result)i0;
        goto l34;
      case 12:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16358)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 2);
        i1 = (OOC_INT32)get;
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l34;
      case 14:
      case 15:
        i0 = (OOC_INT32)get;
        i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16487)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
        i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16569)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 7);
        i2 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i3);
        alias = i2;
        i2 = i2!=0;
        if (i2) goto l15;
        i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17107)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 2);
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
        return (OOC_SSA__Result)i0;
        goto l34;
l15:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16857)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l34;
      case 4:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17408)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l34;
      case 5:
      case 11:
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue_GetSelectValue((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l34;
      case 6:
      case 59:
      case 60:
      case 58:
      case 9:
      case 7:
      case 65:
      case 64:
      case 66:
      case 67:
      case 68:
      case 71:
      case 70:
      case 69:
      case 76:
      case 79:
      case 77:
      case 78:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17964)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 2);
        i1 = (OOC_INT32)get;
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l34;
      case 72:
        i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18041)))), OOC_SSA__ResultDesc_ResultIndex)),OOC_SSA__ResultDesc_ResultIndex)((OOC_SSA__Result)i0);
        i0 = i0==2;
        if (i0) goto l23;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18193)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 2);
        i1 = (OOC_INT32)get;
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l34;
l23:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18109)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l34;
      case 73:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18441)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l34;
      case 10:
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue_GetLoopValue((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l34;
      case 55:
        i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18598))+24);
        i2 = (OOC_INT32)get;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18608));
        i3 = (OOC_INT32)s;
        i4 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 18645)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 5);
        i0 = OOC_SSA_Destore__AccessedByCall((OOC_SSA_Destore__State)i3, (OOC_SSA__Result)i0, (OOC_SSA__Opnd)i4, 1);
        if (i0) goto l30;
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19053)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i1, 2);
        i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i2);
        return (OOC_SSA__Result)i0;
        goto l34;
l30:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18776)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l34;
      case 18:
        i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19222)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l34;
      default:
        _failed_case(i2, 15375);
        goto l34;
      }
l34:
      _failed_function(10638); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect(OOC_SSA__Result store, OOC_SSA__Instr set) {
      register OOC_INT32 i0,i1;
      OOC_SSA__Opnd use;
      auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse(OOC_SSA__Opnd use);
        
        OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse(OOC_SSA__Opnd use) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA__Instr instr;
          OOC_SSA__Result storeOut;
          OOC_INT8 alias;
          OOC_SSA__Opnd readDesign;
          OOC_SSA__Instr i;
          auto OOC_SymbolTable__VarDecl OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_GetVar(OOC_SSA__Instr instr);
          auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_ExternalVisibility(OOC_SymbolTable__VarDecl var);
            
            OOC_SymbolTable__VarDecl OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_GetVar(OOC_SSA__Instr instr) {
              register OOC_INT32 i0,i1;
              OOC_INT8 _class;
              OOC_SSA__Opnd opnd;

              i0 = (OOC_INT32)instr;
              i1 = *(OOC_INT8*)((_check_pointer(i0, 20126))+36);
              switch (i1) {
              case 12:
                _class = 5;
                goto l5;
              case 13:
                _class = 7;
                goto l5;
              default:
                _failed_case(i1, 20116);
                goto l5;
              }
l5:
              i1 = _class;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20275)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, i1);
              opnd = (OOC_SSA__Opnd)i0;
              i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20318));
              i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20324)))), &_td_OOC_SSA__DeclRefDesc));
              if (i1) goto l8;
              i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20362));
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20372)))), &_td_OOC_SSA__DeclRefDesc, 20372)), 20380))+44);
              i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20387)))), &_td_OOC_SymbolTable__VarDeclDesc));
              
              goto l10;
l8:
              i1=OOC_TRUE;
l10:
              if (i1) goto l12;
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20529));
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20539)))), &_td_OOC_SSA__DeclRefDesc, 20539)), 20547))+44);
              return (OOC_SymbolTable__VarDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20558)))), &_td_OOC_SymbolTable__VarDeclDesc, 20558));
              goto l13;
l12:
              return (OOC_SymbolTable__VarDecl)(OOC_INT32)0;
l13:
              _failed_function(19813); return 0;
              ;
            }

            
            OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_ExternalVisibility(OOC_SymbolTable__VarDecl var) {
              register OOC_INT32 i0,i1;

              i0 = (OOC_INT32)var;
              i1 = i0==(OOC_INT32)0;
              if (i1) goto l3;
              i1 = *(OOC_UINT8*)((_check_pointer(i0, 20857))+50);
              
              goto l5;
l3:
              i1=OOC_TRUE;
l5:
              if (i1) goto l7;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20924)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
              i1 = (OOC_INT32)pb;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 20942))+16);
              i0 = i0!=i1;
              
              goto l8;
l7:
              i0=OOC_TRUE;
l8:
              return i0;
              ;
            }


          i0 = (OOC_INT32)use;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 21044))+4);
          i1 = i1==13;
          if (i1) goto l45;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21223))+12);
          instr = (OOC_SSA__Instr)i0;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 21252))+36);
          switch (i1) {
          case 12:
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21317)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            storeOut = (OOC_SSA__Result)i1;
            i2 = (OOC_INT32)set;
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 21387)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 7);
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21474)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
            i0 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i0);
            i0 = i0!=0;
            if (i0) goto l11;
            i0 = i1!=(OOC_INT32)0;
            if (i0) goto l9;
            i0=OOC_FALSE;
            goto l10;
l9:
            i0 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
            
l10:
            return i0;
            goto l46;
l11:
            return OOC_TRUE;
            goto l46;
          case 13:
            i1 = (OOC_INT32)set;
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21850)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 7);
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21937)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 7);
            i1 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i2);
            i2 = i1==1;
            alias = i1;
            if (i2) goto l20;
            i1 = i1!=0;
            if (i1) goto l18;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 22778)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l18:
            return OOC_TRUE;
            goto l46;
l20:
            return OOC_FALSE;
            goto l46;
          case 15:
          case 14:
            i1 = (OOC_INT32)set;
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 22928)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i1, 7);
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23015)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 7);
            i1 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i2);
            i2 = i1>=2;
            alias = i1;
            if (i2) goto l33;
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23390)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 5);
            readDesign = (OOC_SSA__Opnd)i1;
            i2 = i1==(OOC_INT32)0;
            if (i2) goto l31;
            i2 = (OOC_INT32)set;
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 23664)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 7);
            i1 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i1);
            alias = i1;
            i1 = i1!=0;
            if (i1) goto l29;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24147)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l29:
            return OOC_TRUE;
            goto l46;
l31:
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 23545)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l33:
            return OOC_TRUE;
            goto l46;
          case 7:
          case 8:
            i0 = (OOC_INT32)set;
            i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_GetVar((OOC_SSA__Instr)i0);
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_ExternalVisibility((OOC_SymbolTable__VarDecl)i0);
            return i0;
            goto l46;
          case 9:
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24462)))), OOC_SSA__InstrDesc_GetLoopEnd)),OOC_SSA__InstrDesc_GetLoopEnd)((OOC_SSA__Instr)i0);
            i = (OOC_SSA__Instr)i0;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24513)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
          case 10:
          case 11:
          case 6:
          case 5:
          case 59:
          case 60:
          case 64:
          case 66:
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 24760)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
          case 55:
            i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24862))+24);
            i2 = (OOC_INT32)set;
            i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 24872));
            i3 = (OOC_INT32)s;
            i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 24913)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i2, 7);
            i1 = OOC_SSA_Destore__AccessedByCall((OOC_SSA_Destore__State)i3, (OOC_SSA__Result)i1, (OOC_SSA__Opnd)i2, 0);
            if (i1) goto l41;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25154)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
            i1 = (OOC_INT32)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l41:
            return OOC_TRUE;
            goto l46;
          default:
            return OOC_TRUE;
            goto l46;
          }
l45:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21100))+12);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21100))+12);
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21107)))), OOC_SSA__InstrDesc_GetLoopStart)),OOC_SSA__InstrDesc_GetLoopStart)((OOC_SSA__Instr)i0);
          instr = (OOC_SSA__Instr)i0;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21162)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
          i1 = (OOC_INT32)set;
          i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
          return i0;
l46:
          _failed_function(19624); return 0;
          ;
        }


      i0 = (OOC_INT32)store;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25329))+8);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 25336))+20);
      i1 = i1==0;
      if (i1) goto l3;
      return OOC_FALSE;
      goto l20;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25368))+8);
      *(OOC_INT32*)((_check_pointer(i1, 25375))+20) = 1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25410))+12);
      i1 = i0!=(OOC_INT32)0;
      use = (OOC_SSA__Opnd)i0;
      if (i1) goto l6;
      i0=OOC_FALSE;
      goto l8;
l6:
      i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse((OOC_SSA__Opnd)i0);
      i0 = !i0;
      
l8:
      if (!i0) goto l19;
l10_loop:
      i0 = (OOC_INT32)use;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25490))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      i0=OOC_FALSE;
      goto l15;
l13:
      i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse((OOC_SSA__Opnd)i0);
      i0 = !i0;
      
l15:
      if (i0) goto l10_loop;
l19:
      i0 = (OOC_INT32)store;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25527))+8);
      i1 = (OOC_INT32)use;
      *(OOC_INT32*)((_check_pointer(i0, 25534))+20) = 0;
      return (i1!=(OOC_INT32)0);
l20:
      _failed_function(19284); return 0;
      ;
    }

    
    void OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses(OOC_SSA__Result storeOut, OOC_SSA__Result storeIn) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)storeOut;
      i1 = (OOC_INT32)storeIn;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25731)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i0, (OOC_SSA__Result)i1);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 25770)))), OOC_SSA__ResultDesc_DeleteResult)),OOC_SSA__ResultDesc_DeleteResult)((OOC_SSA__Result)i0);
      return;
      ;
    }

    
    void OOC_SSA_Destore__StateDesc_Transform_AddToWorklist(OOC_SSA__Instr instr) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA_Destore__Worklist wl;

      i0 = (OOC_INT32)instr;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 25912))+20);
      i1 = i1==-1;
      if (!i1) goto l4;
      *(OOC_INT32*)((_check_pointer(i0, 25956))+20) = (OOC_INT32)0;
      i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_Destore__Worklist.baseTypes[0]);
      wl = (OOC_SSA_Destore__Worklist)i1;
      i2 = (OOC_INT32)worklist;
      *(OOC_INT32*)(_check_pointer(i1, 26017)) = i2;
      *(OOC_INT32*)((_check_pointer(i1, 26047))+4) = i0;
      worklist = (OOC_SSA_Destore__Worklist)i1;
l4:
      return;
      ;
    }

    
    void OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist(OOC_SSA__Result res) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Opnd use;
      OOC_SSA__Instr useInstr;

      i0 = (OOC_INT32)res;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26255))+12);
      i1 = i0!=(OOC_INT32)0;
      use = (OOC_SSA__Opnd)i0;
      if (!i1) goto l11;
l3_loop:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26316))+12);
      useInstr = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 26345))+36);
      i2 = i2==82;
      if (!i2) goto l6;
      OOC_SSA_Destore__StateDesc_Transform_AddToWorklist((OOC_SSA__Instr)i1);
l6:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26441))+16);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l11:
      return;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement(OOC_SSA__Instr dgate) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Instr select;
      OOC_SSA__Opnd opnd;
      OOC_CHAR8 allTheSame;
      OOC_CHAR8 haveUnknownValue;
      OOC_SSA__Result firstValue;
      OOC_SSA__Result value;
      auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue(OOC_SSA__Opnd opnd);
      auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr(OOC_SSA__Instr instr, OOC_SSA__Result res);
        
        OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue(OOC_SSA__Opnd opnd) {
          register OOC_INT32 i0,i1;
          OOC_SSA__Result value;

          i0 = (OOC_INT32)opnd;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 26925));
          value = (OOC_SSA__Result)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26949)))), &_td_OOC_SSA__InstrDesc);
          if (i1) goto l3;
          i1=OOC_FALSE;
          goto l5;
l3:
          i1 = *(OOC_INT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 26976)))), &_td_OOC_SSA__InstrDesc, 26976)), 26982))+36);
          i1 = i1==82;
          
l5:
          if (!i1) goto l8;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27078)))), &_td_OOC_SSA__InstrDesc, 27078)), 27084))+24);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27093))+8);
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 27102));
          
l8:
          return (OOC_SSA__Result)i0;
          ;
        }

        
        OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr(OOC_SSA__Instr instr, OOC_SSA__Result res) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)res;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27273))+8);
          i1 = (OOC_INT32)instr;
          return (i1==i0);
          ;
        }


      i0 = (OOC_INT32)dgate;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27339))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 27348));
      i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27357)))), &_td_OOC_SSA__InstrDesc, 27357);
      select = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 27381))+36);
      i2 = i2==10;
      if (i2) goto l3;
      i2=OOC_FALSE;
      goto l5;
l3:
      i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27426)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 3);
      i2 = i2!=(OOC_INT32)0;
      
l5:
      if (i2) goto l7;
      i0=OOC_FALSE;
      goto l13;
l7:
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27490)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 3);
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      i0 = OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0);
      if (i0) goto l10;
      i0 = (OOC_INT32)dgate;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27549)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 3);
      i1 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i1);
      i0 = OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
      
      goto l13;
l10:
      i0=OOC_TRUE;
l13:
      if (i0) goto l37;
      allTheSame = OOC_TRUE;
      haveUnknownValue = OOC_FALSE;
      i0 = (OOC_INT32)dgate;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27778)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
      opnd = (OOC_SSA__Opnd)i0;
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      i1 = (OOC_INT32)opnd;
      i1 = i1!=(OOC_INT32)0;
      firstValue = (OOC_SSA__Result)i0;
      if (!i1) goto l28;
l17_loop:
      i0 = (OOC_INT32)opnd;
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      i1 = (OOC_INT32)firstValue;
      i1 = i0!=i1;
      value = (OOC_SSA__Result)i0;
      if (!i1) goto l20;
      allTheSame = OOC_FALSE;
l20:
      i0 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
      if (!i0) goto l23;
      haveUnknownValue = OOC_TRUE;
l23:
      i0 = (OOC_INT32)opnd;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28096))+8);
      opnd = (OOC_SSA__Opnd)i0;
      i0 = i0!=(OOC_INT32)0;
      if (i0) goto l17_loop;
l28:
      i0 = allTheSame;
      if (i0) goto l35;
      i0 = haveUnknownValue;
      if (i0) goto l33;
      i0 = (OOC_INT32)dgate;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28354)))), OOC_SSA__InstrDesc_GetResultClass)),OOC_SSA__InstrDesc_GetResultClass)((OOC_SSA__Instr)i0, 23);
      return (OOC_SSA__Result)i0;
      goto l38;
l33:
      i0 = (OOC_INT32)select;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28244)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
      return (OOC_SSA__Result)i0;
      goto l38;
l35:
      i0 = (OOC_INT32)firstValue;
      return (OOC_SSA__Result)i0;
      goto l38;
l37:
      i0 = (OOC_INT32)dgate;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27590)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 3);
      opnd = (OOC_SSA__Opnd)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27615)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i1);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 27660)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      return (OOC_SSA__Result)i0;
l38:
      _failed_function(26505); return 0;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_DGateReplacement(OOC_SSA__Instr dgate) {
      register OOC_INT32 i0,i1,i2;
      OOC_SSA__Result replacement;
      OOC_SSA__Instr select;
      OOC_SSA__Opnd opnd;
      OOC_INT32 i;
      OOC_SSA__Instr collect;
      OOC_SSA__Result newRes;
      auto OOC_INT32 OOC_SSA_Destore__StateDesc_Transform_DGateReplacement_NumberOfPaths(OOC_SSA__Instr select);
      auto OOC_SSA__Instr OOC_SSA_Destore__StateDesc_Transform_DGateReplacement_GetCollect(OOC_SSA__Instr select, OOC_INT32 pathNum);
        
        OOC_INT32 OOC_SSA_Destore__StateDesc_Transform_DGateReplacement_NumberOfPaths(OOC_SSA__Instr select) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)select;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 28791))+36);
          switch (i1) {
          case 5:
            i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28852)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 16);
            i1 = i1==(OOC_INT32)0;
            if (i1) goto l5;
            i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28996)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i0, 1);
            return (i0-1);
            goto l10;
l5:
            i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 28919)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i0, 1);
            return (i0>>1);
            goto l10;
          case 10:
            return 2;
            goto l10;
          case 11:
            i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29123)))), OOC_SSA__InstrDesc_CountOpndClass)),OOC_SSA__InstrDesc_CountOpndClass)((OOC_SSA__Instr)i0, 11);
            return i0;
            goto l10;
          default:
            _failed_case(i1, 28780);
            goto l10;
          }
l10:
          _failed_function(28653); return 0;
          ;
        }

        
        OOC_SSA__Instr OOC_SSA_Destore__StateDesc_Transform_DGateReplacement_GetCollect(OOC_SSA__Instr select, OOC_INT32 pathNum) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SSA__Opnd opnd;
          OOC_SSA__Instr loopEnd;
          OOC_SSA__Instr collect;
          OOC_SSA__Result oldStore;

          i0 = (OOC_INT32)select;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 29606))+36);
          switch (i1) {
          case 5:
            i1 = pathNum;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29667)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, (2+i1*2));
            opnd = (OOC_SSA__Opnd)i0;
            goto l10;
          case 11:
            i1 = pathNum;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 29797)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, (i1+2));
            opnd = (OOC_SSA__Opnd)i0;
            i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29842));
            i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 29847))+8);
            i1 = *(OOC_INT8*)((_check_pointer(i1, 29854))+36);
            _assert((i1==9), 127, 29830);
            i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 29901));
            i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29906))+8);
            i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29913))+24);
            opnd = (OOC_SSA__Opnd)i0;
            goto l10;
          case 10:
            i1 = pathNum;
            i2 = i1==0;
            if (i2) goto l7;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30087)))), OOC_SSA__InstrDesc_GetLoopEnd)),OOC_SSA__InstrDesc_GetLoopEnd)((OOC_SSA__Instr)i0);
            loopEnd = (OOC_SSA__Instr)i0;
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30130)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 13);
            opnd = (OOC_SSA__Opnd)i0;
            
            goto l10;
l7:
            i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30022)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, i1);
            opnd = (OOC_SSA__Opnd)i0;
            
            goto l10;
          default:
            _failed_case(i1, 29595);
            goto l10;
          }
l10:
          i0 = (OOC_INT32)opnd;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30219));
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 30224))+8);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 30231))+36);
          i1 = i1==6;
          if (i1) goto l13;
          i1 = (OOC_INT32)pb;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30332)))), OOC_SSA__ProcBlockDesc_AddInstr)),OOC_SSA__ProcBlockDesc_AddInstr)((OOC_SSA__ProcBlock)i1, 6, 0);
          collect = (OOC_SSA__Instr)i1;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30402));
          oldStore = (OOC_SSA__Result)i2;
          i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30444)))), OOC_SSA__InstrDesc_AddResult)),OOC_SSA__InstrDesc_AddResult)((OOC_SSA__Instr)i1, 2);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30423)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i3);
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30490)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
          return (OOC_SSA__Instr)i1;
          goto l14;
l13:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30284));
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30289))+8);
          return (OOC_SSA__Instr)i0;
l14:
          _failed_function(29214); return 0;
          ;
        }


      i0 = (OOC_INT32)dgate;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30625))+24);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30634))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 30643));
      replacement = (OOC_SSA__Result)i0;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 30670))+4);
      i1 = i1==23;
      if (i1) goto l3;
      return (OOC_SSA__Result)i0;
      goto l13;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30829))+8);
      dgate = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30903))+24);
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 30912));
      select = (OOC_SSA__Instr)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 30921)))), &_td_OOC_SSA__InstrDesc, 30921));
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 30950)))), OOC_SSA__InstrDesc_NthOpnd)),OOC_SSA__InstrDesc_NthOpnd)((OOC_SSA__Instr)i0, 2);
      opnd = (OOC_SSA__Opnd)i0;
      i0 = i0!=(OOC_INT32)0;
      i = 0;
      if (i0) goto l6;
      i0=0;
      goto l12;
l6:
      i0=0;
l7_loop:
      i1 = (OOC_INT32)select;
      i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_DGateReplacement_GetCollect((OOC_SSA__Instr)i1, i0);
      collect = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT32)opnd;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 31075));
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31062)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2, 1);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 31114))+8);
      i1 = i;
      i1 = i1+1;
      opnd = (OOC_SSA__Opnd)i0;
      i = i1;
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l11;
      i0=i1;
      goto l7_loop;
l11:
      i0=i1;
l12:
      i1 = (OOC_INT32)select;
      i1 = OOC_SSA_Destore__StateDesc_Transform_DGateReplacement_NumberOfPaths((OOC_SSA__Instr)i1);
      _assert((i0==i1), 127, 31154);
      i0 = (OOC_INT32)select;
      i1 = (OOC_INT32)dgate;
      i1 = *(OOC_INT8*)((_check_pointer(i1, 31257))+5);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31213)))), OOC_SSA__InstrDesc_AddResultSubclass)),OOC_SSA__InstrDesc_AddResultSubclass)((OOC_SSA__Instr)i0, 14, i1);
      newRes = (OOC_SSA__Result)i0;
      i1 = (OOC_INT32)replacement;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31288)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
      return (OOC_SSA__Result)i0;
l13:
      _failed_function(28463); return 0;
      ;
    }


  i0 = (OOC_INT32)s;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 31431));
  pb = (OOC_SSA__ProcBlock)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31586)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)(OOC_INT32)0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31624))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l23;
l3_loop:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 31679))+36);
  i1 = i1==12;
  if (!i1) goto l18;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31739)))), OOC_SSA__InstrDesc_GetArgStore)),OOC_SSA__InstrDesc_GetArgStore)((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i0;
  i0 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
  if (i0) goto l16;
  i0 = (OOC_INT32)value;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31945)))), &_td_OOC_SSA__InstrDesc);
  if (i1) goto l10;
  i1=OOC_FALSE;
  goto l12;
l10:
  i1 = *(OOC_INT8*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31986)))), &_td_OOC_SSA__InstrDesc, 31986)), 31992))+36);
  i1 = i1==82;
  
l12:
  if (i1) goto l14;
  i1 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32097)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
  goto l18;
l14:
  i1 = (OOC_INT32)instr;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 32037)))), OOC_SSA__InstrDesc_AddOpnd)),OOC_SSA__InstrDesc_AddOpnd)((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 22);
  goto l18;
l16:
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 31834)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31859))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 31869));
  OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31892))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 31892))+24);
  i2 = (OOC_INT32)value;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 31902)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i2);
l18:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32164))+28);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l23:
  worklist = (OOC_SSA_Destore__Worklist)(OOC_INT32)0;
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32307))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l41;
l26_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32365))+28);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 32392))+36);
  i1 = i1==82;
  if (i1) goto l29;
  i1=OOC_FALSE;
  goto l31;
l29:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 32424))+20);
  i1 = i1==-1;
  
l31:
  if (!i1) goto l36;
  i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement((OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i0;
  i1 = (OOC_INT32)instr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32523))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32532))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 32541));
  i2 = i0!=i2;
  if (!i2) goto l36;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32567))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32576))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32567))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 32576))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32585)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i3, (OOC_SSA__Result)i0);
  OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist((OOC_SSA__Result)i1);
l36:
  i0 = (OOC_INT32)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l26_loop;
l41:
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l52;
l44_loop:
  i0 = (OOC_INT32)worklist;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 32793))+4);
  instr = (OOC_SSA__Instr)i1;
  *(OOC_INT32*)((_check_pointer(i1, 32812))+20) = -1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 32864));
  worklist = (OOC_SSA_Destore__Worklist)i0;
  i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement((OOC_SSA__Instr)i1);
  value = (OOC_SSA__Result)i0;
  i1 = (OOC_INT32)instr;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32936))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32945))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 32954));
  i2 = i0!=i2;
  if (!i2) goto l47;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32978))+24);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 32987))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 32978))+24);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 32987))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 32996)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i3, (OOC_SSA__Result)i0);
  OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist((OOC_SSA__Result)i1);
l47:
  i0 = (OOC_INT32)worklist;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l44_loop;
l52:
  i0 = (OOC_INT32)pb;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33184))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l91;
l55_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33242))+28);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 33269))+36);
  i1 = i1==82;
  if (!i1) goto l86;
  i0 = (OOC_INT32)OOC_SSA_Destore__StateDesc_Transform_DGateReplacement((OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i0;
  i0 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
  if (i0) goto l72;
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34141))+12);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l85;
  i1 = (OOC_INT32)value;
  
l62_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34208))+16);
  nextUse = (OOC_SSA__Opnd)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i0, 34237))+4);
  i3 = i3==22;
  if (i3) goto l65;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34374)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i1);
  goto l66;
l65:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34283))+12);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34283))+12);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 34289)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i4, (OOC_SSA__Result)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 34327)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i0);
l66:
  use = (OOC_SSA__Opnd)i2;
  i0 = i2!=(OOC_INT32)0;
  if (!i0) goto l85;
  i0=i2;
  goto l62_loop;
l72:
  i0 = (OOC_INT32)instr;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33449))+12);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l85;
l75_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33516))+16);
  nextUse = (OOC_SSA__Opnd)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 33545))+4);
  i1 = i1==22;
  if (i1) goto l78;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33929))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 33935))+36);
  _assert((i0==82), 127, 33919);
  goto l79;
l78:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33598))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 33604))+36);
  _assert((i1==12), 127, 33588);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33652))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33652))+12);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 33658)))), OOC_SSA__InstrDesc_GetOpndClass)),OOC_SSA__InstrDesc_GetOpndClass)((OOC_SSA__Instr)i0, 2);
  opnd = (OOC_SSA__Opnd)i0;
  _assert((i0!=(OOC_INT32)0), 127, 33699);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33744))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33750));
  i1 = *(OOC_INT8*)((_check_pointer(i1, 33761))+4);
  _assert((i1==2), 127, 33733);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 33820))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 33843));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 33826));
  OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
  i0 = (OOC_INT32)opnd;
  i1 = (OOC_INT32)value;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33868)))), OOC_SSA__OpndDesc_ReplaceArg)),OOC_SSA__OpndDesc_ReplaceArg)((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i1);
l79:
  i0 = (OOC_INT32)use;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 33992)))), OOC_SSA__OpndDesc_DeleteOpnd)),OOC_SSA__OpndDesc_DeleteOpnd)((OOC_SSA__Opnd)i0);
  i0 = (OOC_INT32)nextUse;
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l75_loop;
l85:
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 34487))+12);
  _assert((i1==(OOC_INT32)0), 127, 34475);
  i1 = (OOC_INT32)pb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34514)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
l86:
  i0 = (OOC_INT32)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l55_loop;
l91:
  i0 = (OOC_INT32)pb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35255))+8);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l109;
l94_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35314))+28);
  next = (OOC_SSA__Instr)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 35342))+36);
  i3 = i3==12;
  if (i3) goto l97;
  i3=OOC_FALSE;
  goto l99;
l97:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35373))+12);
  i3 = i3==(OOC_INT32)0;
  
l99:
  if (!i3) goto l104;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 35412));
  i3 = i3!=(OOC_INT32)0;
  if (!i3) goto l103;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 35534));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 35546));
  _assert((i3==(OOC_INT32)0), 127, 35521);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 35582));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 35614))+24);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 35624));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 35582));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 35594)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i5, (OOC_SSA__Result)i4);
l103:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35655)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
l104:
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l109;
  i1=i2;
  goto l94_loop;
l109:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 35871)))), OOC_SSA__ProcBlockDesc_SetMarkers)),OOC_SSA__ProcBlockDesc_SetMarkers)((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)(OOC_INT32)0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35909))+8);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l124;
l112_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 35968))+28);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 35996))+36);
  i1 = i1==13;
  if (i1) goto l115;
  i0=OOC_FALSE;
  goto l117;
l115:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36051)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
  i0 = !i0;
  
l117:
  if (!i0) goto l119;
  i0 = (OOC_INT32)instr;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36105)))), OOC_SSA__InstrDesc_GetResultStore)),OOC_SSA__InstrDesc_GetResultStore)((OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i1;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 36158)))), OOC_SSA__InstrDesc_GetArgClass)),OOC_SSA__InstrDesc_GetArgClass)((OOC_SSA__Instr)i0, 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36138)))), OOC_SSA__ResultDesc_ReplaceUses)),OOC_SSA__ResultDesc_ReplaceUses)((OOC_SSA__Result)i1, (OOC_SSA__Result)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 36208))+12);
  _assert((i1==(OOC_INT32)0), 127, 36195);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 36281));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 36293));
  _assert((i1==(OOC_INT32)0), 127, 36268);
  i1 = (OOC_INT32)pb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 36324)))), OOC_SSA__ProcBlockDesc_DeleteInstr)),OOC_SSA__ProcBlockDesc_DeleteInstr)((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
l119:
  i0 = (OOC_INT32)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l112_loop;
l124:
  return;
  ;
}

void OOC_OOC_SSA_Destore_init(void) {

  return;
  ;
}

/* --- */
