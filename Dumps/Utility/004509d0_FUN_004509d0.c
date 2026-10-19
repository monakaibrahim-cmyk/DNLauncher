// Address: 0x004509d0
// Name: FUN_004509d0
// Category: Utility


void __cdecl FUN_004509d0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  short local_14;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_14;
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_00445110(param_1,"Out of place tIME chunk");
  }
  else if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
    FUN_004451d0((int)param_1,"Duplicate tIME chunk");
    FUN_0044eb90(param_1,param_3);
    __security_check_cookie(local_4 ^ (uint)&local_14);
    return;
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  if (param_3 != 7) {
    FUN_004451d0((int)param_1,"Incorrect tIME chunk length");
    FUN_0044eb90(param_1,param_3);
    __security_check_cookie(local_4 ^ (uint)&local_14);
    return;
  }
  FUN_0044da60(param_1,&local_c,7);
  iVar1 = FUN_0044eb90(param_1,0);
  if (iVar1 == 0) {
    local_f = local_7;
    local_e = local_6;
    local_10 = local_8;
    local_11 = local_c._3_1_;
    local_12 = local_c._2_1_;
    local_14 = FUN_0044da40((byte *)&local_c);
    FUN_00452380((int)param_1,param_2,(undefined4 *)&local_14);
  }
  __security_check_cookie(local_4 ^ (uint)&local_14);
  return;
}

