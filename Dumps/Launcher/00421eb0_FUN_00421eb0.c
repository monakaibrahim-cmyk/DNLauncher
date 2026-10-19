// Address: 0x00421eb0
// Name: FUN_00421eb0
// Category: Launcher


void FUN_00421eb0(void)

{
  CWnd *pCVar1;
  int iVar2;
  BOOL BVar3;
  HWND hWnd;
  int unaff_EDI;
  longlong lVar4;
  
  if ((((*(int *)(unaff_EDI + 0xb8) != 0) &&
       (pCVar1 = *(CWnd **)(unaff_EDI + 0xbc), pCVar1 != (CWnd *)0x0)) &&
      (*(int *)(unaff_EDI + 0x178) != 0 || *(int *)(unaff_EDI + 0x17c) != 0)) &&
     (*(int *)(unaff_EDI + 0x184) != 0)) {
    BVar3 = IsWindow(*(HWND *)(pCVar1 + 0x20));
    if (BVar3 != 0) {
      *(undefined4 *)(pCVar1 + 0x70) = 0;
      *(undefined4 *)(pCVar1 + 0x74) = 100;
      *(undefined4 *)(pCVar1 + 0x78) = 1;
      FUN_0041a4f0(pCVar1);
    }
    lVar4 = __allmul(*(uint *)(unaff_EDI + 0x170),*(int *)(unaff_EDI + 0x174),100,0);
    __alldiv((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),*(uint *)(unaff_EDI + 0x178),
             *(uint *)(unaff_EDI + 0x17c));
    FUN_00403f30((void *)(unaff_EDI + 0x413c),L"%d%%");
    FUN_0041a430(1);
    iVar2 = *(int *)(unaff_EDI + 0x184);
    pCVar1 = *(CWnd **)(unaff_EDI + 0xbc);
    if (pCVar1 == (CWnd *)0x0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = *(HWND *)(pCVar1 + 0x20);
    }
    BVar3 = IsWindow(hWnd);
    if (BVar3 != 0) {
      *(undefined4 *)(pCVar1 + 0x70) = 0;
      *(int *)(pCVar1 + 0x74) = iVar2 * 100;
      *(undefined4 *)(pCVar1 + 0x78) = 1;
      FUN_0041a4f0(pCVar1);
    }
    FUN_0041a430(1);
    FUN_00403f30((void *)(unaff_EDI + 0x4138),L"%d/%d");
    FUN_00403f30((void *)(unaff_EDI + 0x413c),L"%d%%");
    FID_conflict_operator_((void *)(unaff_EDI + 0x4138),(short *)&PTR_004b1080);
  }
  return;
}

