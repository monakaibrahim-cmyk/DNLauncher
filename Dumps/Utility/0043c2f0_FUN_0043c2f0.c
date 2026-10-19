// Address: 0x0043c2f0
// Name: FUN_0043c2f0
// Category: Utility


int __cdecl FUN_0043c2f0(int *param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  if (0x3b9ac9f0 < param_3) {
    FUN_0043c2d0(1);
  }
  uVar4 = param_3;
  if ((param_3 & 7) != 0) {
    uVar4 = param_3 + (8 - (param_3 & 7));
    param_4 = uVar4;
  }
  if (((int)param_3 < 0) || (1 < (int)param_3)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(uint *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x34 + param_3 * 4);
  puVar1 = (undefined4 *)0x0;
  while (puVar3 = puVar2, puVar3 != (undefined4 *)0x0) {
    if (uVar4 <= (uint)puVar3[2]) goto LAB_0043c3fd;
    puVar1 = puVar3;
    puVar2 = (undefined4 *)*puVar3;
  }
  iVar5 = uVar4 + 0x10;
  if (puVar1 == (undefined4 *)0x0) {
    uVar4 = *(uint *)(&DAT_0049e2c8 + param_3 * 4);
  }
  else {
    uVar4 = *(uint *)(&DAT_0049e2d0 + param_3 * 4);
  }
  if (1000000000U - iVar5 < uVar4) {
    uVar4 = 1000000000U - iVar5;
  }
  puVar3 = (undefined4 *)FUN_00443750(param_1,uVar4 + iVar5);
  while (puVar3 == (undefined4 *)0x0) {
    uVar4 = uVar4 >> 1;
    if (uVar4 < 0x32) {
      FUN_0043c2d0(2);
    }
    puVar3 = (undefined4 *)FUN_00443750(param_1,uVar4 + iVar5);
  }
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + uVar4 + iVar5;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = uVar4 + param_4;
  uVar4 = param_4;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 **)(param_2 + 0x34 + param_3 * 4) = puVar3;
  }
  else {
    *puVar1 = puVar3;
  }
LAB_0043c3fd:
  iVar5 = puVar3[1];
  puVar3[2] = puVar3[2] - uVar4;
  puVar3[1] = iVar5 + uVar4;
  return iVar5 + 0x10 + (int)puVar3;
}

