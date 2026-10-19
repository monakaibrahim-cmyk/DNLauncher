// Address: 0x00422170
// Name: FUN_00422170
// Category: Launcher


void __fastcall FUN_00422170(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  int local_20;
  int local_1c;
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00499d98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (0.0 < *(float *)(param_3 + 0x188)) {
    local_1c = *(uint *)(param_3 + 0x178) - *(uint *)(param_3 + 0x170);
    iStack_18 = (*(int *)(param_3 + 0x17c) - *(int *)(param_3 + 0x174)) -
                (uint)(*(uint *)(param_3 + 0x178) < *(uint *)(param_3 + 0x170));
    uVar5 = FUN_00478f90(iStack_18,param_2);
    iVar3 = (int)uVar5;
    if (iVar3 < 0xe11) {
      if (iVar3 < 0x3d) {
        if (iVar3 < 0) {
          ExceptionList = local_c;
          return;
        }
        FUN_0040a2b0();
        puVar4 = FUN_00416590(&local_1c);
        local_4 = 2;
        FUN_00403f30((void *)(iVar2 + 0x4134),(wchar_t *)*puVar4);
        FUN_00410090(&local_1c);
        ExceptionList = local_c;
        return;
      }
      FUN_0040a2b0();
      puVar4 = FUN_00416590(&param_3);
      local_4 = 1;
      FUN_00403f30((void *)(iVar2 + 0x4134),(wchar_t *)*puVar4);
      local_20 = param_3;
    }
    else {
      FUN_0040a2b0();
      puVar4 = FUN_00416590(&local_20);
      local_4 = 0;
      FUN_00403f30((void *)(param_3 + 0x4134),(wchar_t *)*puVar4);
    }
    local_4 = 0xffffffff;
    piVar1 = (int *)(local_20 + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_20 + -0x10) + 4))((undefined4 *)(local_20 + -0x10));
    }
  }
  ExceptionList = local_c;
  return;
}

