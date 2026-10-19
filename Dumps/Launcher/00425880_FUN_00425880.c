// Address: 0x00425880
// Name: FUN_00425880
// Category: Launcher


/* WARNING: Removing unreachable block (ram,0x0042598b) */

void __fastcall FUN_00425880(int param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00498969;
  local_10 = ExceptionList;
  uVar5 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; local_8 = 1, param_1 != param_3; param_1 = param_1 + 0x1c) {
    local_8 = 2;
    if (param_2 != (void *)0x0) {
      *(undefined4 *)((int)param_2 + 0x14) = 0;
      *(undefined4 *)((int)param_2 + 0x18) = 7;
      *(undefined2 *)((int)param_2 + 4) = 0;
      FUN_004069c0(param_2,0,0xffffffff);
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
  ExceptionList = local_10;
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}

