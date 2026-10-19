// Address: 0x00474f85
// Name: AfxBSTR2CString
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxBSTR2CString(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > *,wchar_t *)
   
   Library: Visual Studio 2005 Release */

void AfxBSTR2CString(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
                    wchar_t *param_2)

{
  UINT UVar1;
  wchar_t *pwVar2;
  
  if (param_1 != (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0) {
    UVar1 = SysStringLen(param_2);
    pwVar2 = ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength
                       ((CSimpleStringT<wchar_t,0> *)param_1,UVar1);
    FUN_004527b0(pwVar2,UVar1 * 2,param_2,UVar1 * 2);
    FUN_00404990(param_1,UVar1);
  }
  return;
}

