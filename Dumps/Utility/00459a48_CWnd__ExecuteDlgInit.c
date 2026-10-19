// Address: 0x00459a48
// Name: CWnd::ExecuteDlgInit
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::ExecuteDlgInit(wchar_t const *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::ExecuteDlgInit(CWnd *this,wchar_t *param_1)

{
  HMODULE hModule;
  AFX_MODULE_STATE *pAVar1;
  HRSRC hResInfo;
  int iVar2;
  LPVOID pvVar3;
  HGLOBAL hResData;
  
  hResData = (HGLOBAL)0x0;
  pvVar3 = (void *)0x0;
  if (param_1 != (wchar_t *)0x0) {
    pAVar1 = AfxGetModuleState();
    hModule = *(HMODULE *)(pAVar1 + 0xc);
    hResInfo = FindResourceW(hModule,param_1,(LPCWSTR)0xf0);
    if (hResInfo != (HRSRC)0x0) {
      hResData = LoadResource(hModule,hResInfo);
      if (hResData == (HGLOBAL)0x0) {
        return 0;
      }
      pvVar3 = LockResource(hResData);
    }
  }
  iVar2 = ExecuteDlgInit(this,pvVar3);
  if ((pvVar3 != (void *)0x0) && (hResData != (HGLOBAL)0x0)) {
    FreeResource(hResData);
  }
  return iVar2;
}

