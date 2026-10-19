// Address: 0x00451910
// Name: FUN_00451910
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00451910(int param_1,int param_2,int param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 <= 0x7fffffff) {
      if (param_3 < 0) {
        FUN_004451d0(param_1,"Setting negative gamma to zero");
        param_3 = 0;
      }
    }
    else {
      FUN_004451d0(param_1,"Limiting gamma to 21474.83");
      param_3 = 0x7fffffff;
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
    *(int *)(param_2 + 0xfc) = param_3;
    *(float *)(param_2 + 0x28) = (float)param_3 / (float)_DAT_0049ebd8;
    if (param_3 == 0) {
      FUN_004451d0(param_1,"Setting gamma=0");
    }
  }
  return;
}

