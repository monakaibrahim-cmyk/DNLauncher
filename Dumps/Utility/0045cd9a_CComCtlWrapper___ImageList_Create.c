// Address: 0x0045cd9a
// Name: CComCtlWrapper::_ImageList_Create
// Category: Utility


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: struct _IMAGELIST * __thiscall CComCtlWrapper::_ImageList_Create(int,int,unsigned
   int,int,int)
   
   Library: Visual Studio 2005 Release */

_IMAGELIST * __thiscall
CComCtlWrapper::_ImageList_Create
          (CComCtlWrapper *this,int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  _IMAGELIST *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004b8f88;
  uStack_c = 0x45cda6;
  local_24 = 0;
  puVar3 = &local_24;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  local_20 = (_IMAGELIST *)0x0;
  if (eVar2 == 0) {
    local_20 = (_IMAGELIST *)0x0;
  }
  else {
    local_8 = (undefined *)0x0;
    GetProcAddress_ImageList_Create(this);
    if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    local_20 = (_IMAGELIST *)(**(code **)(this + 0x18))(param_1,param_2,param_3,param_4,param_5);
    local_8 = (undefined *)0xfffffffe;
    FUN_0045ce1b();
  }
  return local_20;
}

