// Address: 0x00450480
// Name: FUN_00450480
// Category: Utility


void __cdecl FUN_00450480(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint local_10;
  undefined1 local_c [4];
  undefined1 local_8;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_10;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00445110(param_1,"Missing IHDR before oFFs");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004451d0((int)param_1,"Invalid oFFs after IDAT");
      FUN_0044eb90(param_1,param_3);
      __security_check_cookie(local_4 ^ (uint)&local_10);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) {
      FUN_004451d0((int)param_1,"Duplicate oFFs chunk");
      FUN_0044eb90(param_1,param_3);
      __security_check_cookie(local_4 ^ (uint)&local_10);
      return;
    }
  }
  if (param_3 != 9) {
    FUN_004451d0((int)param_1,"Incorrect oFFs chunk length");
    FUN_0044eb90(param_1,param_3);
    __security_check_cookie(local_4 ^ (uint)&local_10);
    return;
  }
  FUN_0044da60(param_1,&local_10,9);
  iVar1 = FUN_0044eb90(param_1,0);
  if (iVar1 == 0) {
    uVar4 = local_8;
    uVar2 = FUN_0044da10(local_c);
    uVar3 = FUN_0044da10((undefined1 *)&local_10);
    FUN_00451c80((int)param_1,param_2,uVar3,uVar2,uVar4);
  }
  __security_check_cookie(local_4 ^ (uint)&local_10);
  return;
}

