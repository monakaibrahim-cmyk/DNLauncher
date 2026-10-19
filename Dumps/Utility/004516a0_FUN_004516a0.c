// Address: 0x004516a0
// Name: FUN_004516a0
// Category: Utility


/* WARNING: Removing unreachable block (ram,0x0045185f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004516a0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  float fVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    if (param_4 != 0) goto LAB_00451716;
    if (param_5 != 0) goto LAB_00451721;
    if (param_6 != 0) goto LAB_0045172c;
    if (param_7 != 0) goto LAB_00451734;
    if (param_8 != 0) goto LAB_0045173c;
    if (param_9 != 0) goto LAB_00451744;
    if (param_10 == 0) {
      FUN_004451d0(param_1,"Ignoring attempt to set all-zero chromaticity values");
      return;
    }
  }
  else {
    if (param_3 < 0) goto LAB_00451876;
LAB_00451716:
    if (param_4 < 0) goto LAB_00451876;
LAB_00451721:
    if (param_5 < 0) goto LAB_00451876;
LAB_0045172c:
    if (param_6 < 0) goto LAB_00451876;
LAB_00451734:
    if (param_7 < 0) goto LAB_00451876;
LAB_0045173c:
    if (param_8 < 0) goto LAB_00451876;
LAB_00451744:
    if (param_9 < 0) goto LAB_00451876;
  }
  if (-1 < param_10) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
    fVar1 = (float)_DAT_0049ebd8;
    *(int *)(param_2 + 0x100) = param_3;
    *(int *)(param_2 + 0x114) = param_8;
    *(int *)(param_2 + 0x118) = param_9;
    *(int *)(param_2 + 0x104) = param_4;
    *(int *)(param_2 + 0x10c) = param_6;
    *(int *)(param_2 + 0x110) = param_7;
    *(int *)(param_2 + 0x108) = param_5;
    *(int *)(param_2 + 0x11c) = param_10;
    *(float *)(param_2 + 0x80) = (float)param_3 / fVar1;
    *(float *)(param_2 + 0x84) = (float)param_4 / fVar1;
    *(float *)(param_2 + 0x88) = (float)param_5 / fVar1;
    *(float *)(param_2 + 0x8c) = (float)param_6 / fVar1;
    *(float *)(param_2 + 0x90) = (float)param_7 / fVar1;
    *(float *)(param_2 + 0x94) = (float)param_8 / fVar1;
    *(float *)(param_2 + 0x98) = (float)param_9 / fVar1;
    *(float *)(param_2 + 0x9c) = (float)param_10 / fVar1;
    return;
  }
LAB_00451876:
  FUN_004451d0(param_1,"Ignoring attempt to set negative chromaticity value");
  return;
}

