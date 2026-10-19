// Address: 0x0044ff80
// Name: FUN_0044ff80
// Category: Utility


void __cdecl FUN_0044ff80(int *param_1,int param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_c;
  byte local_8 [4];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_c;
  uVar2 = param_1[0x1a];
  if ((uVar2 & 1) == 0) {
    FUN_00445110(param_1,"Missing IHDR before bKGD");
  }
  else {
    if ((uVar2 & 4) != 0) {
      FUN_004451d0((int)param_1,"Invalid bKGD after IDAT");
      FUN_0044eb90(param_1,param_3);
      __security_check_cookie(local_4 ^ (uint)&local_c);
      return;
    }
    if ((*(char *)((int)param_1 + 0x126) == '\x03') && ((uVar2 & 2) == 0)) {
      FUN_004451d0((int)param_1,"Missing PLTE before bKGD");
      FUN_0044eb90(param_1,param_3);
      __security_check_cookie(local_4 ^ (uint)&local_c);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x20) != 0)) {
      FUN_004451d0((int)param_1,"Duplicate bKGD chunk");
      FUN_0044eb90(param_1,param_3);
      __security_check_cookie(local_4 ^ (uint)&local_c);
      return;
    }
  }
  if (*(byte *)((int)param_1 + 0x126) == 3) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(byte *)((int)param_1 + 0x126) & 2 | 1) * 2;
  }
  if (param_3 != uVar2) {
    FUN_004451d0((int)param_1,"Incorrect bKGD chunk length");
    FUN_0044eb90(param_1,param_3);
    __security_check_cookie(local_4 ^ (uint)&local_c);
    return;
  }
  FUN_0044da60(param_1,&local_c,uVar2);
  iVar3 = FUN_0044eb90(param_1,0);
  if (iVar3 == 0) {
    if (*(byte *)((int)param_1 + 0x126) == 3) {
      *(byte *)(param_1 + 0x4e) = (byte)local_c;
      if (*(ushort *)(param_2 + 0x14) != 0) {
        if (*(ushort *)(param_2 + 0x14) < (ushort)(byte)local_c) {
          FUN_004451d0((int)param_1,"Incorrect bKGD chunk index value");
          __security_check_cookie(local_4 ^ (uint)&local_c);
          return;
        }
        iVar3 = (uint)(byte)local_c * 3 + param_1[0x45];
        *(ushort *)((int)param_1 + 0x13a) =
             (ushort)*(byte *)((uint)(byte)local_c * 3 + param_1[0x45]);
        *(ushort *)(param_1 + 0x4f) = (ushort)*(byte *)(iVar3 + 1);
        *(ushort *)((int)param_1 + 0x13e) = (ushort)*(byte *)(iVar3 + 2);
      }
    }
    else {
      if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
        sVar1 = FUN_0044da40((byte *)&local_c);
        *(short *)(param_1 + 0x50) = sVar1;
        *(short *)(param_1 + 0x4f) = sVar1;
        *(short *)((int)param_1 + 0x13a) = sVar1;
      }
      else {
        sVar1 = FUN_0044da40((byte *)&local_c);
        *(short *)((int)param_1 + 0x13a) = sVar1;
        sVar1 = FUN_0044da40((byte *)((int)&local_c + 2));
        *(short *)(param_1 + 0x4f) = sVar1;
        sVar1 = FUN_0044da40(local_8);
      }
      *(short *)((int)param_1 + 0x13e) = sVar1;
    }
    FUN_00451340((int)param_1,param_2,param_1 + 0x4e);
  }
  __security_check_cookie(local_4 ^ (uint)&local_c);
  return;
}

