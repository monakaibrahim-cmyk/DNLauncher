// Address: 0x00460641
// Name: FUN_00460641
// Category: MFC_CRT


void __fastcall FUN_00460641(int param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xb8);
  if (((iVar2 != 0) && (iVar2 = iVar2 + -1, *(int *)(param_1 + 0xb8) = iVar2, iVar2 == 0)) &&
     (*(int **)(param_1 + 0xbc) != (int *)0x0)) {
    iVar2 = 0;
    if (**(int **)(param_1 + 0xbc) != 0) {
      iVar3 = 0;
      do {
        BVar1 = IsWindow(*(HWND *)(*(int *)(param_1 + 0xbc) + iVar3));
        if (BVar1 != 0) {
          EnableWindow(*(HWND *)(*(int *)(param_1 + 0xbc) + iVar3),1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar2 * 4;
      } while (*(int *)(iVar3 + *(int *)(param_1 + 0xbc)) != 0);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xbc));
  }
  return;
}

