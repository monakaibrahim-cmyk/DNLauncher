// Address: 0x00434ec0
// Name: FUN_00434ec0
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00434ec0(void *this,int param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined2 unaff_SI;
  ulonglong uVar1;
  
  if (param_1 < 1) {
    param_1 = 0x60;
  }
  *(int *)((int)this + 0x16c) = param_1;
  FUN_00479040(((double)param_1 * _DAT_0049c8f8) / _DAT_0049c8f0 + _DAT_004b4728,unaff_SI);
  uVar1 = FUN_00478f90(extraout_ECX,extraout_EDX);
  *(int *)((int)this + 0x24) = (int)uVar1;
  if (*(int *)((int)this + 4) != 0) {
    *(int *)(*(int *)((int)this + 4) + 0x1c) = (int)uVar1;
  }
  return;
}

