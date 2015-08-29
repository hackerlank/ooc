#include <ADT/Dictionary.oh>
typedef OOC_UINT32 ADT_Dictionary__HSet;
static ADT_Dictionary__Dummy ADT_Dictionary__dummy;
#define ADT_Dictionary__minSize 4
#define ADT_Dictionary__maxPoly 28
static OOC_INT32 ADT_Dictionary__polys[29];
static OOC_CHAR8 ADT_Dictionary__IsSet(Object__Object key);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_Dictionary__Entry = { (RT0__Struct[]){&_td_ADT_Dictionary__Entry}, (void*[]){}, NULL, &_mid, "Entry", 12, 0, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary__2652 = { (RT0__Struct[]){&_td_ADT_Dictionary__Entry}, NULL, NULL, &_mid, NULL, 12, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_ADT_Dictionary__Table = { (RT0__Struct[]){&_td_ADT_Dictionary__2652}, NULL, NULL, &_mid, "Table", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary__Item = { (RT0__Struct[]){&_td_ADT_Dictionary__Item}, (void*[]){}, NULL, &_mid, "Item", 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary__2791 = { (RT0__Struct[]){&_td_ADT_Dictionary__Item}, NULL, NULL, &_mid, NULL, 8, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_ADT_Dictionary__ItemArrayPtr = { (RT0__Struct[]){&_td_ADT_Dictionary__2791}, NULL, NULL, &_mid, "ItemArrayPtr", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary__Dictionary = { (RT0__Struct[]){&_td_ADT_Dictionary__DictionaryDesc}, NULL, NULL, &_mid, "Dictionary", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary__DictionaryDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_ADT_Dictionary__DictionaryDesc}, (void*[]){(void*)Object__ObjectDesc_ToString,(void*)ADT_Dictionary__DictionaryDesc_Equals,(void*)ADT_Dictionary__DictionaryDesc_HashCode,(void*)ADT_Dictionary__DictionaryDesc_Store,(void*)ADT_Dictionary__DictionaryDesc_Load,(void*)ADT_Dictionary__DictionaryDesc_INIT,(void*)ADT_Dictionary__DictionaryDesc_Destroy,(void*)ADT_Dictionary__DictionaryDesc_Lookup,(void*)ADT_Dictionary__DictionaryDesc_Insert,(void*)ADT_Dictionary__DictionaryDesc_Resize,(void*)ADT_Dictionary__DictionaryDesc_HasKey,(void*)ADT_Dictionary__DictionaryDesc_Size,(void*)ADT_Dictionary__DictionaryDesc_Get,(void*)ADT_Dictionary__DictionaryDesc_Set,(void*)ADT_Dictionary__DictionaryDesc_Copy,(void*)ADT_Dictionary__DictionaryDesc_Delete,(void*)ADT_Dictionary__DictionaryDesc_Clear,(void*)ADT_Dictionary__DictionaryDesc_Keys,(void*)ADT_Dictionary__DictionaryDesc_Values,(void*)ADT_Dictionary__DictionaryDesc_Items}, NULL, &_mid, "DictionaryDesc", 20, 2, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary__Dummy = { (RT0__Struct[]){&_td_ADT_Dictionary__DummyDesc}, NULL, NULL, &_mid, "Dummy", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary__DummyDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Dictionary__DummyDesc}, (void*[]){(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)ADT_Dictionary__DummyDesc_Destroy}, NULL, &_mid, "DummyDesc", 0, 1, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary__4316 = { (RT0__Struct[]){&RT0__longint}, NULL, NULL, &_mid, NULL, 116, 29, 0, RT0__strArray };
static RT0__StructDesc _td__qtd0 = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td__qtd0}, (void*[]){(void*)Object__ObjectDesc_ToString,(void*)ADT_Dictionary__DictionaryDesc_Equals,(void*)ADT_Dictionary__DictionaryDesc_HashCode,(void*)ADT_Dictionary__DictionaryDesc_Store,(void*)ADT_Dictionary__DictionaryDesc_Load,(void*)ADT_Dictionary__DictionaryDesc_INIT,(void*)ADT_Dictionary__DictionaryDesc_Destroy,(void*)ADT_Dictionary__DictionaryDesc_Lookup,(void*)ADT_Dictionary__DictionaryDesc_Insert,(void*)ADT_Dictionary__DictionaryDesc_Resize,(void*)ADT_Dictionary__DictionaryDesc_HasKey,(void*)ADT_Dictionary__DictionaryDesc_Size,(void*)ADT_Dictionary__DictionaryDesc_Get,(void*)ADT_Dictionary__DictionaryDesc_Set,(void*)ADT_Dictionary__DictionaryDesc_Copy,(void*)ADT_Dictionary__DictionaryDesc_Delete,(void*)ADT_Dictionary__DictionaryDesc_Clear,(void*)ADT_Dictionary__DictionaryDesc_Keys,(void*)ADT_Dictionary__DictionaryDesc_Values,(void*)ADT_Dictionary__DictionaryDesc_Items}, (RT0__Struct[]){&_td_ADT_Dictionary__DictionaryDesc, &_td_Object__Object, &_td_Object__Object, NULL}, &_mid, "ADT:Dictionary.DictionaryDesc(Object.Object,Object.Object)", 20, 2, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd1 = { (RT0__Struct[]){&_td__qtd0}, NULL, (RT0__Struct[]){&_td_ADT_Dictionary__Dictionary, &_td_Object__Object, &_td_Object__Object, NULL}, &_mid, "ADT:Dictionary.Dictionary(Object.Object,Object.Object)", 4, 0, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd2 = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td__qtd2}, (void*[]){(void*)Object__ObjectDesc_ToString,(void*)ADT_Dictionary__DictionaryDesc_Equals,(void*)ADT_Dictionary__DictionaryDesc_HashCode,(void*)ADT_Dictionary__DictionaryDesc_Store,(void*)ADT_Dictionary__DictionaryDesc_Load,(void*)ADT_Dictionary__DictionaryDesc_INIT,(void*)ADT_Dictionary__DictionaryDesc_Destroy,(void*)ADT_Dictionary__DictionaryDesc_Lookup,(void*)ADT_Dictionary__DictionaryDesc_Insert,(void*)ADT_Dictionary__DictionaryDesc_Resize,(void*)ADT_Dictionary__DictionaryDesc_HasKey,(void*)ADT_Dictionary__DictionaryDesc_Size,(void*)ADT_Dictionary__DictionaryDesc_Get,(void*)ADT_Dictionary__DictionaryDesc_Set,(void*)ADT_Dictionary__DictionaryDesc_Copy,(void*)ADT_Dictionary__DictionaryDesc_Delete,(void*)ADT_Dictionary__DictionaryDesc_Clear,(void*)ADT_Dictionary__DictionaryDesc_Keys,(void*)ADT_Dictionary__DictionaryDesc_Values,(void*)ADT_Dictionary__DictionaryDesc_Items}, (RT0__Struct[]){&_td_ADT_Dictionary__DictionaryDesc, &_td_Object__Object, &_td_Object__Object, NULL}, &_mid, "ADT:Dictionary.DictionaryDesc(ADT:Dictionary.K,ADT:Dictionary.V)", 20, 2, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd3 = { (RT0__Struct[]){&_td__qtd2}, NULL, (RT0__Struct[]){&_td_ADT_Dictionary__Dictionary, &_td_Object__Object, &_td_Object__Object, NULL}, &_mid, "ADT:Dictionary.Dictionary(ADT:Dictionary.K,ADT:Dictionary.V)", 4, 0, 0, RT0__strQualType };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:Dictionary", (RT0__Struct[]) { &_td_ADT_Dictionary__Entry, &_td_ADT_Dictionary__Table, &_td_ADT_Dictionary__Item, &_td_ADT_Dictionary__ItemArrayPtr, &_td_ADT_Dictionary__Dictionary, &_td_ADT_Dictionary__DictionaryDesc, &_td_ADT_Dictionary__Dummy, &_td_ADT_Dictionary__DummyDesc, &_td__qtd0, &_td__qtd1, &_td__qtd2, &_td__qtd3, NULL } };

extern void OOC_ADT_Dictionary_init0() {
  RT0__RegisterModule(&_mid);
  OOC_ADT_Dictionary_init();
}

/* --- */
