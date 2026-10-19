// Address: 0x0042a0b0
// Name: FUN_0042a0b0
// Category: Launcher


void __thiscall FUN_0042a0b0(void *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  undefined8 local_120;
  int local_118;
  int *local_114;
  char local_110 [268];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_120;
  local_120 = CONCAT44(local_120._4_4_,(undefined4)local_120);
  if (-1 < (int)param_1) {
    iVar3 = 0;
    if (*(int *)((int)this + 0x2a4) != 0) {
      iVar3 = (*(int *)((int)this + 0x2a8) - *(int *)((int)this + 0x2a4)) / 0x13c;
    }
    local_120 = CONCAT44(local_120._4_4_,(undefined4)local_120);
    if ((int)param_1 < iVar3) {
      if ((*(int *)((int)this + 0x2a4) == 0) ||
         (iVar3 = *(int *)((int)this + 0x2a8) - *(int *)((int)this + 0x2a4),
         (uint)(iVar3 / 0x13c) <= param_1)) {
        FUN_00475b26();
        iVar3 = extraout_ECX;
      }
      FUN_00425f50(iVar3,(char *)(param_1 * 0x13c + *(int *)((int)this + 0x2a4)));
      __strlwr_s(local_110,0x104);
      FUN_00424a50(local_110);
      local_120 = FUN_004261f0(local_110);
      FUN_0042b480(&local_118);
      piVar2 = local_114;
      iVar3 = local_118;
      while( true ) {
        piVar1 = *(int **)((int)this + 0x2b4);
        if ((iVar3 == 0) || (iVar3 != (int)this + 0x2b0)) {
          FUN_00475b26();
        }
        if (piVar2 == piVar1) goto LAB_0042a1f1;
        if (iVar3 == 0) {
          FUN_00475b26();
        }
        if (piVar2 == *(int **)(iVar3 + 4)) {
          FUN_00475b26();
        }
        if (piVar2[6] == param_1) break;
        local_120 = local_120 + 1;
        piVar2 = FUN_0042b480(&local_118);
        iVar3 = *piVar2;
        piVar2 = (int *)piVar2[1];
      }
      FUN_0042b1c0((int)this + 0x2b0,&local_118,iVar3,piVar2);
    }
  }
LAB_0042a1f1:
  __security_check_cookie(local_4 ^ (uint)&local_120);
  return;
}

