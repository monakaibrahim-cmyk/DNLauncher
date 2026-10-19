// Address: 0x0045a4b7
// Name: Create
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CDialog::Create(char const *,class CWnd *)
    public: virtual int __thiscall CDialog::Create(wchar_t const *,class CWnd *)
   
   Library: Visual Studio 2005 Release */

int __thiscall Create(void *this,LPCWSTR param_1,CWnd *param_2)

{
  HMODULE hModule;
  AFX_MODULE_STATE *pAVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  int iVar2;
  
  *(LPCWSTR *)((int)this + 0x58) = param_1;
  if ((((uint)param_1 & 0xffff0000) == 0) && (*(int *)((int)this + 0x54) == 0)) {
    *(uint *)((int)this + 0x54) = (uint)param_1 & 0xffff;
  }
  pAVar1 = AfxGetModuleState();
  hModule = *(HMODULE *)(pAVar1 + 0xc);
  hResInfo = FindResourceW(hModule,param_1,(LPCWSTR)0x5);
  hResData = LoadResource(hModule,hResInfo);
  iVar2 = CDialog::CreateIndirect(this,hResData,param_2,hModule);
  FreeResource(hResData);
  return iVar2;
}

