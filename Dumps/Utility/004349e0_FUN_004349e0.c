// Address: 0x004349e0
// Name: FUN_004349e0
// Category: Utility


uint __fastcall FUN_004349e0(int param_1)

{
  undefined4 *puVar1;
  uint in_EAX;
  int iVar2;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    return in_EAX & 0xffffff00;
  }
  if (*(int *)(param_1 + 0x1b4) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x1a0)) {
      do {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x1b4) + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x1a0));
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x1b4));
  }
  if (*(void **)(param_1 + 0x1ac) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x1ac));
  }
  if (*(void **)(param_1 + 0x1b0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x1b0));
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return 1;
}

