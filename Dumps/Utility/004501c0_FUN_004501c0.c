// Address: 0x004501c0
// Name: FUN_004501c0
// Category: Utility


void __cdecl FUN_004501c0(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_208;
  short local_204 [256];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_208;
  uVar3 = param_1[0x1a];
  if ((uVar3 & 1) == 0) {
    FUN_00445110(param_1,"Missing IHDR before hIST");
  }
  else {
    if ((uVar3 & 4) != 0) {
      FUN_004451d0((int)param_1,"Invalid hIST after IDAT");
      FUN_0044eb90(param_1,param_3);
      __security_check_cookie(local_4 ^ (uint)&local_208);
      return;
    }
    if ((uVar3 & 2) == 0) {
      FUN_004451d0((int)param_1,"Missing PLTE before hIST");
      FUN_0044eb90(param_1,param_3);
      __security_check_cookie(local_4 ^ (uint)&local_208);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x40) != 0)) {
      FUN_004451d0((int)param_1,"Duplicate hIST chunk");
      FUN_0044eb90(param_1,param_3);
      __security_check_cookie(local_4 ^ (uint)&local_208);
      return;
    }
  }
  uVar3 = param_3 >> 1;
  if ((uVar3 == *(ushort *)(param_1 + 0x46)) && (uVar3 < 0x101)) {
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        FUN_0044da60(param_1,&local_208,2);
        sVar1 = FUN_0044da40((byte *)&local_208);
        local_204[uVar4] = sVar1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    iVar2 = FUN_0044eb90(param_1,0);
    if (iVar2 == 0) {
      FUN_00451990(param_1,param_2,(int)local_204);
    }
  }
  else {
    FUN_004451d0((int)param_1,"Incorrect hIST chunk length");
    FUN_0044eb90(param_1,param_3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_208);
  return;
}

