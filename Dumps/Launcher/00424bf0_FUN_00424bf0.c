// Address: 0x00424bf0
// Name: FUN_00424bf0
// Category: Launcher


int * FUN_00424bf0(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  puVar4 = (undefined4 *)(param_1 + 4);
  puVar2 = puVar4;
  if (7 < uVar1) {
    puVar2 = (undefined4 *)*puVar4;
  }
  if (puVar2 == (undefined4 *)0x0) {
LAB_00424c34:
    FUN_00475b26();
  }
  else {
    puVar3 = puVar4;
    if (7 < uVar1) {
      puVar3 = (undefined4 *)*puVar4;
    }
    if (puVar2 < puVar3) goto LAB_00424c34;
    puVar3 = puVar4;
    if (7 < uVar1) {
      puVar3 = (undefined4 *)*puVar4;
    }
    if ((undefined4 *)((int)puVar3 + *(int *)(param_1 + 0x14) * 2) < puVar2) goto LAB_00424c34;
  }
  if (param_4 == 0) {
    iVar5 = 0;
  }
  else {
    if ((param_3 != -2) && ((param_3 == 0 || (param_3 != param_1)))) {
      FUN_00475b26();
    }
    iVar5 = param_4 - (int)puVar2 >> 1;
  }
  if (((param_6 != 0) && (param_5 != -2)) && ((param_5 == 0 || (param_5 != param_3)))) {
    FUN_00475b26();
  }
  FUN_00406100();
  uVar1 = *(uint *)(param_1 + 0x18);
  puVar2 = puVar4;
  if (7 < uVar1) {
    puVar2 = (undefined4 *)*puVar4;
  }
  puVar2 = (undefined4 *)((int)puVar2 + iVar5 * 2);
  *param_2 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar4;
    if (7 < uVar1) {
      puVar3 = (undefined4 *)*puVar4;
    }
    if (puVar3 <= puVar2) {
      if (7 < uVar1) {
        puVar4 = (undefined4 *)*puVar4;
      }
      if (puVar2 <= (undefined4 *)((int)puVar4 + *(int *)(param_1 + 0x14) * 2)) goto LAB_00424ce2;
    }
  }
  FUN_00475b26();
LAB_00424ce2:
  param_2[1] = (int)puVar2;
  *param_2 = param_1;
  return param_2;
}

