// Address: 0x00401d20
// Name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::GetManager
// Category: Launcher


/* Library Function - Single Match
    public: struct ATL::IAtlStringMgr * __thiscall ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> > >::GetManager(void)const 
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

IAtlStringMgr * __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::GetManager
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *this)

{
  IAtlStringMgr *pIVar1;
  int *piVar2;
  
  if (*(int **)(*(int *)this + -0x10) != (int *)0x0) {
    pIVar1 = (IAtlStringMgr *)(**(code **)(**(int **)(*(int *)this + -0x10) + 0x10))();
    if (pIVar1 != (IAtlStringMgr *)0x0) {
      return pIVar1;
    }
  }
  piVar2 = (int *)FUN_00453ed1();
                    /* WARNING: Could not recover jumptable at 0x00401d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IAtlStringMgr *)(**(code **)(*piVar2 + 0x10))();
  return pIVar1;
}

