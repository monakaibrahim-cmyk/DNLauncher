// Address: 0x00416510
// Name: FUN_00416510
// Category: Launcher


void __cdecl FUN_00416510(wchar_t *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00498ba8;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_00418f70(param_1);
  AfxMessageBox(param_1,0,0);
  local_4 = 0xffffffff;
  pwVar1 = param_1 + -2;
  LOCK();
  iVar2 = *(int *)pwVar1;
  *(int *)pwVar1 = *(int *)pwVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(param_1 + -8) + 4))(param_1 + -8,uVar3);
  }
  ExceptionList = local_c;
  return;
}

