// Address: 0x0045518d
// Name: FID_conflict:AfxCtxCreateWindowExW
// Category: Utility


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    struct HWND__ * __cdecl AfxCtxCreateWindowExA(unsigned long,char const *,char const *,unsigned
   long,int,int,int,int,struct HWND__ *,struct HMENU__ *,struct HINSTANCE__ *,void *)
    struct HWND__ * __cdecl AfxCtxCreateWindowExW(unsigned long,wchar_t const *,wchar_t const
   *,unsigned long,int,int,int,int,struct HWND__ *,struct HMENU__ *,struct HINSTANCE__ *,void *)
   
   Library: Visual Studio 2005 Release */

HWND __cdecl
FID_conflict_AfxCtxCreateWindowExW
          (DWORD param_1,LPCWSTR param_2,LPCWSTR param_3,DWORD param_4,int param_5,int param_6,
          int param_7,int param_8,HWND param_9,HMENU param_10,HINSTANCE param_11,LPVOID param_12)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  HWND local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004b88a8;
  uStack_c = 0x455199;
  local_24 = 0;
  puVar3 = &local_24;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  local_20 = (HWND)0x0;
  if (eVar2 == 0) {
    local_20 = (HWND)0x0;
  }
  else {
    local_8 = (undefined *)0x0;
    local_20 = CreateWindowExW(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,param_10,param_11,param_12);
    local_8 = (undefined *)0xfffffffe;
    FUN_00455207();
  }
  return local_20;
}

