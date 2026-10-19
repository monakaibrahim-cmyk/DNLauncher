// Address: 0x0047383e
// Name: AfxOleTerm
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxOleTerm(int)
   
   Library: Visual Studio 2005 Release */

void AfxOleTerm(int param_1)

{
  int iVar1;
  _AFX_THREAD_STATE *p_Var2;
  
  COleDataSource::FlushClipboard();
  COleObjectFactory::RevokeAll();
  AfxOleUnlockAllControls();
  if (param_1 == 0) {
    iVar1 = FUN_0046419a();
    if (iVar1 != 0) {
      if (*(int **)(iVar1 + 0x40) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0x40) + 4))(1);
      }
      *(undefined4 *)(iVar1 + 0x40) = 0;
    }
    p_Var2 = AfxGetThreadState();
    if (*(int *)(p_Var2 + 0x160) == 1) {
      CoFreeUnusedLibraries();
      OleUninitialize();
      *(int *)(p_Var2 + 0x160) = 0;
    }
  }
  return;
}

