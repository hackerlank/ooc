#include "OOC/Scanner/Pragma.d"
#include "__oo2c.h"

void OOC_Scanner_Pragma__ErrorContextDesc_GetTemplate(OOC_Scanner_Pragma__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT32 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT32)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3264))+8);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){80,114,97,103,109,97,32,115,116,97,114,116,32,100,101,108,105,109,105,116,101,114,32,119,105,116,104,105,110,32,112,114,97,103,109,97,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){80,114,97,103,109,97,32,110,111,116,32,99,108,111,115,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 3:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,107,101,121,119,111,114,100,32,96,36,123,115,121,109,95,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 4:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,115,121,109,98,111,108,32,96,36,123,115,121,109,95,110,97,109,101,125,39,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 5:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,105,100,101,110,116,105,102,105,101,114,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 6:
    _copy_16((const void*)((OOC_CHAR16[]){73,108,108,101,103,97,108,32,118,97,114,105,97,98,108,101,32,110,97,109,101,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 7:
    _copy_16((const void*)((OOC_CHAR16[]){85,110,100,101,102,105,110,101,100,32,112,114,97,103,109,97,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 8:
    _copy_16((const void*)((OOC_CHAR16[]){73,110,118,97,108,105,100,32,111,112,101,114,97,110,100,115,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 10:
    _copy_16((const void*)((OOC_CHAR16[]){69,120,112,101,99,116,101,100,32,98,111,111,108,101,97,110,32,101,120,112,114,101,115,115,105,111,110,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 11:
    _copy_16((const void*)((OOC_CHAR16[]){78,111,32,111,112,101,110,32,96,73,70,39,32,115,116,97,116,101,109,101,110,116,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 12:
    _copy_16((const void*)((OOC_CHAR16[]){96,73,70,39,32,115,116,97,116,101,109,101,110,116,32,108,97,99,107,115,32,96,69,78,68,39,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 13:
    _copy_16((const void*)((OOC_CHAR16[]){96,69,76,83,69,39,32,112,97,114,116,32,97,108,114,101,97,100,121,32,100,101,102,105,110,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 14:
    _copy_16((const void*)((OOC_CHAR16[]){80,114,97,103,109,97,32,118,97,114,105,97,98,108,101,32,97,108,114,101,97,100,121,32,100,101,102,105,110,101,100,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 15:
    _copy_16((const void*)((OOC_CHAR16[]){86,97,108,117,101,32,110,111,116,32,97,115,115,105,103,110,109,101,110,116,32,99,111,109,112,97,116,105,98,108,101,32,116,111,32,118,97,114,105,97,98,108,101,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  case 16:
    _copy_16((const void*)((OOC_CHAR16[]){78,111,32,118,97,108,117,101,115,32,115,116,111,114,101,100,32,111,110,32,112,114,97,103,109,97,32,115,116,97,99,107,0}),(void*)(OOC_INT32)t,128);
    goto l18;
  default:
    _failed_case(i1, 3256);
    goto l18;
  }
l18:
  i1 = (OOC_INT32)context;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4252)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT32)t, 128, (void*)(OOC_INT32)templ, templ_0d);
  return;
  ;
}

void OOC_Scanner_Pragma__Init(struct OOC_Scanner_Pragma__State *state, RT0__Struct state__tag, OOC_Scanner_Builder__Builder builder, OOC_Config_Pragmas__Section defaultPragmas) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)builder;
  *(OOC_INT32*)((OOC_INT32)state+4) = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5062));
  *(OOC_INT32*)(OOC_INT32)state = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5121));
  i0 = (OOC_INT32)OOC_Scanner_Builder_BasicList__New((OOC_Scanner_InputBuffer__Buffer)i0, OOC_FALSE);
  *(OOC_INT32*)((OOC_INT32)state+16) = i0;
  *(OOC_INT32*)((OOC_INT32)state+8) = (OOC_INT32)0;
  *(OOC_UINT8*)((OOC_INT32)state+12) = OOC_TRUE;
  i0 = (OOC_INT32)defaultPragmas;
  i0 = (OOC_INT32)OOC_Config_Pragmas__NewHistory((OOC_Config_Pragmas__Section)i0);
  *(OOC_INT32*)((OOC_INT32)state+36) = i0;
  return;
  ;
}

static OOC_INT8 OOC_Scanner_Pragma__ParsePragma(struct OOC_Scanner_Pragma__State *state, RT0__Struct state__tag) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18,i19,i20,i21,i22,i23;
  Msg__Msg lastError;
  OOC_Scanner_Builder_BasicList__Symbol prevSym;
  OOC_Scanner_Builder_BasicList__Symbol sym;
  OOC_CHAR8 nested;
  OOC_CHAR8 dummy;
  OOC_CHAR8 err;
  auto void OOC_Scanner_Pragma__ParsePragma_AppendErr(OOC_Scanner_Builder_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__ParsePragma_Err(OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__ParsePragma_CheckName(OOC_Scanner_Builder_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__ParsePragma_CheckBoolean(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag);
  auto void OOC_Scanner_Pragma__ParsePragma_NextSym();
  auto void OOC_Scanner_Pragma__ParsePragma_CheckSym(OOC_INT8 symId);
  auto OOC_CHAR8 OOC_Scanner_Pragma__ParsePragma_GetBool(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref);
  auto OOC_INT32 OOC_Scanner_Pragma__ParsePragma_GetInt(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref);
  auto Config_Value__StringPtr OOC_Scanner_Pragma__ParsePragma_GetString(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref);
  auto void OOC_Scanner_Pragma__ParsePragma_Expression(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag);
  auto OOC_CHAR8 OOC_Scanner_Pragma__ParsePragma_BoolExpression(OOC_CHAR8 eval);
  auto void OOC_Scanner_Pragma__ParsePragma_PushCond();
  auto void OOC_Scanner_Pragma__ParsePragma_PopCond();
  auto void OOC_Scanner_Pragma__ParsePragma_CheckForIf(OOC_CHAR8 noElse);
  auto void OOC_Scanner_Pragma__ParsePragma_Assignment(OOC_CHAR8 define, OOC_CHAR8 eval);
    
    void OOC_Scanner_Pragma__ParsePragma_AppendErr(OOC_Scanner_Builder_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 5681))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5655)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 5731))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5704)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 5784))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5755)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5814))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5814))+20);
      i2 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5823)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i2);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_Err(OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)OOC_Scanner_Pragma__pragmaContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_AppendErr((OOC_Scanner_Builder_BasicList__Symbol)i0);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_CheckName(OOC_Scanner_Builder_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2;
      OOC_Scanner_InputBuffer__CharArray name;

      i0 = (OOC_INT32)sym;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6140))+8);
      name = (OOC_Scanner_InputBuffer__CharArray)i1;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6161)),(const void*)"TRUE"))==(OOC_INT32)0;
      if (i2) goto l3;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6181)),(const void*)"FALSE"))==(OOC_INT32)0;
      
      goto l5;
l3:
      i2=OOC_TRUE;
l5:
      if (i2) goto l7;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6202)),(const void*)"PUSH"))==(OOC_INT32)0;
      
      goto l9;
l7:
      i2=OOC_TRUE;
l9:
      if (i2) goto l11;
      i2 = (
      _cmp8((const void*)(_check_pointer(i1, 6232)),(const void*)"POP"))==(OOC_INT32)0;
      
      goto l13;
l11:
      i2=OOC_TRUE;
l13:
      if (i2) goto l15;
      i1 = (
      _cmp8((const void*)(_check_pointer(i1, 6251)),(const void*)"DEFINE"))==(OOC_INT32)0;
      
      goto l17;
l15:
      i1=OOC_TRUE;
l17:
      if (!i1) goto l19;
      OOC_Scanner_Pragma__ParsePragma_Err(6, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l19:
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_CheckBoolean(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=OOC_FALSE;
      goto l5;
l3:
      i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6453)))), &_td_Config_Value_Boolean__ValueDesc));
      
l5:
      if (!i0) goto l10;
      i0 = eval;
      if (!i0) goto l9;
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)value+4);
      OOC_Scanner_Pragma__ParsePragma_Err(10, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l9:
      i0 = (OOC_INT32)Config_Value_Boolean__New(OOC_FALSE);
      *(OOC_INT32*)(OOC_INT32)value = i0;
l10:
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_NextSym() {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)sym;
      prevSym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6714));
      sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_CheckSym(OOC_INT8 symId) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)sym;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 6805))+4);
      i1 = symId;
      i0 = i0!=i1;
      if (!i0) goto l7;
      i0 = OOC_Scanner_Symbol__IsKeyword(i1);
      if (i0) goto l5;
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_Err(4, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l6;
l5:
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_Err(3, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l6:
      i0 = (OOC_INT32)lastError;
      i1 = (OOC_INT32)Msg__GetStringPtr((void*)((OOC_INT32)OOC_Scanner_Symbol__representation+((_check_index(i1, 78, OOC_UINT8, 7079))*10)), 10);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6977)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, "sym_name", 9, (Msg__StringPtr)i1);
l7:
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner_Pragma__ParsePragma_GetBool(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref) {
      register OOC_INT32 i0,i1;
      OOC_ALLOCATE_VPAR(value,OOC_Scanner_Pragma__ParsePragma_Value ,1)

      OOC_INITIALIZE_VPAR(value__ref,value,OOC_Scanner_Pragma__ParsePragma_Value ,8)
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7236)))), &_td_Config_Value_Boolean__ValueDesc);
      
l5:
      if (i1) goto l7;
      return OOC_FALSE;
      goto l8;
l7:
      i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7305)))), &_td_Config_Value_Boolean__ValueDesc, 7305)), 7311));
      return i0;
l8:
      _failed_function(7147); return 0;
      ;
    }

    
    OOC_INT32 OOC_Scanner_Pragma__ParsePragma_GetInt(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(value,OOC_Scanner_Pragma__ParsePragma_Value ,1)

      OOC_INITIALIZE_VPAR(value__ref,value,OOC_Scanner_Pragma__ParsePragma_Value ,8)
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i0 = *(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7484)))), &_td_Config_Value_Integer__ValueDesc, 7484)), 7490));
      return i0;
      ;
    }

    
    Config_Value__StringPtr OOC_Scanner_Pragma__ParsePragma_GetString(const struct OOC_Scanner_Pragma__ParsePragma_Value *value__ref) {
      register OOC_INT32 i0;
      OOC_ALLOCATE_VPAR(value,OOC_Scanner_Pragma__ParsePragma_Value ,1)

      OOC_INITIALIZE_VPAR(value__ref,value,OOC_Scanner_Pragma__ParsePragma_Value ,8)
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7621)))), &_td_Config_Value_String__ValueDesc, 7621)), 7627));
      return (Config_Value__StringPtr)i0;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_Expression(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT8 op;
      OOC_Scanner_Builder_BasicList__Symbol pos;
      struct OOC_Scanner_Pragma__ParsePragma_Value right;
      Config_Value__StringPtr leftString;
      Config_Value__StringPtr rightString;
      auto void OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag);
        
        void OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          struct OOC_Scanner_Pragma__ParsePragma_Value right;
          auto void OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag);
            
            void OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag) {
              register OOC_INT32 i0,i1,i2,i3,i4;
              struct OOC_Scanner_Pragma__ParsePragma_Value right;
              auto void OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term_Factor(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag);
                
                void OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term_Factor(OOC_CHAR8 eval, struct OOC_Scanner_Pragma__ParsePragma_Value *value, RT0__Struct value__tag) {
                  register OOC_INT32 i0,i1,i2,i3,i4;
                  OOC_INT32 _int;

                  *(OOC_INT32*)(OOC_INT32)value = (OOC_INT32)0;
                  i0 = (OOC_INT32)sym;
                  *(OOC_INT32*)((OOC_INT32)value+4) = i0;
                  i1 = *(OOC_INT8*)((_check_pointer(i0, 8293))+4);
                  switch (i1) {
                  case 43:
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8350))+8);
                    i1 = (
                    _cmp8((const void*)(_check_pointer(i1, 8355)),(const void*)"FALSE"))==(OOC_INT32)0;
                    if (i1) goto l5;
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8375))+8);
                    i1 = (
                    _cmp8((const void*)(_check_pointer(i1, 8380)),(const void*)"TRUE"))==(OOC_INT32)0;
                    
                    goto l7;
l5:
                    i1=OOC_TRUE;
l7:
                    if (i1) goto l16;
                    OOC_Scanner_Pragma__ParsePragma_CheckName((OOC_Scanner_Builder_BasicList__Symbol)i0);
                    i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+36);
                    i1 = (OOC_INT32)sym;
                    i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8660))+8);
                    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8660))+8);
                    i4 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+36);
                    i1 = *(OOC_INT32*)((_check_pointer(i1, 8671))+16);
                    i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 8665)), (OOC_INT32)0);
                    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8645)))), OOC_Config_Pragmas__HistoryDesc_GetValue)),OOC_Config_Pragmas__HistoryDesc_GetValue)((OOC_Config_Pragmas__History)i4, (void*)(_check_pointer(i2, 8665)), i3, i1);
                    i1 = i0!=(OOC_INT32)0;
                    if (i1) goto l14;
                    i0 = eval;
                    if (!i0) goto l17;
                    i0 = (OOC_INT32)sym;
                    OOC_Scanner_Pragma__ParsePragma_Err(7, (OOC_Scanner_Builder_BasicList__Symbol)i0);
                    goto l17;
l14:
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    goto l17;
l16:
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8489))+8);
                    i0 = (OOC_INT32)Config_Value_Boolean__New(((
                    _cmp8((const void*)(_check_pointer(i0, 8494)),(const void*)"TRUE"))==(OOC_INT32)0));
                    *(OOC_INT32*)(OOC_INT32)value = i0;
l17:
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 35:
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9037))+8);
                    i0 = (OOC_INT32)OOC_Scanner_Integer__Convert10((OOC_Scanner_InputBuffer__CharArray)i0, (void*)(OOC_INT32)&_int);
                    lastError = (Msg__Msg)i0;
                    i0 = i0!=(OOC_INT32)0;
                    if (!i0) goto l21;
                    i0 = (OOC_INT32)sym;
                    OOC_Scanner_Pragma__ParsePragma_AppendErr((OOC_Scanner_Builder_BasicList__Symbol)i0);
l21:
                    i0 = _int;
                    i0 = (OOC_INT32)Config_Value_Integer__New(i0);
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 36:
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9354))+8);
                    i0 = (OOC_INT32)OOC_Scanner_Integer__Convert16((OOC_Scanner_InputBuffer__CharArray)i0, (void*)(OOC_INT32)&_int);
                    lastError = (Msg__Msg)i0;
                    i0 = i0!=(OOC_INT32)0;
                    if (!i0) goto l25;
                    i0 = (OOC_INT32)sym;
                    OOC_Scanner_Pragma__ParsePragma_AppendErr((OOC_Scanner_Builder_BasicList__Symbol)i0);
l25:
                    i0 = _int;
                    i0 = (OOC_INT32)Config_Value_Integer__New(i0);
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 41:
                  case 42:
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9674))+8);
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9674))+8);
                    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9679)), (OOC_INT32)0);
                    i0 = (OOC_INT32)Config_Value_String__New((void*)(_check_pointer(i1, 9679)), i0);
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9738)))), &_td_Config_Value_String__ValueDesc, 9738)), 9744));
                    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9738)))), &_td_Config_Value_String__ValueDesc, 9738)), 9744));
                    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9752)), (OOC_INT32)0);
                    Strings__Delete((void*)(_check_pointer(i1, 9752)), i0, 0, 1);
                    i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
                    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9817)))), &_td_Config_Value_String__ValueDesc, 9817)), 9823));
                    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9817)))), &_td_Config_Value_String__ValueDesc, 9817)), 9823));
                    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9891)))), &_td_Config_Value_String__ValueDesc, 9891)), 9897));
                    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9891)))), &_td_Config_Value_String__ValueDesc, 9891)), 9897));
                    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9905)), (OOC_INT32)0);
                    i0 = Strings__Length((void*)(_check_pointer(i3, 9905)), i0);
                    i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9831)), (OOC_INT32)0);
                    Strings__Delete((void*)(_check_pointer(i1, 9831)), i2, (i0-1), 1);
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  case 30:
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    i0 = eval;
                    OOC_Scanner_Pragma__ParsePragma_Expression(i0, (void*)(OOC_INT32)value, (RT0__Struct)((OOC_INT32)value__tag));
                    OOC_Scanner_Pragma__ParsePragma_CheckSym(22);
                    goto l30;
                  case 33:
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    i0 = (OOC_INT32)value__tag;
                    i1 = eval;
                    OOC_Scanner_Pragma__ParsePragma_Expression(i1, (void*)(OOC_INT32)value, (RT0__Struct)i0);
                    OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i1, (void*)(OOC_INT32)value, (RT0__Struct)i0);
                    i0 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
                    i0 = (OOC_INT32)Config_Value_Boolean__New((!i0));
                    *(OOC_INT32*)(OOC_INT32)value = i0;
                    goto l30;
                  default:
                    OOC_Scanner_Pragma__ParsePragma_Err(9, (OOC_Scanner_Builder_BasicList__Symbol)i0);
                    OOC_Scanner_Pragma__ParsePragma_NextSym();
                    goto l30;
                  }
l30:
                  return;
                  ;
                }


              i0 = eval;
              i1 = (OOC_INT32)value__tag;
              OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term_Factor(i0, (void*)(OOC_INT32)value, (RT0__Struct)i1);
              i0 = (OOC_INT32)sym;
              i0 = *(OOC_INT8*)((_check_pointer(i0, 10600))+4);
              i0 = i0==5;
              if (!i0) goto l20;
              i0 = (OOC_INT32)value+4;
              i2 = (OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value;
l3_loop:
              i3 = eval;
              OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i3, (void*)(OOC_INT32)value, (RT0__Struct)i1);
              i4 = (OOC_INT32)sym;
              *(OOC_INT32*)i0 = i4;
              OOC_Scanner_Pragma__ParsePragma_NextSym();
              if (i3) goto l6;
              i3=OOC_FALSE;
              goto l7;
l6:
              i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
              
l7:
              OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term_Factor(i3, (void*)(OOC_INT32)&right, (RT0__Struct)i2);
              i3 = eval;
              if (i3) goto l10;
              i3=OOC_FALSE;
              goto l11;
l10:
              i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
              
l11:
              OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i3, (void*)(OOC_INT32)&right, (RT0__Struct)i2);
              i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
              if (i3) goto l14;
              i3=OOC_FALSE;
              goto l15;
l14:
              i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&right);
              
l15:
              i3 = (OOC_INT32)Config_Value_Boolean__New(i3);
              *(OOC_INT32*)(OOC_INT32)value = i3;
              i3 = (OOC_INT32)sym;
              i3 = *(OOC_INT8*)((_check_pointer(i3, 10600))+4);
              i3 = i3==5;
              if (i3) goto l3_loop;
l20:
              return;
              ;
            }


          i0 = eval;
          i1 = (OOC_INT32)value__tag;
          OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term(i0, (void*)(OOC_INT32)value, (RT0__Struct)i1);
          i0 = (OOC_INT32)sym;
          i0 = *(OOC_INT8*)((_check_pointer(i0, 11000))+4);
          i0 = i0==8;
          if (!i0) goto l20;
          i0 = (OOC_INT32)value+4;
          i2 = (OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value;
l3_loop:
          i3 = eval;
          OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i3, (void*)(OOC_INT32)value, (RT0__Struct)i1);
          i4 = (OOC_INT32)sym;
          *(OOC_INT32*)i0 = i4;
          OOC_Scanner_Pragma__ParsePragma_NextSym();
          if (i3) goto l6;
          i3=OOC_FALSE;
          goto l7;
l6:
          i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
          i3 = !i3;
          
l7:
          OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr_Term(i3, (void*)(OOC_INT32)&right, (RT0__Struct)i2);
          i3 = eval;
          if (i3) goto l10;
          i3=OOC_FALSE;
          goto l11;
l10:
          i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
          i3 = !i3;
          
l11:
          OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i3, (void*)(OOC_INT32)&right, (RT0__Struct)i2);
          i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
          if (i3) goto l14;
          i3 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&right);
          
          goto l15;
l14:
          i3=OOC_TRUE;
l15:
          i3 = (OOC_INT32)Config_Value_Boolean__New(i3);
          *(OOC_INT32*)(OOC_INT32)value = i3;
          i3 = (OOC_INT32)sym;
          i3 = *(OOC_INT8*)((_check_pointer(i3, 11000))+4);
          i3 = i3==8;
          if (i3) goto l3_loop;
l20:
          return;
          ;
        }


      i0 = eval;
      OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr(i0, (void*)(OOC_INT32)value, (RT0__Struct)((OOC_INT32)value__tag));
      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 11401))+4);
      i1 = 9<=i1;
      if (i1) goto l3;
      i1=OOC_FALSE;
      goto l5;
l3:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 11413))+4);
      i1 = i1<=14;
      
l5:
      if (!i1) goto l70;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 11455))+4);
      op = i1;
      pos = (OOC_Scanner_Builder_BasicList__Symbol)i0;
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      i0 = eval;
      OOC_Scanner_Pragma__ParsePragma_Expression_SimpleExpr(i0, (void*)(OOC_INT32)&right, (RT0__Struct)((OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value));
      i0 = eval;
      i1 = !i0;
      if (i1) goto l9;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = i1==(OOC_INT32)0;
      
      goto l11;
l9:
      i1=OOC_TRUE;
l11:
      if (i1) goto l13;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)&right;
      i1 = i1==(OOC_INT32)0;
      
      goto l14;
l13:
      i1=OOC_TRUE;
l14:
      i2 = (OOC_INT32)pos;
      if (i1) goto l69;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = (OOC_INT32)RT0__TypeOf((void*)i1);
      i3 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)&right;
      i3 = (OOC_INT32)RT0__TypeOf((void*)i3);
      i1 = i1!=i3;
      if (i1) goto l27;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11841)))), &_td_Config_Value_Boolean__ValueDesc);
      if (i1) goto l21;
      i1=OOC_FALSE;
      goto l23;
l21:
      i1 = op;
      i1 = 11<=i1;
      
l23:
      if (i1) goto l25;
      i1=OOC_FALSE;
      goto l29;
l25:
      i1 = op;
      i1 = i1<=14;
      
      goto l29;
l27:
      i1=OOC_TRUE;
l29:
      if (i1) goto l67;
      if (!i0) goto l69;
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)value;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12059)))), &_td_Config_Value_Boolean__ValueDesc);
      if (i1) goto l59;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12380)))), &_td_Config_Value_Integer__ValueDesc);
      if (i1) goto l48;
      i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13133)))), &_td_Config_Value_String__ValueDesc);
      if (!i0) goto l69;
      i0 = (OOC_INT32)OOC_Scanner_Pragma__ParsePragma_GetString((void*)(OOC_INT32)value);
      leftString = (Config_Value__StringPtr)i0;
      i1 = (OOC_INT32)OOC_Scanner_Pragma__ParsePragma_GetString((void*)(OOC_INT32)&right);
      rightString = (Config_Value__StringPtr)i1;
      i3 = op;
      switch (i3) {
      case 9:
        i0 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i0, 13360)),(const void*)(_check_pointer(i1, 13375))))==(OOC_INT32)0));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 10:
        i0 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i0, 13464)),(const void*)(_check_pointer(i1, 13479))))!=(OOC_INT32)0));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 11:
        i0 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i0, 13568)),(const void*)(_check_pointer(i1, 13583))))<(OOC_INT32)0));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 12:
        i0 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i0, 13672)),(const void*)(_check_pointer(i1, 13688))))<=(OOC_INT32)0));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 13:
        i0 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i0, 13777)),(const void*)(_check_pointer(i1, 13792))))>(OOC_INT32)0));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 14:
        i0 = (OOC_INT32)Config_Value_Boolean__New(((
        _cmp8((const void*)(_check_pointer(i0, 13881)),(const void*)(_check_pointer(i1, 13897))))>=(OOC_INT32)0));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      default:
        _failed_case(i3, 13263);
        goto l69;
      }
l48:
      i0 = op;
      switch (i0) {
      case 9:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0==i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 10:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0!=i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 11:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0<i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 12:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0<=i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 13:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0>i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 14:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetInt((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0>=i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      default:
        _failed_case(i0, 12420);
        goto l69;
      }
l59:
      i0 = op;
      switch (i0) {
      case 9:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0==i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      case 10:
        i0 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)value);
        i1 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&right);
        i0 = (OOC_INT32)Config_Value_Boolean__New((i0!=i1));
        *(OOC_INT32*)(OOC_INT32)value = i0;
        goto l69;
      default:
        _failed_case(i0, 12099);
        goto l69;
      }
l67:
      OOC_Scanner_Pragma__ParsePragma_Err(8, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l69:
      *(OOC_INT32*)((OOC_INT32)value+4) = i2;
l70:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_Scanner_Pragma__ParsePragma_BoolExpression(OOC_CHAR8 eval) {
      register OOC_INT32 i0,i1;
      struct OOC_Scanner_Pragma__ParsePragma_Value value;

      i0 = eval;
      i1 = (OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value;
      OOC_Scanner_Pragma__ParsePragma_Expression(i0, (void*)(OOC_INT32)&value, (RT0__Struct)i1);
      OOC_Scanner_Pragma__ParsePragma_CheckBoolean(i0, (void*)(OOC_INT32)&value, (RT0__Struct)i1);
      i0 = OOC_Scanner_Pragma__ParsePragma_GetBool((void*)(OOC_INT32)&value);
      return i0;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_PushCond() {
      register OOC_INT32 i0,i1;
      OOC_Scanner_Pragma__ConditionStack cond;

      i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_Pragma__ConditionStack.baseTypes[0]);
      cond = (OOC_Scanner_Pragma__ConditionStack)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+8);
      *(OOC_INT32*)(_check_pointer(i0, 14373)) = i1;
      i1 = (OOC_INT32)sym;
      *(OOC_INT32*)((_check_pointer(i0, 14411))+4) = i1;
      i1 = *(OOC_UINT8*)((OOC_INT32)state+12);
      *(OOC_UINT8*)((_check_pointer(i0, 14437))+8) = (!i1);
      *(OOC_UINT8*)((_check_pointer(i0, 14482))+9) = OOC_FALSE;
      *(OOC_UINT8*)((_check_pointer(i0, 14514))+10) = OOC_FALSE;
      *(OOC_INT32*)((OOC_INT32)state+8) = i0;
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_PopCond() {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14663));
      *(OOC_INT32*)((OOC_INT32)state+8) = i0;
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_CheckForIf(OOC_CHAR8 noElse) {
      register OOC_INT32 i0;

      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+8);
      i0 = i0==(OOC_INT32)0;
      if (i0) goto l10;
      i0 = noElse;
      if (i0) goto l5;
      i0=OOC_FALSE;
      goto l7;
l5:
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+8);
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 14988))+10);
      
l7:
      if (!i0) goto l11;
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_Err(13, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      OOC_Scanner_Pragma__ParsePragma_PushCond();
      goto l11;
l10:
      i0 = (OOC_INT32)sym;
      OOC_Scanner_Pragma__ParsePragma_Err(11, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      OOC_Scanner_Pragma__ParsePragma_PushCond();
l11:
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__ParsePragma_Assignment(OOC_CHAR8 define, OOC_CHAR8 eval) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      Config_Value__Value varValue;
      OOC_Scanner_Builder_BasicList__Symbol pos;
      OOC_Scanner_Builder_BasicList__Symbol name;
      struct OOC_Scanner_Pragma__ParsePragma_Value value;

      i0 = (OOC_INT32)sym;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 15361))+4);
      i1 = i1==43;
      if (i1) goto l3;
      OOC_Scanner_Pragma__ParsePragma_Err(5, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l45;
l3:
      i1 = eval;
      if (i1) goto l6;
      OOC_Scanner_Pragma__ParsePragma_CheckName((OOC_Scanner_Builder_BasicList__Symbol)i0);
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      OOC_Scanner_Pragma__ParsePragma_CheckSym(34);
      OOC_Scanner_Pragma__ParsePragma_Expression(i1, (void*)(OOC_INT32)&value, (RT0__Struct)((OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value));
      goto l45;
l6:
      i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+36);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15467))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15467))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+36);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 15472)), (OOC_INT32)0);
      i0 = *(OOC_INT32*)((_check_pointer(i0, 15478))+16);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15452)))), OOC_Config_Pragmas__HistoryDesc_GetValue)),OOC_Config_Pragmas__HistoryDesc_GetValue)((OOC_Config_Pragmas__History)i5, (void*)(_check_pointer(i3, 15472)), i4, i0);
      varValue = (Config_Value__Value)i0;
      i2 = (OOC_INT32)sym;
      pos = (OOC_Scanner_Builder_BasicList__Symbol)i2;
      OOC_Scanner_Pragma__ParsePragma_CheckName((OOC_Scanner_Builder_BasicList__Symbol)i2);
      i2 = (OOC_INT32)sym;
      name = (OOC_Scanner_Builder_BasicList__Symbol)i2;
      i3 = i0==(OOC_INT32)0;
      if (i3) goto l9;
      i4=OOC_FALSE;
      goto l11;
l9:
      i4 = define;
      i4 = !i4;
      
l11:
      if (i4) goto l20;
      i4 = i0!=(OOC_INT32)0;
      if (i4) goto l15;
      i4=OOC_FALSE;
      goto l17;
l15:
      i4 = define;
      
l17:
      if (!i4) goto l21;
      OOC_Scanner_Pragma__ParsePragma_Err(14, (OOC_Scanner_Builder_BasicList__Symbol)i2);
      goto l21;
l20:
      OOC_Scanner_Pragma__ParsePragma_Err(7, (OOC_Scanner_Builder_BasicList__Symbol)i2);
l21:
      OOC_Scanner_Pragma__ParsePragma_NextSym();
      OOC_Scanner_Pragma__ParsePragma_CheckSym(34);
      OOC_Scanner_Pragma__ParsePragma_Expression(i1, (void*)(OOC_INT32)&value, (RT0__Struct)((OOC_INT32)&_td_OOC_Scanner_Pragma__ParsePragma_Value));
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)&value;
      i4 = i1!=(OOC_INT32)0;
      if (!i4) goto l45;
l24:
      if (i3) goto l41;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16062)))), &_td_Config_Value_Boolean__ValueDesc);
      if (i3) goto l36;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16171)))), &_td_Config_Value_Integer__ValueDesc);
      if (i3) goto l34;
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16280)))), &_td_Config_Value_String__ValueDesc);
      if (i3) goto l32;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16270)))), 16270);
      goto l37;
l32:
      err = (!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16341)))), &_td_Config_Value_String__ValueDesc)));
      goto l37;
l34:
      err = (!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16233)))), &_td_Config_Value_Integer__ValueDesc)));
      goto l37;
l36:
      err = (!(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16124)))), &_td_Config_Value_Boolean__ValueDesc)));
l37:
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+36);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16434))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16434))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+36);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 16446))+16);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 16439)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16418)))), OOC_Config_Pragmas__HistoryDesc_SetValue)),OOC_Config_Pragmas__HistoryDesc_SetValue)((OOC_Config_Pragmas__History)i5, (void*)(_check_pointer(i3, 16439)), i4, i2, (Config_Value__Value)i1);
      i0 = err;
      if (!i0) goto l45;
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)&value+4);
      OOC_Scanner_Pragma__ParsePragma_Err(15, (OOC_Scanner_Builder_BasicList__Symbol)i0);
      goto l45;
l41:
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+36);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15985))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 15985))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+36);
      i2 = *(OOC_INT32*)((_check_pointer(i2, 15997))+16);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 15990)), (OOC_INT32)0);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15969)))), OOC_Config_Pragmas__HistoryDesc_SetValue)),OOC_Config_Pragmas__HistoryDesc_SetValue)((OOC_Config_Pragmas__History)i5, (void*)(_check_pointer(i3, 15990)), i4, i2, (Config_Value__Value)i1);
l45:
      return;
      ;
    }


  lastError = (Msg__Msg)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+16);
  prevSym = (OOC_Scanner_Builder_BasicList__Symbol)(OOC_INT32)0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17050))+8);
  sym = (OOC_Scanner_Builder_BasicList__Symbol)i0;
  i0 = (OOC_INT32)state+8;
  i1 = (OOC_INT32)state+8;
  i2 = (OOC_INT32)state+12;
  i3 = (OOC_INT32)state+8;
  i4 = (OOC_INT32)state+8;
  i5 = (OOC_INT32)state+12;
  i6 = (OOC_INT32)state+8;
  i7 = (OOC_INT32)state+8;
  i8 = (OOC_INT32)state+8;
  i9 = (OOC_INT32)state+12;
  i10 = (OOC_INT32)state+8;
  i11 = (OOC_INT32)state+12;
  i12 = (OOC_INT32)state+12;
  i13 = (OOC_INT32)state+12;
  i14 = (OOC_INT32)state+36;
  i15 = (OOC_INT32)state+36;
  i16 = (OOC_INT32)state+12;
  i17 = (OOC_INT32)state+36;
  i18 = (OOC_INT32)state+36;
  i19 = (OOC_INT32)state+36;
  i20 = (OOC_INT32)state+12;
l1_loop:
  i21 = (OOC_INT32)sym;
  i22 = *(OOC_INT8*)((_check_pointer(i21, 17092))+4);
  i22 = i22==50;
  if (i22) goto l4;
  i22 = *(OOC_INT8*)((_check_pointer(i21, 17133))+4);
  i22 = i22==48;
  
  goto l6;
l4:
  i22=OOC_TRUE;
l6:
  if (i22) goto l8;
  i22 = *(OOC_INT8*)((_check_pointer(i21, 17177))+4);
  i22 = i22==47;
  
  goto l9;
l8:
  i22=OOC_TRUE;
l9:
  nested = i22;
  i22 = *(OOC_INT8*)((_check_pointer(i21, 17211))+4);
  i22 = i22==50;
  if (i22) goto l12;
  i22 = *(OOC_INT8*)((_check_pointer(i21, 17236))+4);
  i22 = i22==48;
  
  goto l14;
l12:
  i22=OOC_TRUE;
l14:
  if (i22) goto l65;
  i22 = *(OOC_INT8*)((_check_pointer(i21, 17864))+4);
  i22 = i22==47;
  if (i22) goto l59;
  i22 = *(OOC_INT8*)((_check_pointer(i21, 18112))+4);
  i22 = i22==46;
  if (i22) goto l57;
  i22 = *(OOC_INT8*)((_check_pointer(i21, 18299))+4);
  i22 = i22==43;
  if (i22) goto l22;
  i22=OOC_FALSE;
  goto l24;
l22:
  i22 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i21, 18326))+8);
  i22 = (
  _cmp8((const void*)(_check_pointer(i22, 18331)),(const void*)"DEFINE"))==(OOC_INT32)0;
  
l24:
  if (i22) goto l55;
  i22 = *(OOC_INT8*)((_check_pointer(i21, 18426))+4);
  i22 = i22==43;
  if (i22) goto l28;
  i22=OOC_FALSE;
  goto l30;
l28:
  i22 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i21, 18453))+8);
  i22 = (
  _cmp8((const void*)(_check_pointer(i22, 18458)),(const void*)"PUSH"))==(OOC_INT32)0;
  
l30:
  if (i22) goto l50;
  i22 = *(OOC_INT8*)((_check_pointer(i21, 18591))+4);
  i22 = i22==43;
  if (i22) goto l34;
  i22=OOC_FALSE;
  goto l36;
l34:
  i22 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i21, 18618))+8);
  i22 = (
  _cmp8((const void*)(_check_pointer(i22, 18623)),(const void*)"POP"))==(OOC_INT32)0;
  
l36:
  if (i22) goto l41;
  i21 = *(OOC_INT8*)((_check_pointer(i21, 18891))+4);
  i21 = i21==43;
  if (!i21) goto l78;
  i21 = *(OOC_UINT8*)i20;
  OOC_Scanner_Pragma__ParsePragma_Assignment(OOC_FALSE, i21);
  goto l78;
l41:
  i22 = *(OOC_UINT8*)i16;
  if (!i22) goto l48;
  i22 = (OOC_INT32)*(OOC_INT32*)i17;
  i22 = *(OOC_INT32*)((_check_pointer(i22, 18707))+16);
  i22 = i22==0;
  if (i22) goto l46;
  i22 = (OOC_INT32)*(OOC_INT32*)i18;
  i21 = *(OOC_INT32*)((_check_pointer(i21, 18825))+16);
  i23 = (OOC_INT32)*(OOC_INT32*)i19;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i22, 18815)))), OOC_Config_Pragmas__HistoryDesc_Pop)),OOC_Config_Pragmas__HistoryDesc_Pop)((OOC_Config_Pragmas__History)i23, i21);
  goto l48;
l46:
  OOC_Scanner_Pragma__ParsePragma_Err(16, (OOC_Scanner_Builder_BasicList__Symbol)i21);
l48:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l78;
l50:
  i21 = *(OOC_UINT8*)i13;
  if (!i21) goto l53;
  i21 = (OOC_INT32)*(OOC_INT32*)i14;
  i22 = (OOC_INT32)*(OOC_INT32*)i15;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i21, 18539)))), OOC_Config_Pragmas__HistoryDesc_Push)),OOC_Config_Pragmas__HistoryDesc_Push)((OOC_Config_Pragmas__History)i22);
l53:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l78;
l55:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i21 = *(OOC_UINT8*)i12;
  OOC_Scanner_Pragma__ParsePragma_Assignment(OOC_TRUE, i21);
  goto l78;
l57:
  OOC_Scanner_Pragma__ParsePragma_CheckForIf(OOC_FALSE);
  i21 = (OOC_INT32)*(OOC_INT32*)i10;
  i21 = *(OOC_UINT8*)((_check_pointer(i21, 18208))+8);
  *(OOC_UINT8*)i11 = (!i21);
  OOC_Scanner_Pragma__ParsePragma_PopCond();
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l78;
l59:
  OOC_Scanner_Pragma__ParsePragma_CheckForIf(OOC_TRUE);
  i21 = (OOC_INT32)*(OOC_INT32*)i6;
  *(OOC_UINT8*)((_check_pointer(i21, 17940))+10) = OOC_TRUE;
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i21 = (OOC_INT32)*(OOC_INT32*)i7;
  i21 = *(OOC_UINT8*)((_check_pointer(i21, 18024))+8);
  i21 = !i21;
  if (i21) goto l62;
  i21=OOC_FALSE;
  goto l63;
l62:
  i21 = (OOC_INT32)*(OOC_INT32*)i8;
  i21 = *(OOC_UINT8*)((_check_pointer(i21, 18085))+9);
  i21 = !i21;
  
l63:
  *(OOC_UINT8*)i9 = i21;
  goto l78;
l65:
  i21 = *(OOC_INT8*)((_check_pointer(i21, 17277))+4);
  i21 = i21==50;
  if (i21) goto l68;
  OOC_Scanner_Pragma__ParsePragma_CheckForIf(OOC_TRUE);
  goto l69;
l68:
  OOC_Scanner_Pragma__ParsePragma_PushCond();
l69:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  i21 = (OOC_INT32)*(OOC_INT32*)i0;
  i21 = *(OOC_UINT8*)((_check_pointer(i21, 17449))+8);
  if (i21) goto l72;
  i21 = (OOC_INT32)*(OOC_INT32*)i1;
  i21 = *(OOC_UINT8*)((_check_pointer(i21, 17482))+9);
  
  goto l74;
l72:
  i21=OOC_TRUE;
l74:
  if (i21) goto l76;
  i21 = (OOC_INT32)*(OOC_INT32*)i3;
  i22 = OOC_Scanner_Pragma__ParsePragma_BoolExpression(OOC_TRUE);
  *(OOC_UINT8*)((_check_pointer(i21, 17709))+9) = i22;
  i21 = (OOC_INT32)*(OOC_INT32*)i4;
  i21 = *(OOC_UINT8*)((_check_pointer(i21, 17792))+9);
  *(OOC_UINT8*)i5 = i21;
  goto l77;
l76:
  i21 = OOC_Scanner_Pragma__ParsePragma_BoolExpression(OOC_FALSE);
  dummy = i21;
  *(OOC_UINT8*)i2 = OOC_FALSE;
l77:
  OOC_Scanner_Pragma__ParsePragma_CheckSym(26);
l78:
  i21 = (OOC_INT32)sym;
  i22 = *(OOC_INT8*)((_check_pointer(i21, 18985))+4);
  i22 = i22==44;
  if (!i22) goto l80;
  goto l92;
l80:
  i22 = *(OOC_INT8*)((_check_pointer(i21, 19047))+4);
  i22 = i22!=46;
  if (i22) goto l83;
  i21=OOC_FALSE;
  goto l89;
l83:
  i21 = *(OOC_INT8*)((_check_pointer(i21, 19085))+4);
  i21 = i21==72;
  if (i21) goto l86;
  i21 = nested;
  i21 = !i21;
  
  goto l89;
l86:
  i21=OOC_TRUE;
l89:
  if (!i21) goto l1_loop;
  goto l94;
l92:
  OOC_Scanner_Pragma__ParsePragma_NextSym();
  goto l1_loop;
l94:
  OOC_Scanner_Pragma__ParsePragma_CheckSym(72);
  i0 = *(OOC_UINT8*)((OOC_INT32)state+12);
  if (i0) goto l97;
  return 2;
  goto l98;
l97:
  return 0;
l98:
  _failed_function(5292); return 0;
  ;
}

void OOC_Scanner_Pragma__AddSymbol(struct OOC_Scanner_Pragma__State *state, RT0__Struct state__tag, OOC_INT8 *inputMode, OOC_INT8 id, OOC_INT32 cstart, OOC_INT32 cend, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Msg__Msg lastError;
  auto void OOC_Scanner_Pragma__AddSymbol_Err(OOC_INT32 code);
  auto void OOC_Scanner_Pragma__AddSymbol_ErrSym(OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym);
  auto void OOC_Scanner_Pragma__AddSymbol_EndOfPragma();
  auto void OOC_Scanner_Pragma__AddSymbol_EndOfFile();
    
    void OOC_Scanner_Pragma__AddSymbol_Err(OOC_INT32 code) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_Scanner_Pragma__pragmaContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 19692))+8);
      i2 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19649)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, (i2+i1));
      i0 = (OOC_INT32)lastError;
      i1 = line;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19726)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = column;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 19772)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19826))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19826))+20);
      i2 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19835)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i2);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__AddSymbol_ErrSym(OOC_INT32 code, OOC_Scanner_Builder_BasicList__Symbol sym) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)OOC_Scanner_Pragma__pragmaContext;
      i1 = code;
      i0 = (OOC_INT32)OOC_Error__New((OOC_Error__Context)i0, i1);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT32)sym;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 20037))+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20011)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i2);
      i0 = (OOC_INT32)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 20087))+20);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20060)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 20140))+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20111)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      i0 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20170))+20);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20170))+20);
      i2 = (OOC_INT32)lastError;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20179)))), OOC_Error__ListDesc_Append)),OOC_Error__ListDesc_Append)((OOC_Error__List)i0, (Msg__Msg)i2);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__AddSymbol_EndOfPragma() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;

      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i1 = *(OOC_INT32*)((OOC_INT32)state+32);
      i2 = *(OOC_INT32*)((OOC_INT32)state+28);
      i3 = *(OOC_INT32*)((OOC_INT32)state+20);
      i4 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i5 = cend;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20274)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i4, 76, i3, i5, i2, i1);
      return;
      ;
    }

    
    void OOC_Scanner_Pragma__AddSymbol_EndOfFile() {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

      OOC_Scanner_Pragma__AddSymbol_Err(2);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((OOC_INT32)state+24);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20501)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "pos", 4, i1);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((OOC_INT32)state+28);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20560)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "line", 5, i1);
      i0 = (OOC_INT32)lastError;
      i1 = *(OOC_INT32*)((OOC_INT32)state+32);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20618)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, "column", 7, i1);
      OOC_Scanner_Pragma__AddSymbol_EndOfPragma();
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i2 = id;
      i3 = cstart;
      i4 = cend;
      i5 = line;
      i6 = column;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20704)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i1, i2, i3, i4, i5, i6);
      return;
      ;
    }


  i0 = *inputMode;
  switch (i0) {
  case 0:
    i0 = id;
    switch (i0) {
    case 71:
      i0 = cstart;
      *inputMode = 1;
      *(OOC_INT32*)((OOC_INT32)state+20) = i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(OOC_INT32)state;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 20986))+8);
      *(OOC_INT32*)((OOC_INT32)state+24) = (i0+i1);
      i0 = line;
      *(OOC_INT32*)((OOC_INT32)state+28) = i0;
      i0 = column;
      *(OOC_INT32*)((OOC_INT32)state+32) = i0;
      goto l29;
    case 69:
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+8);
      i0 = i0!=(OOC_INT32)0;
      if (!i0) goto l8;
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+8);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 21190))+4);
      OOC_Scanner_Pragma__AddSymbol_ErrSym(12, (OOC_Scanner_Builder_BasicList__Symbol)i0);
l8:
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+4);
      i2 = cstart;
      i3 = cend;
      i4 = line;
      i5 = column;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21234)))), OOC_Scanner_Builder__BuilderDesc_AddSymbol)),OOC_Scanner_Builder__BuilderDesc_AddSymbol)((OOC_Scanner_Builder__Builder)i1, 69, i2, i3, i4, i5);
      goto l29;
    default:
      _failed_case(i0, 20824);
      goto l29;
    }
    /* goto: unreachable */
  case 1:
    i0 = id;
    switch (i0) {
    case 71:
      OOC_Scanner_Pragma__AddSymbol_Err(1);
      goto l29;
    case 72:
      i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+16);
      i3 = column;
      i4 = line;
      i5 = cend;
      i6 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21451)))), OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol)),OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol)((OOC_Scanner_Builder_BasicList__Builder)i2, i0, i6, i5, i4, i3);
      i0 = OOC_Scanner_Pragma__ParsePragma((void*)(OOC_INT32)state, (RT0__Struct)((OOC_INT32)state__tag));
      *inputMode = i0;
      i0 = i0==0;
      if (!i0) goto l17;
      OOC_Scanner_Pragma__AddSymbol_EndOfPragma();
l17:
      i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+16);
      i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+16);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21636)))), OOC_Scanner_Builder_BasicList__BuilderDesc_Clear)),OOC_Scanner_Builder_BasicList__BuilderDesc_Clear)((OOC_Scanner_Builder_BasicList__Builder)i1);
      goto l29;
    case 69:
      OOC_Scanner_Pragma__AddSymbol_EndOfFile();
      goto l29;
    default:
      i1 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+16);
      i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)state+16);
      i3 = column;
      i4 = line;
      i5 = cend;
      i6 = cstart;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 21758)))), OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol)),OOC_Scanner_Builder_BasicList__BuilderDesc_AddSymbol)((OOC_Scanner_Builder_BasicList__Builder)i2, i0, i6, i5, i4, i3);
      goto l29;
    }
    /* goto: unreachable */
  case 2:
    i0 = id;
    switch (i0) {
    case 71:
      *inputMode = 1;
      goto l29;
    case 72:
      goto l29;
    case 69:
      OOC_Scanner_Pragma__AddSymbol_EndOfFile();
      goto l29;
    default:
      goto l29;
    }
    /* goto: unreachable */
  default:
    _failed_case(i0, 20783);
    goto l29;
  }
l29:
  return;
  ;
}

void OOC_OOC_Scanner_Pragma_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_Pragma__ErrorContext.baseTypes[0]);
  OOC_Scanner_Pragma__pragmaContext = (OOC_Scanner_Pragma__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, "OOC:Scanner:Pragma", 19);
  return;
  ;
}

/* --- */
