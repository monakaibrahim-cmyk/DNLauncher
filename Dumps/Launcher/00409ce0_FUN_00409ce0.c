// Address: 0x00409ce0
// Name: FUN_00409ce0
// Category: Launcher


void __thiscall FUN_00409ce0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00498688;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&local_c;
  local_4 = 0;
  ExceptionList = &local_c;
  FID_conflict_operator_(this,&param_1);
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

