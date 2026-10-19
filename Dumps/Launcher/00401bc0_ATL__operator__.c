// Address: 0x00401bc0
// Name: ATL::operator==
// Category: Launcher


/* Library Function - Single Match
    bool __cdecl ATL::operator==(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > > const &,wchar_t const *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

bool __cdecl
ATL::operator==(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *param_1,
               wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  bool bVar3;
  
  if (param_2 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  pwVar2 = *(wchar_t **)param_1;
  while( true ) {
    wVar1 = *pwVar2;
    bVar3 = (ushort)wVar1 < (ushort)*param_2;
    if (wVar1 != *param_2) break;
    if (wVar1 == L'\0') {
      return true;
    }
    wVar1 = pwVar2[1];
    bVar3 = (ushort)wVar1 < (ushort)param_2[1];
    if (wVar1 != param_2[1]) break;
    pwVar2 = pwVar2 + 2;
    param_2 = param_2 + 2;
    if (wVar1 == L'\0') {
      return true;
    }
  }
  return 1 - bVar3 == (uint)(bVar3 != 0);
}

