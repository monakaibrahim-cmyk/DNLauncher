// Address: 0x0040f460
// Name: FUN_0040f460
// Category: Launcher


int FUN_0040f460(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar6 = *(int *)(param_2 + 4);
  if (iVar6 != 0) {
    iVar7 = *(int *)(param_2 + 8) - iVar6;
    iVar4 = iVar7 >> 0x1f;
    iVar7 = iVar7 / 0x30 + iVar4;
    uVar8 = iVar7 - iVar4;
    if (iVar7 != iVar4) {
      iVar4 = *(int *)(param_1 + 4);
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*(int *)(param_1 + 8) - iVar4) / 0x30;
      }
      if (uVar8 <= uVar2) {
        piVar3 = (int *)FUN_0040fbc0();
        piVar1 = *(int **)(param_1 + 8);
        for (; piVar3 != piVar1; piVar3 = piVar3 + 0xc) {
          FUN_004100b0(piVar3);
        }
        if (*(int *)(param_2 + 4) != 0) {
          *(int *)(param_1 + 8) =
               ((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x30) * 0x30 +
               *(int *)(param_1 + 4);
          return param_1;
        }
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
        return param_1;
      }
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*(int *)(param_1 + 0xc) - iVar4) / 0x30;
      }
      if (uVar2 < uVar8) {
        if (iVar4 != 0) {
          FUN_0040ff40();
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(param_1 + 4));
        }
        iVar6 = FUN_0040d8a0(param_2);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        if (iVar6 == 0) {
          return param_1;
        }
        uVar5 = FUN_0040dcb0();
        if ((char)uVar5 == '\0') {
          return param_1;
        }
        uVar5 = FUN_0040f6a0(*(undefined4 *)(param_2 + 8),*(undefined4 **)(param_1 + 4),
                             *(void **)(param_2 + 4),*(undefined4 *)(param_2 + 8));
        *(undefined4 *)(param_1 + 8) = uVar5;
        return param_1;
      }
      iVar4 = FUN_0040d8a0(param_1);
      FUN_0040fbc0();
      uVar5 = FUN_0040f6a0(param_2,*(undefined4 **)(param_1 + 8),(void *)(iVar4 * 0x30 + iVar6),
                           *(int *)(param_2 + 8));
      *(undefined4 *)(param_1 + 8) = uVar5;
      return param_1;
    }
  }
  FUN_0040fc10();
  return param_1;
}

