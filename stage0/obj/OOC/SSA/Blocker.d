#include <OOC/SSA/Blocker.oh>
#include <Object.oh>
#include <Object/BigInt.oh>
#include <ADT/Dictionary/IntValue.oh>
#include <TextRider.oh>
#include <OOC/SSA/DeadCodeElimination.oh>
#include <OOC/SSA/Destore.oh>
static void OOC_SSA_Blocker__InitProxy(OOC_SSA_Blocker__Proxy p, OOC_SSA__Instr instr);
static OOC_SSA_Blocker__Proxy OOC_SSA_Blocker__NewProxy(OOC_SSA__Instr instr);
static void OOC_SSA_Blocker__ClearMarkers(OOC_SSA_Blocker__Region r);
static void OOC_SSA_Blocker__InitRegion(OOC_SSA_Blocker__Region r, OOC_SSA__Instr instr);
static OOC_SSA_Blocker__Region OOC_SSA_Blocker__NewRegion(OOC_SSA__Instr instr);
static void OOC_SSA_Blocker__InitSelect(OOC_SSA_Blocker__Select r, OOC_SSA__Instr instr);
static OOC_SSA_Blocker__Select OOC_SSA_Blocker__NewSelect(OOC_SSA__Instr instr);
static void OOC_SSA_Blocker__InitLoop(OOC_SSA_Blocker__Loop r, OOC_SSA__Instr instr);
static OOC_SSA_Blocker__Loop OOC_SSA_Blocker__NewLoop(OOC_SSA__Instr instr);
static OOC_SSA_Blocker__Proxy OOC_SSA_Blocker__GetProxy(OOC_SSA__Instr instr);
static OOC_CHAR8 OOC_SSA_Blocker__Dominates(OOC_SSA_Blocker__Region dom, OOC_SSA_Blocker__Region child);
static void OOC_SSA_Blocker__WriteBlocks(Channel__Channel c, OOC_SSA__ProcBlock pb, OOC_SSA_Blocker__Region root, ADT_Dictionary__Dictionary marker);
static OOC_CHAR8 OOC_SSA_Blocker__AntiDepViolation(OOC_SSA__ProcBlock pb, OOC_SSA_Blocker__Region root);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SSA_Blocker__Proxy = { (RT0__Struct[]){&_td_OOC_SSA_Blocker__ProxyDesc}, NULL, &_mid, "Proxy", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Blocker__Region = { (RT0__Struct[]){&_td_OOC_SSA_Blocker__RegionDesc}, NULL, &_mid, "Region", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Blocker__Select = { (RT0__Struct[]){&_td_OOC_SSA_Blocker__SelectDesc}, NULL, &_mid, "Select", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Blocker__Loop = { (RT0__Struct[]){&_td_OOC_SSA_Blocker__LoopDesc}, NULL, &_mid, "Loop", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Blocker__ProxyDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA_Blocker__ProxyDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString}, &_mid, "ProxyDesc", 48, 2, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA_Blocker__RegionDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA_Blocker__ProxyDesc,&_td_OOC_SSA_Blocker__RegionDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_SSA_Blocker__RegionDesc_Append,(void*)OOC_SSA_Blocker__RegionDesc_Insert,(void*)OOC_SSA_Blocker__RegionDesc_Remove}, &_mid, "RegionDesc", 60, 3, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA_Blocker__SelectDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA_Blocker__ProxyDesc,&_td_OOC_SSA_Blocker__RegionDesc,&_td_OOC_SSA_Blocker__SelectDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_SSA_Blocker__RegionDesc_Append,(void*)OOC_SSA_Blocker__RegionDesc_Insert,(void*)OOC_SSA_Blocker__RegionDesc_Remove}, &_mid, "SelectDesc", 64, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA_Blocker__5561 = { (RT0__Struct[]){&_td_OOC_SSA_Blocker__Region}, NULL, &_mid, NULL, 4, 1, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA_Blocker__5550 = { (RT0__Struct[]){&_td_OOC_SSA_Blocker__5561}, NULL, &_mid, NULL, 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Blocker__Preceeds = { (RT0__Struct[]){&_td_OOC_SSA_Blocker__PreceedsDesc}, NULL, &_mid, "Preceeds", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Blocker__PreceedsDesc = { (RT0__Struct[]){&_td_OOC_SSA_Blocker__PreceedsDesc}, (void*[]){}, &_mid, "PreceedsDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA_Blocker__LoopDesc = { (RT0__Struct[]){&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA_Blocker__ProxyDesc,&_td_OOC_SSA_Blocker__RegionDesc,&_td_OOC_SSA_Blocker__LoopDesc}, (void*[]){(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Object__ObjectDesc_ToString,(void*)OOC_SSA_Blocker__RegionDesc_Append,(void*)OOC_SSA_Blocker__RegionDesc_Insert,(void*)OOC_SSA_Blocker__RegionDesc_Remove,(void*)OOC_SSA_Blocker__LoopDesc_AppendLoop}, &_mid, "LoopDesc", 80, 4, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA_Blocker__DependenceData = { (RT0__Struct[]){&_td_OOC_SSA_Blocker__DependenceDataDesc}, NULL, &_mid, "DependenceData", 4, -1, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA_Blocker__DependenceDataDesc = { (RT0__Struct[]){&_td_OOC_SSA_Blocker__DependenceDataDesc}, (void*[]){(void*)OOC_SSA_Blocker__DependenceDataDesc_AvailableTo,(void*)OOC_SSA_Blocker__DependenceDataDesc_Conflict,(void*)OOC_SSA_Blocker__DependenceDataDesc_DependsOn}, &_mid, "DependenceDataDesc", 8, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA_Blocker__15917 = { (RT0__Struct[]){&RT0__char}, NULL, &_mid, NULL, 64, 64, RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SSA:Blocker", (RT0__Struct[]) { &_td_OOC_SSA_Blocker__Proxy, &_td_OOC_SSA_Blocker__Region, &_td_OOC_SSA_Blocker__Select, &_td_OOC_SSA_Blocker__Loop, &_td_OOC_SSA_Blocker__ProxyDesc, &_td_OOC_SSA_Blocker__RegionDesc, &_td_OOC_SSA_Blocker__SelectDesc, &_td_OOC_SSA_Blocker__Preceeds, &_td_OOC_SSA_Blocker__PreceedsDesc, &_td_OOC_SSA_Blocker__LoopDesc, &_td_OOC_SSA_Blocker__DependenceData, &_td_OOC_SSA_Blocker__DependenceDataDesc, NULL } };

extern void OOC_OOC_SSA_Blocker_init0() {
  RT0__RegisterModule(&_mid);
  OOC_OOC_SSA_Blocker_init();
}

/* --- */
