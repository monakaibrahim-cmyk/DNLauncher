// Address: 0x00405f20
// Name: FUN_00405f20
// Category: Launcher


void __fastcall FUN_00405f20(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  HKL pHVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049a5d8;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  FUN_0040a2b0();
  FUN_004070e0();
  local_4 = 0;
  if (*(int *)(param_1 + -0xc) == 0) {
    pHVar4 = GetKeyboardLayout(0);
    FUN_0040a2b0();
    FUN_0040a580((uint)pHVar4 & 0x3ff);
  }
  local_4 = 0xffffffff;
  piVar1 = (int *)(param_1 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(param_1 + -0x10) + 4))((undefined4 *)(param_1 + -0x10),uVar3);
  }
  ExceptionList = local_c;
  return;
}

