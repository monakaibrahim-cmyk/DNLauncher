// Address: 0x004452d0
// Name: FUN_004452d0
// Category: Utility


void __cdecl FUN_004452d0(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte local_c [8];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)local_c;
  local_c[5] = 10;
  local_c[7] = 10;
  local_c[0] = 0x89;
  local_c[1] = 0x50;
  local_c[2] = 0x4e;
  local_c[3] = 0x47;
  local_c[4] = 0xd;
  local_c[6] = 0x1a;
  if (param_3 < 9) {
    if (param_3 == 0) goto LAB_004453d5;
  }
  else {
    param_3 = 8;
  }
  if (7 < param_2) {
LAB_004453d5:
    __security_check_cookie(local_4 ^ (uint)local_c);
    return;
  }
  if (8 < param_2 + param_3) {
    param_3 = 8 - param_2;
  }
  pbVar1 = local_c + param_2;
  pbVar2 = (byte *)(param_2 + param_1);
  for (; 3 < param_3; param_3 = param_3 - 4) {
    if (*(int *)pbVar2 != *(int *)pbVar1) goto LAB_00445360;
    pbVar1 = pbVar1 + 4;
    pbVar2 = pbVar2 + 4;
  }
  if (param_3 != 0) {
LAB_00445360:
    iVar3 = (uint)*pbVar2 - (uint)*pbVar1;
    if (iVar3 == 0) {
      if (param_3 == 1) goto LAB_004453e9;
      iVar3 = (uint)pbVar2[1] - (uint)pbVar1[1];
      if (iVar3 == 0) {
        if (param_3 == 2) goto LAB_004453e9;
        iVar3 = (uint)pbVar2[2] - (uint)pbVar1[2];
        if (iVar3 == 0) {
          if ((param_3 == 3) || (iVar3 = (uint)pbVar2[3] - (uint)pbVar1[3], iVar3 == 0))
          goto LAB_004453e9;
        }
      }
    }
    if (iVar3 < 1) {
      __security_check_cookie(local_4 ^ (uint)local_c);
      return;
    }
  }
LAB_004453e9:
  __security_check_cookie(local_4 ^ (uint)local_c);
  return;
}

