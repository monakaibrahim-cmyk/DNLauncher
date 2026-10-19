// Address: 0x004224b0
// Name: FUN_004224b0
// Category: Launcher


void __thiscall FUN_004224b0(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00497e38;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_00403380((void *)((int)this + 0x74),param_1,*(int *)((int)param_1 + -0xc));
  local_4 = 0xffffffff;
  piVar1 = (int *)((int)param_1 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)((int)param_1 + -0x10) + 4))((undefined4 *)((int)param_1 + -0x10),uVar3);
  }
  ExceptionList = local_c;
  return;
}

