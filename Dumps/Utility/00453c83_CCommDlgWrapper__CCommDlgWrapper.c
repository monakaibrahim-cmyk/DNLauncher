// Address: 0x00453c83
// Name: CCommDlgWrapper::CCommDlgWrapper
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CCommDlgWrapper::CCommDlgWrapper(void)
   
   Library: Visual Studio 2005 Release */

CCommDlgWrapper * __thiscall CCommDlgWrapper::CCommDlgWrapper(CCommDlgWrapper *this)

{
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x453c8f;
  FUN_004035c0(local_14,L"comdlg32.dll");
  local_8 = 0;
  CDllIsolationWrapperBase::CDllIsolationWrapperBase
            ((CDllIsolationWrapperBase *)this,
             (CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *)local_14);
  FUN_004031b0((undefined4 *)(local_14[0] + -0x10));
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  return this;
}

