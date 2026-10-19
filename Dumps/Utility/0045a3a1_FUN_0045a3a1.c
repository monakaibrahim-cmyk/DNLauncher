// Address: 0x0045a3a1
// Name: FUN_0045a3a1
// Category: Utility


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0045a3a1(void)

{
  HWND pHVar1;
  CWnd *unaff_EBX;
  int unaff_EBP;
  CDialog *unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x28) != unaff_EDI) {
    CWnd::EnableWindow(unaff_EBX,1);
  }
  if (*(int *)(unaff_EBP + -0x2c) != unaff_EDI) {
    EnableWindow(*(HWND *)(unaff_EBP + -0x14),1);
  }
  if (*(int *)(unaff_EBP + -0x14) != unaff_EDI) {
    pHVar1 = GetActiveWindow();
    if (pHVar1 == *(HWND *)(unaff_ESI + 0x20)) {
      SetActiveWindow(*(HWND *)(unaff_EBP + -0x14));
    }
  }
  (**(code **)(*(int *)unaff_ESI + 0x60))();
  CDialog::PostModal(unaff_ESI);
  if (*(int *)(unaff_ESI + 0x58) != unaff_EDI) {
    FreeResource(*(HGLOBAL *)(unaff_EBP + -0x18));
  }
  return *(undefined4 *)(unaff_ESI + 0x44);
}

