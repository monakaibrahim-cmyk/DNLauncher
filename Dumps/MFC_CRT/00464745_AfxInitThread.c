// Address: 0x00464745
// Name: AfxInitThread
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxInitThread(void)
   
   Library: Visual Studio 2005 Release */

void AfxInitThread(void)

{
  AFX_MODULE_STATE *pAVar1;
  _AFX_THREAD_STATE *p_Var2;
  DWORD dwThreadId;
  HHOOK pHVar3;
  
  pAVar1 = AfxGetModuleState();
  if (pAVar1[0x14] == (AFX_MODULE_STATE)0x0) {
    p_Var2 = AfxGetThreadState();
    dwThreadId = GetCurrentThreadId();
    pHVar3 = SetWindowsHookExW(-1,(HOOKPROC)&lpfn_004645b1,(HINSTANCE)0x0,dwThreadId);
    *(HHOOK *)(p_Var2 + 0x2c) = pHVar3;
  }
  return;
}

