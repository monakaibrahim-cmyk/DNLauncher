// Address: 0x00456883
// Name: CComCtlWrapper::_InitCommonControlsEx
// Category: Utility


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CComCtlWrapper::_InitCommonControlsEx(struct tagINITCOMMONCONTROLSEX *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CComCtlWrapper::_InitCommonControlsEx(CComCtlWrapper *this,tagINITCOMMONCONTROLSEX *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  int local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004b89e8;
  uStack_c = 0x45688f;
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
    GetProcAddress_InitCommonControlsEx(this);
    if (*(code **)(this + 0x14) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    local_20 = (**(code **)(this + 0x14))(param_1);
    local_8 = (undefined *)0xfffffffe;
    FUN_004568f8();
  }
  return local_20;
}

