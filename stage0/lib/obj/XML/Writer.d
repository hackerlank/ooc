#include <XML/Writer.oh>
#include <Ascii.oh>
#include <Strings.oh>
#include <LongStrings.oh>
#include <IntStr.oh>
#include <RealStr.oh>
static XML_Writer__String XML_Writer__GetString(const OOC_CHAR16 str[], OOC_LEN str_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_Writer__1479 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__String = { (RT0__Struct[]){&_td_XML_Writer__1479}, NULL, NULL, &_mid, "String", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Writer__1542 = { (RT0__Struct[]){&_td_XML_Writer__1542}, (void*[]){}, NULL, &_mid, NULL, 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Writer__1518 = { (RT0__Struct[]){&_td_XML_Writer__1542}, NULL, NULL, &_mid, NULL, 8, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__Elements = { (RT0__Struct[]){&_td_XML_Writer__1518}, NULL, NULL, &_mid, "Elements", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Writer__Writer = { (RT0__Struct[]){&_td_XML_Writer__WriterDesc}, NULL, NULL, &_mid, "Writer", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Writer__WriterDesc = { (RT0__Struct[]){&_td_XML_UnicodeBuffer__OutputDesc,&_td_XML_Writer__WriterDesc}, (void*[]){(void*)XML_UnicodeBuffer__OutputDesc_Write16I,(void*)XML_UnicodeBuffer__OutputDesc_Write8I,(void*)XML_UnicodeBuffer__OutputDesc_Write16,(void*)XML_UnicodeBuffer__OutputDesc_Write8,(void*)XML_UnicodeBuffer__OutputDesc_Flush,(void*)XML_Writer__WriterDesc_SetBaseURI,(void*)XML_Writer__WriterDesc_SetEmptyElementHTML,(void*)XML_Writer__WriterDesc_WriteTextDecl,(void*)XML_Writer__WriterDesc_NewLine,(void*)XML_Writer__WriterDesc_CloseStartTag,(void*)XML_Writer__WriterDesc_WriteI,(void*)XML_Writer__WriterDesc_WriteLatin1I,(void*)XML_Writer__WriterDesc_Write,(void*)XML_Writer__WriterDesc_WriteObject,(void*)XML_Writer__WriterDesc_WriteLatin1,(void*)XML_Writer__WriterDesc_WriteURI,(void*)XML_Writer__WriterDesc_WriteLInt,(void*)XML_Writer__WriterDesc_WriteRealFix,(void*)XML_Writer__WriterDesc_StartTag,(void*)XML_Writer__WriterDesc_StartTagLatin1,(void*)XML_Writer__WriterDesc_EmptyTag,(void*)XML_Writer__WriterDesc_EmptyTagLatin1,(void*)XML_Writer__WriterDesc_AttrString,(void*)XML_Writer__WriterDesc_AttrStringLatin1,(void*)XML_Writer__WriterDesc_AttrObject,(void*)XML_Writer__WriterDesc_AttrInt,(void*)XML_Writer__WriterDesc_AttrBool,(void*)XML_Writer__WriterDesc_AttrURI,(void*)XML_Writer__WriterDesc_EndTag,(void*)XML_Writer__WriterDesc_EndOfText}, NULL, &_mid, "WriterDesc", 72, 1, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Writer__1898 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 3, 3, 0, RT0__strArray };
RT0__StructDesc _td_XML_Writer__3649 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__3685 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 256, 256, 0, RT0__strArray };
RT0__StructDesc _td_XML_Writer__4798 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__5358 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__5953 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__6390 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__6750 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 32, 32, 0, RT0__strArray };
RT0__StructDesc _td_XML_Writer__6930 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 128, 128, 0, RT0__strArray };
RT0__StructDesc _td_XML_Writer__7084 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__7277 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__8141 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__8237 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2048, 1024, 0, RT0__strArray };
RT0__StructDesc _td_XML_Writer__8400 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__8785 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__8819 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2048, 1024, 0, RT0__strArray };
RT0__StructDesc _td_XML_Writer__8987 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__9734 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__9806 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__10548 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__10903 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__10950 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 32, 32, 0, RT0__strArray };
RT0__StructDesc _td_XML_Writer__11110 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Writer__11328 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, 0, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:Writer", (RT0__Struct[]) { &_td_XML_Writer__String, &_td_XML_Writer__Elements, &_td_XML_Writer__Writer, &_td_XML_Writer__WriterDesc, NULL } };

extern void OOC_XML_Writer_init0() {
  RT0__RegisterModule(&_mid);
  OOC_XML_Writer_init();
}

/* --- */
