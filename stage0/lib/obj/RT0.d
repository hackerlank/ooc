#include <RT0.oh>
struct RT0__StructDesc RT0__boolean;
struct RT0__StructDesc RT0__char;
struct RT0__StructDesc RT0__longchar;
struct RT0__StructDesc RT0__ucs4char;
struct RT0__StructDesc RT0__shortint;
struct RT0__StructDesc RT0__integer;
struct RT0__StructDesc RT0__longint;
struct RT0__StructDesc RT0__real;
struct RT0__StructDesc RT0__longreal;
struct RT0__StructDesc RT0__set32;
struct RT0__StructDesc RT0__byte;
struct RT0__StructDesc RT0__ptr;
OOC_INT32 RT0__argc;
OOC_CHAR8 **RT0__argv;
OOC_INT32 RT0__poisonHeap;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_RT0__Name = { (RT0__Struct[]){NULL}, NULL, NULL, &_mid, "Name", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_RT0__Module = { (RT0__Struct[]){&_td_RT0__ModuleDesc}, NULL, NULL, &_mid, "Module", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_RT0__Struct = { (RT0__Struct[]){NULL}, NULL, NULL, &_mid, "Struct", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_RT0__6138 = { (RT0__Struct[]){NULL}, NULL, NULL, &_mid, NULL, 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_RT0__6358 = { (RT0__Struct[]){NULL}, NULL, NULL, &_mid, NULL, 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_RT0__6552 = { (RT0__Struct[]){NULL}, NULL, NULL, &_mid, NULL, 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_RT0__ModuleDesc = { (RT0__Struct[]){&_td_RT0__ModuleDesc}, (void*[]){}, NULL, &_mid, "ModuleDesc", 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_RT0__8329 = { (RT0__Struct[]){NULL}, NULL, NULL, &_mid, NULL, 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_RT0__9009 = { (RT0__Struct[]){NULL}, NULL, NULL, &_mid, NULL, 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_RT0__8935 = { (RT0__Struct[]){NULL}, NULL, NULL, &_mid, NULL, 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_RT0__12001 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_RT0__12207 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, 0, RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"RT0", (RT0__Struct[]) { &_td_RT0__Name, &_td_RT0__Module, &_td_RT0__Struct, &_td_RT0__ModuleDesc, NULL } };

extern void OOC_RT0_init0() {
  OOC_RT0_init();
}

/* --- */
