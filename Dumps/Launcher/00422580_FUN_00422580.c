// Address: 0x00422580
// Name: FUN_00422580
// Category: Launcher


void __fastcall FUN_00422580(CDialog *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00499832;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = CDnLauncherDlgSG::vftable;
  local_4 = 0x13;
  FUN_0041c830((CWnd *)(param_1 + 0x5138));
  local_4._0_1_ = 0x12;
  FUN_0041c830((CWnd *)(param_1 + 0x4830));
  local_4._0_1_ = 0x11;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x482c) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x482c) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4,uVar3);
  }
  local_4._0_1_ = 0x10;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x4828) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x4828) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 0xf;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x4824) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x4824) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 0xe;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x4820) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x4820) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 0xd;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x481c) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x481c) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 0xc;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x4818) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x4818) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 0xb;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x4814) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x4814) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 10;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x4810) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x4810) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4._0_1_ = 9;
  FUN_00419600((CWnd *)(param_1 + 0x47ac));
  local_4._0_1_ = 8;
  FUN_00419600((CWnd *)(param_1 + 0x4748));
  local_4._0_1_ = 7;
  FUN_00419600((CWnd *)(param_1 + 0x46e4));
  local_4._0_1_ = 6;
  FUN_00419600((CWnd *)(param_1 + 0x4680));
  local_4._0_1_ = 5;
  FUN_00419600((CWnd *)(param_1 + 0x461c));
  local_4._0_1_ = 4;
  FUN_00419600((CWnd *)(param_1 + 0x45b8));
  local_4._0_1_ = 3;
  FUN_00419600((CWnd *)(param_1 + 0x4554));
  local_4._0_1_ = 2;
  FUN_00419600((CWnd *)(param_1 + 0x44f0));
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0x44e0) = CFont::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0x44e0));
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined ***)(param_1 + 0x44d8) = CFont::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0x44d8));
  local_4 = 0xffffffff;
  FUN_0041e820(param_1);
  ExceptionList = local_c;
  return;
}

