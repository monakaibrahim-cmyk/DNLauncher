// Address: 0x0046459b
// Name: AfxPumpMessage
// Category: MFC_CRT


/* Library Function - Single Match
    int __stdcall AfxPumpMessage(void)
   
   Library: Visual Studio 2005 Release */

int AfxPumpMessage(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  
  pAVar1 = AfxGetModuleThreadState();
  if (*(int **)(pAVar1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004645a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(**(int **)(pAVar1 + 4) + 0x5c))();
    return iVar2;
  }
  iVar2 = AfxInternalPumpMessage();
  return iVar2;
}

