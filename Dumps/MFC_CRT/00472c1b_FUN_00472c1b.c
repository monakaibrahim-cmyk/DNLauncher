// Address: 0x00472c1b
// Name: FUN_00472c1b
// Category: MFC_CRT


void __fastcall FUN_00472c1b(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00471658(*(void **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      for (puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + uVar1 * 4); puVar2 != (undefined4 *)0x0
          ; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2 + 2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_004529e8();
        }
        FUN_00406ee0(puVar2 + 2,0);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}

