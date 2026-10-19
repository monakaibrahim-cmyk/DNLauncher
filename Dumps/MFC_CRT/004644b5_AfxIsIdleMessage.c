// Address: 0x004644b5
// Name: AfxIsIdleMessage
// Category: MFC_CRT


/* Library Function - Single Match
    int __cdecl AfxIsIdleMessage(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __cdecl AfxIsIdleMessage(tagMSG *param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  
  pAVar1 = AfxGetModuleThreadState();
  if (*(int **)(pAVar1 + 4) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(pAVar1 + 4) + 100))(param_1);
    return iVar2;
  }
  iVar2 = AfxInternalIsIdleMessage(param_1);
  return iVar2;
}

