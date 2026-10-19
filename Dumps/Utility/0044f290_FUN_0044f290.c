// Address: 0x0044f290
// Name: FUN_0044f290
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0044f290(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  char *pcVar5;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    FUN_00445110(param_1,"Missing IHDR before cHRM");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_004451d0((int)param_1,"Invalid cHRM after IDAT");
      FUN_0044eb90(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) != 0) {
      FUN_004451d0((int)param_1,"Missing PLTE before cHRM");
    }
  }
  if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 4) != 0)) &&
     ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
    FUN_004451d0((int)param_1,"Duplicate cHRM chunk");
    FUN_0044eb90(param_1,param_3);
    return;
  }
  if (param_3 != 0x20) {
    FUN_004451d0((int)param_1,"Incorrect cHRM chunk length");
    FUN_0044eb90(param_1,param_3);
    return;
  }
  FUN_0044da60(param_1,&local_7c,4);
  uVar1 = FUN_0044da10((undefined1 *)&local_7c);
  FUN_0044da60(param_1,&local_7c,4);
  local_68 = FUN_0044da10((undefined1 *)&local_7c);
  if (((80000 < uVar1) || (80000 < local_68)) || (100000 < local_68 + uVar1)) {
    FUN_004451d0((int)param_1,"Invalid cHRM white point");
    FUN_0044eb90(param_1,0x18);
    return;
  }
  local_64 = uVar1;
  FUN_0044da60(param_1,&local_7c,4);
  iVar2 = FUN_0044da10((undefined1 *)&local_7c);
  FUN_0044da60(param_1,&local_7c,4);
  local_70 = FUN_0044da10((undefined1 *)&local_7c);
  if (100000 < (uint)(local_70 + iVar2)) {
    FUN_004451d0((int)param_1,"Invalid cHRM red point");
    FUN_0044eb90(param_1,0x10);
    return;
  }
  local_6c = iVar2;
  FUN_0044da60(param_1,&local_7c,4);
  iVar2 = FUN_0044da10((undefined1 *)&local_7c);
  FUN_0044da60(param_1,&local_7c,4);
  local_78 = FUN_0044da10((undefined1 *)&local_7c);
  if (100000 < (uint)(local_78 + iVar2)) {
    FUN_004451d0((int)param_1,"Invalid cHRM green point");
    FUN_0044eb90(param_1,8);
    return;
  }
  local_74 = iVar2;
  FUN_0044da60(param_1,&local_7c,4);
  iVar2 = FUN_0044da10((undefined1 *)&local_7c);
  local_5c = (float)iVar2;
  FUN_0044da60(param_1,&local_7c,4);
  iVar3 = FUN_0044da10((undefined1 *)&local_7c);
  if (100000 < (uint)(iVar3 + iVar2)) {
    local_60 = (float)iVar3;
    FUN_004451d0((int)param_1,"Invalid cHRM blue point");
    FUN_0044eb90(param_1,0);
    return;
  }
  local_60 = (float)_DAT_0049ebd8;
  local_44 = (float)(int)local_64 / local_60;
  local_48 = (float)(int)local_68 / local_60;
  local_4c = (float)local_6c / local_60;
  local_50 = (float)local_70 / local_60;
  local_54 = (float)local_74 / local_60;
  local_58 = (float)local_78 / local_60;
  local_5c = (float)(int)local_5c / local_60;
  local_60 = (float)iVar3 / local_60;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) {
    if ((((2000 < local_64 - 0x763e) ||
         ((((2000 < local_68 - 0x7c9c || (2000 < local_6c - 63000U)) || (2000 < local_70 - 32000U))
          || ((2000 < local_74 - 29000U || (2000 < local_78 - 59000U)))))) || (iVar2 < 14000)) ||
       (((16000 < iVar2 || (iVar3 < 5000)) || (7000 < iVar3)))) {
      FUN_004451d0((int)param_1,"Ignoring incorrect cHRM value when sRGB is also present");
      pcVar5 = "wx=%f, wy=%f, rx=%f, ry=%f\n";
      ppuVar4 = FUN_0047a87c();
      FUN_00477353((FILE *)(ppuVar4 + 0x10),(byte *)pcVar5);
      pcVar5 = "gx=%f, gy=%f, bx=%f, by=%f\n";
      ppuVar4 = FUN_0047a87c();
      FUN_00477353((FILE *)(ppuVar4 + 0x10),(byte *)pcVar5);
    }
    FUN_0044eb90(param_1,0);
    return;
  }
  FUN_00451370(extraout_ECX,extraout_EDX,(int)param_1,param_2,(double)local_44,(double)local_48,
               (double)local_4c,(double)local_50,(double)local_54,(double)local_58,(double)local_5c,
               (double)local_60);
  FUN_004516a0((int)param_1,param_2,local_64,local_68,local_6c,local_70,local_74,local_78,iVar2,
               iVar3);
  FUN_0044eb90(param_1,0);
  return;
}

