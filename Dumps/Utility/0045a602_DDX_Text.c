// Address: 0x0045a602
// Name: DDX_Text
// Category: Utility


/* Library Function - Single Match
    void __stdcall DDX_Text(class CDataExchange *,int,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)
   
   Library: Visual Studio 2005 Release */

void DDX_Text(CDataExchange *param_1,int param_2,
             CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_3)

{
  HWND__ *hWnd;
  int iVar1;
  wchar_t *lpString;
  int nMaxCount;
  
  hWnd = CDataExchange::PrepareEditCtrl(param_1,param_2);
  if (*(int *)param_1 == 0) {
    AfxSetWindowText(hWnd,*(wchar_t **)param_3);
  }
  else {
    iVar1 = GetWindowTextLengthW(hWnd);
    nMaxCount = iVar1 + 1;
    lpString = ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength
                         ((CSimpleStringT<wchar_t,0> *)param_3,iVar1);
    GetWindowTextW(hWnd,lpString,nMaxCount);
    FUN_00404990(param_3,-1);
  }
  return;
}

