// Address: 0x00424af0
// Name: FUN_00424af0
// Category: Launcher


undefined4 *
FUN_00424af0(void *param_1,undefined4 *param_2,void *param_3,int param_4,void *param_5,int param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)((int)param_1 + 0x18);
  puVar3 = (undefined4 *)((int)param_1 + 4);
  puVar4 = puVar3;
  if (0xf < uVar1) {
    puVar4 = (undefined4 *)*puVar3;
  }
  if (puVar4 == (undefined4 *)0x0) {
LAB_00424b30:
    FUN_00475b26();
  }
  else {
    puVar2 = puVar3;
    if (0xf < uVar1) {
      puVar2 = (undefined4 *)*puVar3;
    }
    if (puVar4 < puVar2) goto LAB_00424b30;
    puVar2 = puVar3;
    if (0xf < uVar1) {
      puVar2 = (undefined4 *)*puVar3;
    }
    if ((undefined4 *)(*(int *)((int)param_1 + 0x14) + (int)puVar2) < puVar4) goto LAB_00424b30;
  }
  if (param_4 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    if ((param_3 != (void *)0xfffffffe) && ((param_3 == (void *)0x0 || (param_3 != param_1)))) {
      FUN_00475b26();
    }
    puVar4 = (undefined4 *)(param_4 - (int)puVar4);
  }
  if (param_6 == 0) {
    uVar1 = 0;
  }
  else {
    if ((param_5 != (void *)0xfffffffe) && ((param_5 == (void *)0x0 || (param_5 != param_3)))) {
      FUN_00475b26();
    }
    uVar1 = param_6 - param_4;
  }
  FUN_00402a60(param_1,puVar4,uVar1);
  uVar1 = *(uint *)((int)param_1 + 0x18);
  puVar2 = puVar3;
  if (0xf < uVar1) {
    puVar2 = (undefined4 *)*puVar3;
  }
  puVar4 = (undefined4 *)((int)puVar4 + (int)puVar2);
  *param_2 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = puVar3;
    if (0xf < uVar1) {
      puVar2 = (undefined4 *)*puVar3;
    }
    if (puVar2 <= puVar4) {
      if (0xf < uVar1) {
        puVar3 = (undefined4 *)*puVar3;
      }
      if (puVar4 <= (undefined4 *)(*(int *)((int)param_1 + 0x14) + (int)puVar3)) goto LAB_00424bd5;
    }
  }
  FUN_00475b26();
LAB_00424bd5:
  *param_2 = param_1;
  param_2[1] = puVar4;
  return param_2;
}

