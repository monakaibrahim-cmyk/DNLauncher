// Address: 0x00401a60
// Name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Left
// Category: Launcher


/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> > >
   __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> >
   >::Left(int)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Left
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *this,int param_1)

{
  int iVar1;
  CStringData *pCVar2;
  IAtlStringMgr *pIVar3;
  int *piVar4;
  int in_stack_00000008;
  
  if (in_stack_00000008 < 0) {
    in_stack_00000008 = 0;
  }
  iVar1 = *(int *)this;
  if (*(int *)(iVar1 + -0xc) <= in_stack_00000008) {
    pCVar2 = CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iVar1 + -0x10));
    *(CStringData **)param_1 = pCVar2 + 0x10;
    return param_1;
  }
  if (*(int **)(iVar1 + -0x10) != (int *)0x0) {
    pIVar3 = (IAtlStringMgr *)(**(code **)(**(int **)(iVar1 + -0x10) + 0x10))();
    if (pIVar3 != (IAtlStringMgr *)0x0) goto LAB_00401abb;
  }
  piVar4 = (int *)FUN_00453ed1();
  pIVar3 = (IAtlStringMgr *)(**(code **)(*piVar4 + 0x10))();
LAB_00401abb:
  CSimpleStringT<wchar_t,0>::CSimpleStringT<wchar_t,0>
            ((CSimpleStringT<wchar_t,0> *)param_1,*(wchar_t **)this,in_stack_00000008,pIVar3);
  return param_1;
}

