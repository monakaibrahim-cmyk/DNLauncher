// Address: 0x004567e5
// Name: CComCtlWrapper::_InitCommonControls
// Category: Utility


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CComCtlWrapper::_InitCommonControls(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CComCtlWrapper::_InitCommonControls(CComCtlWrapper *this)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004b89c8;
  uStack_c = 0x4567f1;
  local_20[0] = 0;
  puVar3 = local_20;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  if (eVar2 != 0) {
    local_8 = (undefined *)0x0;
    GetProcAddress_InitCommonControls(this);
    if (*(code **)(this + 0x10) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    (**(code **)(this + 0x10))();
    local_8 = (undefined *)0xfffffffe;
    FUN_00456848();
  }
  return;
}

