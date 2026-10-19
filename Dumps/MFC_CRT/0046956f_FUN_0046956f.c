// Address: 0x0046956f
// Name: FUN_0046956f
// Category: MFC_CRT


void FUN_0046956f(void)

{
  int iVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  LONG LVar4;
  
  pAVar3 = AfxGetModuleState();
  LVar4 = InterlockedDecrement((LONG *)(pAVar3 + 0x2c));
  if (LVar4 != 0) {
    return;
  }
  pAVar3 = AfxGetModuleState();
  if (*(int *)(pAVar3 + 0x30) == 0) {
    AfxOleSetUserCtrl(1);
    pAVar3 = AfxGetModuleState();
    iVar1 = *(int *)(pAVar3 + 4);
    if ((iVar1 == 0) || (*(CWnd **)(iVar1 + 0x20) == (CWnd *)0x0)) {
      pAVar3 = AfxGetModuleState();
      if (pAVar3[0x14] == (AFX_MODULE_STATE)0x0) {
        AfxPostQuitMessage(0);
      }
    }
    else {
      iVar2 = CWnd::IsWindowEnabled(*(CWnd **)(iVar1 + 0x20));
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00469558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int **)(iVar1 + 0x20) + 0x60))();
        return;
      }
    }
  }
  return;
}

