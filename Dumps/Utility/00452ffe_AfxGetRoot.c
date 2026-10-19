// Address: 0x00452ffe
// Name: AfxGetRoot
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    void __stdcall AfxGetRoot(char const *,class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > > &)
    void __stdcall AfxGetRoot(wchar_t const *,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)
   
   Library: Visual Studio 2005 Release */

void AfxGetRoot(wchar_t *param_1,void *param_2)

{
  wchar_t *pszPath;
  
  pszPath = (wchar_t *)FID_conflict_PrepareWrite(param_2,0x104);
  _memset(pszPath,0,0x104);
  ATL::Checked::tcsncpy_s(pszPath,0x104,param_1,0xffffffff);
  PathStripToRootW(pszPath);
  FUN_00404990(param_2,-1);
  return;
}

