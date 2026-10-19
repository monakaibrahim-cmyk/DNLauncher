// Address: 0x0045a428
// Name: CreateDlg
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CWnd::CreateDlg(char const *,class CWnd *)
    protected: int __thiscall CWnd::CreateDlg(wchar_t const *,class CWnd *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

bool __thiscall CreateDlg(void *this,LPCWSTR param_1,int param_2)

{
  HMODULE hModule;
  bool bVar1;
  AFX_MODULE_STATE *pAVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPCDLGTEMPLATEW pDVar3;
  
  pDVar3 = (LPCDLGTEMPLATEW)0x0;
  pAVar2 = AfxGetModuleState();
  hModule = *(HMODULE *)(pAVar2 + 0xc);
  hResInfo = FindResourceW(hModule,param_1,(LPCWSTR)0x5);
  hResData = LoadResource(hModule,hResInfo);
  if (hResData != (HGLOBAL)0x0) {
    pDVar3 = LockResource(hResData);
  }
  bVar1 = FUN_0045a03a(this,pDVar3,param_2,hModule);
  FreeResource(hResData);
  return bVar1;
}

