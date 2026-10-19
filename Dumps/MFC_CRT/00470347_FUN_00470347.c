// Address: 0x00470347
// Name: FUN_00470347
// Category: MFC_CRT


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool FUN_00470347(void)

{
  int iVar1;
  undefined4 uVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  uint uVar5;
  int unaff_EBP;
  CWnd *unaff_EDI;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    iVar1 = **(int **)(unaff_EDI + 0x4c);
    uVar2 = (**(code **)(*(int *)unaff_EDI + 0x130))();
    (**(code **)(iVar1 + 0xa0))(uVar2);
  }
  pCVar4 = unaff_EDI;
  if (*(int *)(unaff_EDI + 0x4c) != 0) {
    while ((*(uint *)(pCVar4 + 0x3c) & 0x100) == 0) {
      *(uint *)(pCVar4 + 0x3c) = *(uint *)(pCVar4 + 0x3c) | 0x100;
      pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      pHVar3 = (HWND)0x0;
      if (pCVar4 != (CWnd *)0x0) {
        pHVar3 = *(HWND *)(pCVar4 + 0x20);
      }
      uVar5 = GetWindowLongW(pHVar3,-0x10);
      if (((uVar5 & 0x40000000) == 0) || (pCVar4 == (CWnd *)0x0)) break;
    }
  }
  return *(int *)(unaff_EDI + 0x4c) != 0;
}

