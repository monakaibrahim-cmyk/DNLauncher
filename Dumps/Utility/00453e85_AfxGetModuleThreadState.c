// Address: 0x00453e85
// Name: AfxGetModuleThreadState
// Category: Utility


/* Library Function - Single Match
    class AFX_MODULE_THREAD_STATE * __stdcall AfxGetModuleThreadState(void)
   
   Library: Visual Studio 2005 Release */

AFX_MODULE_THREAD_STATE * AfxGetModuleThreadState(void)

{
  AFX_MODULE_STATE *pAVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  pAVar1 = AfxGetModuleState();
  pAVar2 = CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData
                     ((CThreadLocal<AFX_MODULE_THREAD_STATE> *)(pAVar1 + 0x74));
  if (pAVar2 == (AFX_MODULE_THREAD_STATE *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  return pAVar2;
}

