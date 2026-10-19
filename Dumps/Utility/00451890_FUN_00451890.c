// Address: 0x00451890
// Name: FUN_00451890
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_00451890(undefined4 param_1,undefined4 param_2,int param_3,int param_4,double param_5)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar1;
  float10 extraout_ST0;
  ulonglong uVar2;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    fVar1 = (float10)param_5;
    if ((float10)_DAT_0049fcb8 < fVar1) {
      FUN_004451d0(param_3,"Limiting gamma to 21474.83");
      fVar1 = (float10)_DAT_0049fcb8;
      param_1 = extraout_ECX;
      param_2 = extraout_EDX;
    }
    *(float *)(param_4 + 0x28) = (float)fVar1;
    uVar2 = FUN_00478f90(param_1,param_2);
    *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) | 1;
    *(int *)(param_4 + 0xfc) = (int)uVar2;
    if ((float10)0 == extraout_ST0) {
      FUN_004451d0(param_3,"Setting gamma=0");
    }
  }
  return;
}

