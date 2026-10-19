// Address: 0x0045ce7b
// Name: CComCtlWrapper::_ImageList_Destroy
// Category: Utility


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CComCtlWrapper::_ImageList_Destroy(struct _IMAGELIST *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CComCtlWrapper::_ImageList_Destroy(CComCtlWrapper *this,_IMAGELIST *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  ulong *puVar2;
  undefined4 local_2c;
  eActCtxResult local_28;
  ulong local_24;
  int local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004b8fa8;
  uStack_c = 0x45ce87;
  local_24 = 0;
  puVar2 = &local_24;
  pAVar1 = AfxGetModuleState();
  local_28 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar2);
  local_20 = 0;
  if (local_28 == 0) {
    local_20 = 0;
  }
  else {
    local_8 = (undefined *)0x0;
    FID_conflict_GetProcAddress_GetSaveFileNameW(this,&local_2c);
    if (*(code **)(this + 0x1c) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    local_20 = (**(code **)(this + 0x1c))(param_1);
    local_8 = (undefined *)0xfffffffe;
    FUN_0045cef0();
  }
  return local_20;
}

