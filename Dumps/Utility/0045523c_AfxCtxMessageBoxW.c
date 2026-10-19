// Address: 0x0045523c
// Name: AfxCtxMessageBoxW
// Category: Utility


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __cdecl AfxCtxMessageBoxW(struct HWND__ *,wchar_t const *,wchar_t const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl AfxCtxMessageBoxW(HWND__ *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  int local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004b88c8;
  uStack_c = 0x455248;
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
    local_20 = MessageBoxW(param_1,param_2,param_3,param_4);
    local_8 = (undefined *)0xfffffffe;
    FUN_0045529e();
  }
  return local_20;
}

