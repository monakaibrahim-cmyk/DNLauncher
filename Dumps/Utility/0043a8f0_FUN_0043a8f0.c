// Address: 0x0043a8f0
// Name: FUN_0043a8f0
// Category: Utility


uint __cdecl FUN_0043a8f0(int *param_1)

{
  uint uVar1;
  
  if (param_1[0x5f] == 0) {
    uVar1 = FUN_0043a440(param_1);
    if ((char)uVar1 == '\0') goto LAB_0043a90b;
  }
  if (param_1[0x5f] == *(int *)(param_1[0x65] + 0x10) + 0xd0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x62;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x65] + 0x10);
    uVar1 = (**(code **)(*param_1 + 4))(param_1,3);
    param_1[0x5f] = 0;
  }
  else {
    uVar1 = (**(code **)(param_1[6] + 0x14))(param_1,*(int *)(param_1[0x65] + 0x10));
    if ((char)uVar1 == '\0') {
LAB_0043a90b:
      return uVar1 & 0xffffff00;
    }
  }
  *(uint *)(param_1[0x65] + 0x10) = *(int *)(param_1[0x65] + 0x10) + 1U & 7;
  return CONCAT31((int3)(uVar1 >> 8),1);
}

