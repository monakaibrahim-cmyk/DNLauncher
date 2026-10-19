// Address: 0x00467cef
// Name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Tokenize
// Category: MFC_CRT


/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   >::Tokenize(wchar_t const *,int &)const 
   
   Library: Visual Studio 2005 Release */

wchar_t * __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Tokenize
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this,wchar_t *param_1
          ,int *param_2)

{
  wchar_t *_Str;
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  IAtlStringMgr *pIVar6;
  int *in_stack_0000000c;
  
  iVar2 = *in_stack_0000000c;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80070057);
  }
  if ((param_2 == (int *)0x0) || ((short)*param_2 == 0)) {
    iVar3 = *(int *)this;
    if (iVar2 < *(int *)(iVar3 + -0xc)) {
      pIVar6 = CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::GetManager
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)this)
      ;
      CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)param_1,
                 (wchar_t *)(iVar3 + *in_stack_0000000c * 2),pIVar6);
      return param_1;
    }
  }
  else {
    iVar3 = *(int *)this;
    _Str = (wchar_t *)(iVar3 + iVar2 * 2);
    pwVar1 = (wchar_t *)(iVar3 + *(int *)(iVar3 + -0xc) * 2);
    if (_Str < pwVar1) {
      sVar4 = _wcsspn(_Str,(wchar_t *)param_2);
      if (_Str + sVar4 < pwVar1) {
        sVar5 = _wcscspn(_Str + sVar4,(wchar_t *)param_2);
        iVar2 = *in_stack_0000000c;
        *in_stack_0000000c = iVar2 + sVar4 + 1 + sVar5;
        Mid(this,(int)param_1,iVar2 + sVar4);
        return param_1;
      }
    }
  }
  *in_stack_0000000c = -1;
  pIVar6 = CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::GetManager
                     ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)this);
  FUN_004031d0(param_1,(int *)pIVar6);
  return param_1;
}

