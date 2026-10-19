// Address: 0x00455065
// Name: FID_conflict:AfxCtxGetClassInfoW
// Category: Utility


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    int __cdecl AfxCtxGetClassInfoA(struct HINSTANCE__ *,char const *,struct tagWNDCLASSA *)
    int __cdecl AfxCtxGetClassInfoW(struct HINSTANCE__ *,wchar_t const *,struct tagWNDCLASSW *)
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl FID_conflict_AfxCtxGetClassInfoW(HINSTANCE param_1,LPCWSTR param_2,LPWNDCLASSW param_3)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  BOOL local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004b8868;
  uStack_c = 0x455071;
  local_24 = 0;
  puVar3 = &local_24;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  local_20 = 0;
  if (eVar2 == 0) {
    local_20 = 0;
  }
  else {
    local_8 = (undefined *)0x0;
    local_20 = GetClassInfoW(param_1,param_2,param_3);
    local_8 = (undefined *)0xfffffffe;
    FUN_004550c4();
  }
  return local_20;
}

