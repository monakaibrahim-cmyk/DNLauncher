// Address: 0x0045f66c
// Name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
// Category: Utility


/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   >::Mid(int,int)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  IAtlStringMgr *pIVar3;
  int in_stack_0000000c;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (in_stack_0000000c < 0) {
    in_stack_0000000c = 0;
  }
  iVar1 = *(int *)(*(int *)this + -0xc);
  iVar2 = FUN_00406c90(param_2,in_stack_0000000c);
  if (iVar1 < iVar2) {
    in_stack_0000000c = *(int *)(*(int *)this + -0xc) - param_2;
  }
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + -0xc);
  if (iVar2 < param_2) {
    in_stack_0000000c = 0;
  }
  if ((param_2 == 0) && (in_stack_0000000c == iVar2)) {
    FUN_00403410((void *)param_1,(int *)this);
  }
  else {
    pIVar3 = CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::GetManager
                       ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)this);
    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)param_1,
               (wchar_t *)(iVar1 + param_2 * 2),in_stack_0000000c,pIVar3);
  }
  return param_1;
}

