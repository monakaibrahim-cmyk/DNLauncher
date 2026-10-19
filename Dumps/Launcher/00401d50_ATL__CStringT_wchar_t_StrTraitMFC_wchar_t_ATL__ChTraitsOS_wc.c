// Address: 0x00401d50
// Name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Compare
// Category: Launcher


/* Library Function - Single Match
    public: int __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > >::Compare(wchar_t const *)const 
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Compare
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *this,wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  bool bVar3;
  
  if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  pwVar2 = *(wchar_t **)this;
  while( true ) {
    wVar1 = *pwVar2;
    bVar3 = (ushort)wVar1 < (ushort)*param_1;
    if (wVar1 != *param_1) break;
    if (wVar1 == L'\0') {
      return 0;
    }
    wVar1 = pwVar2[1];
    bVar3 = (ushort)wVar1 < (ushort)param_1[1];
    if (wVar1 != param_1[1]) break;
    pwVar2 = pwVar2 + 2;
    param_1 = param_1 + 2;
    if (wVar1 == L'\0') {
      return 0;
    }
  }
  return (1 - (uint)bVar3) - (uint)(bVar3 != 0);
}

