// Address: 0x004552d3
// Name: AfxCtxLoadLibraryA
// Category: Utility


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    struct HINSTANCE__ * __cdecl AfxCtxLoadLibraryA(char const *)
   
   Library: Visual Studio 2005 Release */

HINSTANCE__ * __cdecl AfxCtxLoadLibraryA(char *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  HMODULE local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004b88e8;
  uStack_c = 0x4552df;
  local_24 = 0;
  puVar3 = &local_24;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  local_20 = (HMODULE)0x0;
  if (eVar2 == 0) {
    local_20 = (HINSTANCE__ *)0x0;
  }
  else {
    local_8 = (undefined *)0x0;
    local_20 = LoadLibraryA(param_1);
    local_8 = (undefined *)0xfffffffe;
    FUN_0045532c();
  }
  return local_20;
}

