// Address: 0x004641d1
// Name: AfxProcessWndProcException
// Category: MFC_CRT


/* Library Function - Single Match
    long __stdcall AfxProcessWndProcException(class CException *,struct tagMSG const *)
   
   Library: Visual Studio 2005 Release */

long AfxProcessWndProcException(CException *param_1,tagMSG *param_2)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  long lVar2;
  
  pAVar1 = AfxGetModuleThreadState();
  if (*(int **)(pAVar1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004641df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(**(int **)(pAVar1 + 4) + 0x6c))();
    return lVar2;
  }
  lVar2 = AfxInternalProcessWndProcException(param_1,param_2);
  return lVar2;
}

