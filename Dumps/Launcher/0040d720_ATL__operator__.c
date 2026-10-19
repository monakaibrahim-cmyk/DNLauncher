// Address: 0x0040d720
// Name: ATL::operator==
// Category: Launcher


/* Library Function - Single Match
    bool __cdecl ATL::operator==(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > > const &,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > > const &)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

bool __cdecl
ATL::operator==(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *param_1,
               CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  bool bVar4;
  
  puVar3 = *(ushort **)param_2;
  if (puVar3 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  puVar2 = *(ushort **)param_1;
  while( true ) {
    uVar1 = *puVar2;
    bVar4 = uVar1 < *puVar3;
    if (uVar1 != *puVar3) break;
    if (uVar1 == 0) {
      return true;
    }
    uVar1 = puVar2[1];
    bVar4 = uVar1 < puVar3[1];
    if (uVar1 != puVar3[1]) break;
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    if (uVar1 == 0) {
      return true;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

