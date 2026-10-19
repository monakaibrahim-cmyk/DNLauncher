// Address: 0x00459471
// Name: AfxRegisterClass
// Category: Utility


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __stdcall AfxRegisterClass(struct tagWNDCLASSA *)
   
   Library: Visual Studio 2005 Release */

int AfxRegisterClass(tagWNDCLASSA *param_1)

{
  BOOL BVar1;
  uint uVar2;
  AFX_MODULE_STATE *pAVar3;
  tagWNDCLASSW local_3c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x45947d;
  BVar1 = FID_conflict_AfxCtxGetClassInfoW
                    (*(HINSTANCE *)(param_1 + 0x10),*(LPCWSTR *)(param_1 + 0x24),&local_3c);
  if (BVar1 == 0) {
    uVar2 = FID_conflict_AfxCtxRegisterClassA((WNDCLASSW *)param_1);
    if ((short)uVar2 == 0) {
      return 0;
    }
    pAVar3 = AfxGetModuleState();
    if (pAVar3[0x14] != (AFX_MODULE_STATE)0x0) {
      AfxLockGlobals(1);
      local_8 = 0;
      pAVar3 = AfxGetModuleState();
      FUN_004064c0(pAVar3 + 0x34,*(short **)(param_1 + 0x24));
      FUN_00407050(pAVar3 + 0x34,10);
      local_8 = 0xffffffff;
      AfxUnlockGlobals(1);
    }
  }
  return 1;
}

