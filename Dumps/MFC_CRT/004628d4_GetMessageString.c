// Address: 0x004628d4
// Name: GetMessageString
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CFrameWnd::GetMessageString(unsigned int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)const 
    public: virtual void __thiscall COleControl::GetMessageString(unsigned int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)const 
   
   Library: Visual Studio 2005 Release */

void GetMessageString(uint param_1,void *param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  
  pwVar1 = (wchar_t *)FID_conflict_PrepareWrite(param_2,0xff);
  uVar2 = FUN_00452af1(param_1,pwVar1,0x100);
  if (uVar2 != 0) {
    pwVar1 = _wcschr(pwVar1,L'\n');
    if (pwVar1 != (wchar_t *)0x0) {
      *pwVar1 = L'\0';
    }
  }
  FUN_00404990(param_2,-1);
  return;
}

