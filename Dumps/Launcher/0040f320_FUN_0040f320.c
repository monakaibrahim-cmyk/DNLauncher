// Address: 0x0040f320
// Name: FUN_0040f320
// Category: Launcher


void FUN_0040f320(int param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (in_EAX != param_1) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    if ((puVar1 == (undefined4 *)0x0) ||
       (uVar5 = *(int *)(param_1 + 8) - (int)puVar1 >> 3, uVar5 == 0)) {
      FUN_00410440();
      return;
    }
    iVar4 = *(int *)(in_EAX + 4);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(in_EAX + 8) - iVar4 >> 3;
    }
    if (uVar5 <= uVar3) {
      FUN_0040fd00(puVar1);
      FUN_0040ff60();
      if (*(int *)(param_1 + 4) != 0) {
        *(int *)(in_EAX + 8) =
             *(int *)(in_EAX + 4) + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3) * 8;
        return;
      }
      *(undefined4 *)(in_EAX + 8) = *(undefined4 *)(in_EAX + 4);
      return;
    }
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(in_EAX + 0xc) - iVar4 >> 3;
    }
    if (uVar5 <= uVar3) {
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_EAX + 8) - iVar4 >> 3;
      }
      puVar1 = *(undefined4 **)(param_1 + 4);
      FUN_0040fd00(puVar1);
      uVar2 = FUN_0040edf0(extraout_ECX,*(undefined4 **)(in_EAX + 8),puVar1 + iVar4 * 2,
                           *(int **)(param_1 + 8));
      *(undefined4 *)(in_EAX + 8) = uVar2;
      return;
    }
    if (iVar4 != 0) {
      FUN_0040ff60();
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(in_EAX + 4));
    }
    if (*(int *)(param_1 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3;
    }
    *(undefined4 *)(in_EAX + 4) = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 0xc) = 0;
    if ((iVar4 != 0) && (uVar2 = FUN_0040fd90(), (char)uVar2 != '\0')) {
      uVar2 = FUN_0040edf0(*(undefined4 *)(param_1 + 8),*(undefined4 **)(in_EAX + 4),
                           *(void **)(param_1 + 4),(int *)*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(in_EAX + 8) = uVar2;
    }
  }
  return;
}

