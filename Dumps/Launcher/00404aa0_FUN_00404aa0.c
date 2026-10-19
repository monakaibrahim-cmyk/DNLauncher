// Address: 0x00404aa0
// Name: FUN_00404aa0
// Category: Launcher


void FUN_00404aa0(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004978f8;
  local_c = ExceptionList;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = CDnLauncherApp::vftable;
  local_4 = 0;
  if (DAT_004cbcd4 != (HANDLE)0x0) {
    CloseHandle(DAT_004cbcd4);
    DAT_004cbcd4 = (HANDLE)0x0;
  }
  if (DAT_004cbcf0 != (int *)0x0) {
    (**(code **)(*DAT_004cbcf0 + 8))(uVar1);
    if (DAT_004cbcf0 != (int *)0x0) {
      (**(code **)*DAT_004cbcf0)(1);
      DAT_004cbcf0 = (int *)0x0;
    }
  }
  if (DAT_004cbcec != (undefined4 *)0x0) {
    (**(code **)*DAT_004cbcec)(1);
    DAT_004cbcec = (undefined4 *)0x0;
  }
  local_4 = 0xffffffff;
  FUN_00463f8a(param_1);
  ExceptionList = local_c;
  return;
}

