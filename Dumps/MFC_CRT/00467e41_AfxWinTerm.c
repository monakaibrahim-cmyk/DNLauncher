// Address: 0x00467e41
// Name: AfxWinTerm
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxWinTerm(void)
   
   Library: Visual Studio 2005 Release */

void AfxWinTerm(void)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  AFX_MODULE_THREAD_STATE *pAVar3;
  int iVar4;
  _AFX_THREAD_STATE *p_Var5;
  
  AfxUnregisterWndClasses();
  pAVar2 = AfxGetModuleState();
  if ((*(int *)(pAVar2 + 4) != 0) &&
     (pcVar1 = *(code **)(*(int *)(pAVar2 + 4) + 0x3c), pcVar1 != (code *)0x0)) {
    (*pcVar1)(1,0);
  }
  pAVar3 = AfxGetModuleThreadState();
  if ((*(int **)(pAVar3 + 0x3c) != (int *)0x0) &&
     (iVar4 = (**(code **)(**(int **)(pAVar3 + 0x3c) + 0x13c))(), iVar4 != 0)) {
    *(undefined4 *)(pAVar3 + 0x3c) = 0;
  }
  p_Var5 = AfxGetThreadState();
  pAVar2 = AfxGetModuleState();
  if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
    if (*(HHOOK *)(p_Var5 + 0x2c) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(p_Var5 + 0x2c));
      *(undefined4 *)(p_Var5 + 0x2c) = 0;
    }
    if (*(HHOOK *)(p_Var5 + 0x28) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(p_Var5 + 0x28));
      *(undefined4 *)(p_Var5 + 0x28) = 0;
    }
  }
  return;
}

