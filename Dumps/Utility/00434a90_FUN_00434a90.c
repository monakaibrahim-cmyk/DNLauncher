// Address: 0x00434a90
// Name: FUN_00434a90
// Category: Utility


undefined4 __fastcall FUN_00434a90(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_EAX;
  uint3 uVar2;
  int iVar3;
  
  uVar2 = (uint3)((uint)in_EAX >> 8);
  if (*(int *)(param_1 + 0x38) != 0) {
    return (uint)uVar2 << 8;
  }
  if (*(int *)(param_1 + 0x1b8) == 0) {
    return CONCAT31(uVar2,1);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x160)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x1b8) + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x160));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x1b8));
}

