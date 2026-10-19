// Address: 0x0046732b
// Name: AfxWinInit
// Category: MFC_CRT


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    int __stdcall AfxWinInit(struct HINSTANCE__ *,struct HINSTANCE__ *,wchar_t *,int)
   
   Library: Visual Studio 2005 Release */

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,wchar_t *param_3,int param_4)

{
  CWinApp *this;
  UINT UVar1;
  AFX_MODULE_STATE *pAVar2;
  HMODULE hModule;
  
  UVar1 = SetErrorMode(0);
  SetErrorMode(UVar1 | 0x8001);
  pAVar2 = AfxGetModuleState();
  *(HINSTANCE__ **)(pAVar2 + 8) = param_1;
  *(HINSTANCE__ **)(pAVar2 + 0xc) = param_1;
  AFX_MODULE_STATE::CreateActivationContext(pAVar2);
  pAVar2 = AfxGetModuleState();
  this = *(CWinApp **)(pAVar2 + 4);
  if (this != (CWinApp *)0x0) {
    *(wchar_t **)(this + 0x48) = param_3;
    *(int *)(this + 0x4c) = param_4;
    *(HINSTANCE__ **)(this + 0x44) = param_1;
    CWinApp::SetCurrentHandles(this);
  }
  pAVar2 = AfxGetModuleState();
  if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
    AfxInitThread();
  }
  hModule = GetModuleHandleW(L"user32.dll");
  if (hModule != (HMODULE)0x0) {
    _DAT_004ca744 = GetProcAddress(hModule,"NotifyWinEvent");
  }
  return 1;
}

