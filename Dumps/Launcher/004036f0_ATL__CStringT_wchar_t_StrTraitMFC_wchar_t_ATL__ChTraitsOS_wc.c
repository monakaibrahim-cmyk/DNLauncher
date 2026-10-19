// Address: 0x004036f0
// Name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
// Category: Launcher


/* Library Function - Single Match
    public: __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > >::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > >(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> * __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00453ed1();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  *(int *)this = iVar2 + 0x10;
  return this;
}

