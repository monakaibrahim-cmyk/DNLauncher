// Address: 0x00459e17
// Name: FUN_00459e17
// Category: Utility


long __fastcall FUN_00459e17(CDialog *param_1)

{
  int *piVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  long lVar4;
  HWND pHVar5;
  CWnd *this;
  
  (**(code **)(*(int *)param_1 + 0x158))();
  pAVar2 = AfxGetModuleState();
  piVar1 = *(int **)(pAVar2 + 0x3c);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x70) != 0)) {
    if (*(int *)(param_1 + 100) == 0) {
      iVar3 = (**(code **)(*piVar1 + 0x24))
                        (param_1,*(undefined4 *)(param_1 + 0x58),*(int *)(param_1 + 0x70));
    }
    else {
      iVar3 = (**(code **)(*piVar1 + 0x20))(param_1,*(int *)(param_1 + 100));
    }
    if (iVar3 == 0) {
      CDialog::EndDialog(param_1,-1);
      return 0;
    }
  }
  lVar4 = CWnd::Default((CWnd *)param_1);
  if ((lVar4 != 0) && ((*(ushort *)(param_1 + 0x3c) & 0x100) != 0)) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x70) = 0;
    }
    pHVar5 = GetNextDlgTabItem(*(HWND *)(param_1 + 0x20),(HWND)0x0,0);
    this = CWnd::FromHandle(pHVar5);
    if (this != (CWnd *)0x0) {
      CWnd::SetFocus(this);
      lVar4 = 0;
    }
  }
  return lVar4;
}

