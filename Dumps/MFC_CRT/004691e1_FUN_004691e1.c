// Address: 0x004691e1
// Name: FUN_004691e1
// Category: MFC_CRT


void FUN_004691e1(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleThreadState();
  *(int *)(pAVar1 + 0x10) = *(int *)(pAVar1 + 0x10) + 1;
  return;
}

