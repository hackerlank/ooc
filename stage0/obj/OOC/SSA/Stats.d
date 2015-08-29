#include <OOC/SSA/Stats.oh>
#include <Out.oh>
#include <Strings.oh>
#include <Object.oh>
#include <ADT/ArrayList.oh>
#include <ADT/Dictionary.oh>
#include <OOC/SSA/Opcode.oh>
#define OOC_SSA_Stats__maxOpcode 86
#define OOC_SSA_Stats__subclassCount 12
#define OOC_SSA_Stats__variantCount 1044
typedef struct OOC_SSA_Stats__StatsDesc *OOC_SSA_Stats__Stats;
typedef struct OOC_SSA_Stats__StatsDesc {
  OOC_INT32 count[1044];
} OOC_SSA_Stats__StatsDesc;
static ADT_Dictionary__Dictionary OOC_SSA_Stats__stage;
static ADT_ArrayList__ArrayList OOC_SSA_Stats__labels;
static OOC_SSA_Stats__Stats OOC_SSA_Stats__NewStats();

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SSA_Stats__Stats = { (RT0__Struct[]){&_td_OOC_SSA_Stats__StatsDesc}, NULL, &_mid, "Stats", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Stats__StatsDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_OOC_SSA_Stats__StatsDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString}, &_mid, "StatsDesc", 4176, 1, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA_Stats__329 = { (RT0__Struct[]){&RT0__longint}, NULL, &_mid, NULL, 4176, 1044, RT0__strArray };
RT0__StructDesc _td_OOC_SSA_Stats__1297 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 64, 64, RT0__strArray };
RT0__StructDesc _td_OOC_SSA_Stats__1338 = { (RT0__Struct[]){&_td_OOC_SSA_Stats__Stats}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_Stats__1327 = { (RT0__Struct[]){&_td_OOC_SSA_Stats__1338}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Stats__1376 = { (RT0__Struct[]){&RT0__longint}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_Stats__1365 = { (RT0__Struct[]){&_td_OOC_SSA_Stats__1376}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Stats__1401 = { (RT0__Struct[]){&RT0__longint}, NULL, &_mid, NULL, 4176, 1044, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SSA:Stats", (RT0__Struct[]) { &_td_OOC_SSA_Stats__Stats, &_td_OOC_SSA_Stats__StatsDesc, NULL } };

extern void OOC_OOC_SSA_Stats_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_SSA_Stats_init();
}

static void* _c0;
/* --- */