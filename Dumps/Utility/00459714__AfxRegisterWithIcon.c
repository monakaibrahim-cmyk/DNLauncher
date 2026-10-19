// Address: 0x00459714
// Name: _AfxRegisterWithIcon
// Category: Utility


/* Library Function - Single Match
    int __stdcall _AfxRegisterWithIcon(struct tagWNDCLASSA *,char const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int _AfxRegisterWithIcon(tagWNDCLASSA *param_1,char *param_2,uint param_3)

{
  AFX_MODULE_STATE *pAVar1;
  HICON pHVar2;
  int iVar3;
  
  *(char **)(param_1 + 0x24) = param_2;
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadIconW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)(param_3 & 0xffff));
  *(HICON *)(param_1 + 0x14) = pHVar2;
  if (pHVar2 == (HICON)0x0) {
    pHVar2 = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    *(HICON *)(param_1 + 0x14) = pHVar2;
  }
  iVar3 = AfxRegisterClass(param_1);
  return iVar3;
}

