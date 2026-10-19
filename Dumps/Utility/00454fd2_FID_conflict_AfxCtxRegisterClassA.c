// Address: 0x00454fd2
// Name: FID_conflict:AfxCtxRegisterClassA
// Category: Utility


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    unsigned short __cdecl AfxCtxRegisterClassA(struct tagWNDCLASSA const *)
    unsigned short __cdecl AfxCtxRegisterClassW(struct tagWNDCLASSW const *)
   
   Library: Visual Studio 2005 Release */

uint __cdecl FID_conflict_AfxCtxRegisterClassA(WNDCLASSW *param_1)

{
  ATOM AVar1;
  AFX_MODULE_STATE *pAVar2;
  eActCtxResult eVar3;
  uint uVar4;
  undefined2 extraout_var;
  ulong *puVar5;
  ulong local_24;
  uint local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004b8848;
  uStack_c = 0x454fde;
  local_24 = 0;
  puVar5 = &local_24;
  pAVar2 = AfxGetModuleState();
  eVar3 = AfxActivateActCtxWrapper(*(void **)(pAVar2 + 0x80),puVar5);
  local_20 = 0;
  if (eVar3 == 0) {
    uVar4 = 0;
  }
  else {
    local_8 = (undefined *)0x0;
    AVar1 = RegisterClassW(param_1);
    local_20 = (uint)AVar1;
    local_8 = (undefined *)0xfffffffe;
    FUN_0045502e();
    uVar4 = CONCAT22(extraout_var,(undefined2)local_20);
  }
  return uVar4;
}

