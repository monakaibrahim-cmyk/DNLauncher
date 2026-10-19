// Address: 0x0043c420
// Name: FUN_0043c420
// Category: Utility


undefined4 * __cdecl FUN_0043c420(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar1 = param_1[1];
  if (0x3b9ac9f0 < param_3) {
    FUN_0043c2d0(3);
  }
  uVar4 = param_3;
  if ((param_3 & 7) != 0) {
    uVar4 = param_3 + (8 - (param_3 & 7));
  }
  if (((int)param_3 < 0) || (1 < (int)param_3)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(uint *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  puVar3 = (undefined4 *)FUN_00443750(param_1,uVar4 + 0x10);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_0043c2d0(4);
  }
  *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + uVar4 + 0x10;
  uVar2 = *(undefined4 *)(iVar1 + 0x3c + param_3 * 4);
  puVar3[1] = uVar4;
  *puVar3 = uVar2;
  puVar3[2] = 0;
  *(undefined4 **)(iVar1 + 0x3c + param_3 * 4) = puVar3;
  return puVar3 + 4;
}

