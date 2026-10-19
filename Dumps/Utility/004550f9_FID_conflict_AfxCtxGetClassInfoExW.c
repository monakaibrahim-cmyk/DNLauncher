// Address: 0x004550f9
// Name: FID_conflict:AfxCtxGetClassInfoExW
// Category: Utility


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    int __cdecl AfxCtxGetClassInfoA(struct HINSTANCE__ *,char const *,struct tagWNDCLASSA *)
    int __cdecl AfxCtxGetClassInfoExA(struct HINSTANCE__ *,char const *,struct tagWNDCLASSEXA *)
    int __cdecl AfxCtxGetClassInfoExW(struct HINSTANCE__ *,wchar_t const *,struct tagWNDCLASSEXW *)
    int __cdecl AfxCtxGetClassInfoW(struct HINSTANCE__ *,wchar_t const *,struct tagWNDCLASSW *)
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl
FID_conflict_AfxCtxGetClassInfoExW(HINSTANCE param_1,LPCWSTR param_2,LPWNDCLASSEXW param_3)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  BOOL local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004b8888;
  uStack_c = 0x455105;
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
    local_20 = GetClassInfoExW(param_1,param_2,param_3);
    local_8 = (undefined *)0xfffffffe;
    FUN_00455158();
  }
  return local_20;
}

