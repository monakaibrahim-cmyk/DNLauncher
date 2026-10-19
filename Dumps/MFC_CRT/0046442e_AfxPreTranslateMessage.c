// Address: 0x0046442e
// Name: AfxPreTranslateMessage
// Category: MFC_CRT


/* Library Function - Single Match
    int __cdecl AfxPreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __cdecl AfxPreTranslateMessage(tagMSG *param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  
  pAVar1 = AfxGetModuleThreadState();
  if (*(int **)(pAVar1 + 4) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(pAVar1 + 4) + 0x58))(param_1);
    return iVar2;
  }
  iVar2 = AfxInternalPreTranslateMessage(param_1);
  return iVar2;
}

