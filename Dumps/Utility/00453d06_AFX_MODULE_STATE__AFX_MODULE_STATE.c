// Address: 0x00453d06
// Name: AFX_MODULE_STATE::AFX_MODULE_STATE
// Category: Utility


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall AFX_MODULE_STATE::AFX_MODULE_STATE(int)
   
   Library: Visual Studio 2005 Release */

AFX_MODULE_STATE * __thiscall AFX_MODULE_STATE::AFX_MODULE_STATE(AFX_MODULE_STATE *this,int param_1)

{
  void *pvVar1;
  CComCtlWrapper *this_00;
  undefined4 uVar2;
  CCommDlgWrapper *this_01;
  
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)(this + 0x34));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x28) = 0x20;
  *(undefined4 *)(this + 0x20) = 0x14;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x14] = param_1._0_1_;
  FID_conflict_PrepareWrite
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)(this + 0x34),
             0x1000);
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0x44) = 0x18;
  pvVar1 = FUN_00452728(8);
  *(void **)(this + 0x78) = pvVar1;
  this_00 = CNoTrackObject::operator_new(0x188);
  if (this_00 == (CComCtlWrapper *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CComCtlWrapper::CComCtlWrapper(this_00);
  }
  **(undefined4 **)(this + 0x78) = uVar2;
  this_01 = CNoTrackObject::operator_new(100);
  if (this_01 == (CCommDlgWrapper *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CCommDlgWrapper::CCommDlgWrapper(this_01);
  }
  *(undefined4 *)(*(int *)(this + 0x78) + 4) = uVar2;
  *(undefined4 *)(this + 0x7c) = 1;
  *(undefined4 *)(this + 0x80) = 0;
  return this;
}

