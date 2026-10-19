// Address: 0x0045a1c7
// Name: FUN_0045a1c7
// Category: Utility


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool FUN_0045a1c7(void)

{
  int iVar1;
  HWND unaff_EBX;
  int unaff_EBP;
  HWND unaff_ESI;
  int *unaff_EDI;
  
  if ((*(HWND *)(unaff_EBP + -0x28) != unaff_EBX) && (unaff_ESI != unaff_EBX)) {
    (**(code **)((*(HWND *)(unaff_EBP + -0x28))->unused + 0x18))(unaff_EBP + -0x48);
    (**(code **)(*unaff_EDI + 300))();
  }
  iVar1 = AfxUnhookWindowCreate();
  if (iVar1 == 0) {
    (**(code **)(*unaff_EDI + 0x114))();
  }
  if ((unaff_ESI != unaff_EBX) && ((*(byte *)(unaff_EDI + 0xf) & 0x10) == 0)) {
    DestroyWindow(unaff_ESI);
    unaff_ESI = (HWND)0x0;
  }
  if (*(HWND *)(unaff_EBP + -0x14) != unaff_EBX) {
    GlobalUnlock(*(HGLOBAL *)(unaff_EBP + -0x14));
    GlobalFree(*(HGLOBAL *)(unaff_EBP + -0x14));
  }
  return unaff_ESI != unaff_EBX;
}

