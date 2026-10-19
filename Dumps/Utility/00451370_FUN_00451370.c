// Address: 0x00451370
// Name: FUN_00451370
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_00451370(undefined4 param_1,undefined4 param_2,int param_3,int param_4,double param_5,
            double param_6,double param_7,double param_8,double param_9,double param_10,
            double param_11,double param_12)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  ulonglong uVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    if ((((param_5 == 0.0) &&
         ((((param_6 == 0.0 && (param_7 == 0.0)) && (param_8 == 0.0)) &&
          ((param_9 == 0.0 && (param_10 == 0.0)))))) && (param_11 == 0.0)) && (param_12 == 0.0)) {
      FUN_004451d0(param_3,"Ignoring attempt to set all-zero chromaticity values");
      return;
    }
    if ((((0.0 <= param_5) && (0.0 <= param_6)) &&
        ((0.0 <= param_7 && (((0.0 <= param_8 && (0.0 <= param_9)) && (0.0 <= param_10)))))) &&
       ((0.0 <= param_11 && (0.0 <= param_12)))) {
      if ((_DAT_0049fcb8 < param_5) || ((_DAT_0049fcb8 < param_6 || (_DAT_0049fcb8 < param_7)))) {
        FUN_004451d0(param_3,"Ignoring attempt to set chromaticity value exceeding 21474.83");
        return;
      }
      if (_DAT_0049fcb8 < param_8) {
        FUN_004451d0(param_3,"Ignoring attempt to set chromaticity value exceeding 21474.83");
        return;
      }
      if (_DAT_0049fcb8 < param_9) {
        FUN_004451d0(param_3,"Ignoring attempt to set chromaticity value exceeding 21474.83");
        return;
      }
      if (_DAT_0049fcb8 < param_10) {
        FUN_004451d0(param_3,"Ignoring attempt to set chromaticity value exceeding 21474.83");
        return;
      }
      if ((param_11 <= _DAT_0049fcb8) && (param_12 <= _DAT_0049fcb8)) {
        *(float *)(param_4 + 0x80) = (float)param_5;
        *(float *)(param_4 + 0x84) = (float)param_6;
        *(float *)(param_4 + 0x88) = (float)param_7;
        *(float *)(param_4 + 0x8c) = (float)param_8;
        *(float *)(param_4 + 0x90) = (float)param_9;
        *(float *)(param_4 + 0x94) = (float)param_10;
        *(float *)(param_4 + 0x98) = (float)param_11;
        *(float *)(param_4 + 0x9c) = (float)param_12;
        uVar1 = FUN_00478f90(param_3,param_2);
        *(int *)(param_4 + 0x100) = (int)uVar1;
        uVar1 = FUN_00478f90(extraout_ECX,(int)(uVar1 >> 0x20));
        *(int *)(param_4 + 0x104) = (int)uVar1;
        uVar1 = FUN_00478f90(extraout_ECX_00,(int)(uVar1 >> 0x20));
        *(int *)(param_4 + 0x108) = (int)uVar1;
        uVar1 = FUN_00478f90(extraout_ECX_01,(int)(uVar1 >> 0x20));
        *(int *)(param_4 + 0x10c) = (int)uVar1;
        uVar1 = FUN_00478f90(extraout_ECX_02,(int)(uVar1 >> 0x20));
        *(int *)(param_4 + 0x110) = (int)uVar1;
        uVar1 = FUN_00478f90(extraout_ECX_03,(int)(uVar1 >> 0x20));
        *(int *)(param_4 + 0x114) = (int)uVar1;
        uVar1 = FUN_00478f90(extraout_ECX_04,(int)(uVar1 >> 0x20));
        *(int *)(param_4 + 0x118) = (int)uVar1;
        uVar1 = FUN_00478f90(extraout_ECX_05,(int)(uVar1 >> 0x20));
        *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) | 4;
        *(int *)(param_4 + 0x11c) = (int)uVar1;
        return;
      }
      FUN_004451d0(param_3,"Ignoring attempt to set chromaticity value exceeding 21474.83");
      return;
    }
    FUN_004451d0(param_3,"Ignoring attempt to set negative chromaticity value");
  }
  return;
}

