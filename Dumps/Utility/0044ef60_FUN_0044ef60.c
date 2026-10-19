// Address: 0x0044ef60
// Name: FUN_0044ef60
// Category: Utility


void __cdecl FUN_0044ef60(int *param_1,undefined4 param_2,uint param_3)

{
  if (((param_1[0x1a] & 1U) == 0) || ((param_1[0x1a] & 4U) == 0)) {
    FUN_00445110(param_1,"No image in file");
  }
  param_1[0x1a] = param_1[0x1a] | 0x18;
  if (param_3 != 0) {
    FUN_004451d0((int)param_1,"Incorrect IEND chunk length");
  }
  FUN_0044eb90(param_1,param_3);
  return;
}

