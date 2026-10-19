// Address: 0x0044eb90
// Name: FUN_0044eb90
// Category: Utility


undefined4 __cdecl FUN_0044eb90(int *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  uVar1 = param_1[0x2c];
  for (; uVar1 < param_2; param_2 = param_2 - uVar1) {
    FUN_0044da60(param_1,(uint *)param_1[0x2b],param_1[0x2c]);
  }
  if (param_2 != 0) {
    FUN_0044da60(param_1,(uint *)param_1[0x2b],param_2);
  }
  bVar2 = FUN_0044da90(param_1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    if ((((*(byte *)(param_1 + 0x47) & 0x20) == 0) || ((param_1[0x1b] & 0x200U) != 0)) &&
       (((*(byte *)(param_1 + 0x47) & 0x20) != 0 || ((param_1[0x1b] & 0x400U) == 0)))) {
      FUN_00445230(param_1,"CRC error");
      return 1;
    }
    FUN_00445280((int)param_1,"CRC error");
    return 1;
  }
  return 0;
}

