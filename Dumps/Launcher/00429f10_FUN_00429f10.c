// Address: 0x00429f10
// Name: FUN_00429f10
// Category: Launcher


void __thiscall FUN_00429f10(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  undefined8 local_240;
  int local_234;
  int local_230;
  undefined8 local_228;
  uint local_220;
  char local_218 [532];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_240;
  local_240 = CONCAT44(local_240._4_4_,(undefined4)local_240);
  local_228 = CONCAT44(local_228._4_4_,(uint)local_228);
  if (-1 < (int)param_1) {
    iVar2 = 0;
    if (*(int *)((int)this + 0x2a4) != 0) {
      iVar2 = (*(int *)((int)this + 0x2a8) - *(int *)((int)this + 0x2a4)) / 0x13c;
    }
    local_240 = CONCAT44(local_240._4_4_,(undefined4)local_240);
    local_228 = CONCAT44(local_228._4_4_,(uint)local_228);
    if ((int)param_1 < iVar2) {
      if ((*(int *)((int)this + 0x2a4) == 0) ||
         (iVar2 = *(int *)((int)this + 0x2a8) - *(int *)((int)this + 0x2a4),
         (uint)(iVar2 / 0x13c) <= param_1)) {
        FUN_00475b26();
        iVar2 = extraout_ECX;
      }
      FUN_00425f50(iVar2,(char *)(*(int *)((int)this + 0x2a4) + param_1 * 0x13c));
      __strlwr_s(local_218,0x104);
      FUN_00424a50(local_218);
      if ((*(int *)((int)this + 0x2a4) == 0) ||
         ((uint)((*(int *)((int)this + 0x2a8) - *(int *)((int)this + 0x2a4)) / 0x13c) <= param_1)) {
        FUN_00475b26();
      }
      FUN_00425ef0();
      local_240 = FUN_004261f0(local_218);
      FUN_0042b480(&local_234);
      while( true ) {
        iVar2 = *(int *)((int)this + 0x2b4);
        if ((local_234 == 0) || (local_234 != (int)this + 0x2b0)) {
          FUN_00475b26();
        }
        if (local_230 == iVar2) break;
        local_240 = local_240 + 1;
        piVar1 = FUN_0042b480(&local_234);
        local_234 = *piVar1;
        local_230 = piVar1[1];
      }
      local_220 = param_1;
      local_228 = local_240;
      FUN_0042b0c0(&local_234,(uint *)&local_228);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_240);
  return;
}

