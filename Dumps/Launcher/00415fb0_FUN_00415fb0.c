// Address: 0x00415fb0
// Name: FUN_00415fb0
// Category: Launcher


void __fastcall FUN_00415fb0(int param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uStack_64;
  undefined1 local_34 [4];
  void *local_30;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00497ec9;
  local_10 = ExceptionList;
  uStack_64 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_64;
  ExceptionList = &local_10;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = (void *)((uint)local_30 & 0xffffff00);
  uStack_7 = 0;
  local_18 = uStack_64;
  for (; local_8 = 1, param_1 != param_3; param_1 = param_1 + 0x1c) {
    local_8 = 2;
    if (param_2 != (void *)0x0) {
      *(undefined4 *)((int)param_2 + 0x14) = 0;
      *(undefined4 *)((int)param_2 + 0x18) = 0xf;
      *(undefined1 *)((int)param_2 + 4) = 0;
      FUN_00402980(param_2,local_34,0,0xffffffff);
    }
    uVar1 = *(undefined4 *)((int)param_2 + 0x10);
    uVar2 = *(undefined4 *)((int)param_2 + 4);
    uVar3 = *(undefined4 *)((int)param_2 + 8);
    uVar4 = *(undefined4 *)((int)param_2 + 0xc);
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((int)param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 8) = uVar3;
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)((int)param_2 + 0x14);
    *(undefined4 *)((int)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)((int)param_2 + 0x18);
    *(undefined4 *)((int)param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    param_2 = (void *)((int)param_2 + 0x1c);
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

