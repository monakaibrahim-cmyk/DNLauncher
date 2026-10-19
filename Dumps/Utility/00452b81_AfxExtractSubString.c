// Address: 0x00452b81
// Name: AfxExtractSubString
// Category: Utility


/* Library Function - Single Match
    int __stdcall AfxExtractSubString(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &,wchar_t const *,int,wchar_t)
   
   Library: Visual Studio 2005 Release */

int AfxExtractSubString(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
                       wchar_t *param_2,int param_3,wchar_t param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  rsize_t rVar3;
  rsize_t rVar4;
  
  if (param_2 == (wchar_t *)0x0) {
LAB_00452b8c:
    iVar1 = 0;
  }
  else {
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      pwVar2 = _wcschr(param_2,param_4);
      if (pwVar2 == (wchar_t *)0x0) {
        ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)param_1);
        goto LAB_00452b8c;
      }
      param_2 = pwVar2 + 1;
    }
    pwVar2 = _wcschr(param_2,param_4);
    if (pwVar2 == (wchar_t *)0x0) {
      iVar1 = lstrlenW(param_2);
    }
    else {
      iVar1 = (int)pwVar2 - (int)param_2 >> 1;
    }
    rVar3 = iVar1 * 2;
    rVar4 = rVar3;
    pwVar2 = ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength
                       ((CSimpleStringT<wchar_t,0> *)param_1,iVar1);
    FUN_004527b0(pwVar2,rVar3,param_2,rVar4);
    FUN_00404990(param_1,-1);
    iVar1 = 1;
  }
  return iVar1;
}

