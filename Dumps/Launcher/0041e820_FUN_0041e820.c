// Address: 0x0041e820
// Name: FUN_0041e820
// Category: Launcher


void __fastcall FUN_0041e820(CDialog *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049966d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = CDnLauncherDlg::vftable;
  local_4 = 0x1c;
  FUN_00419600((CWnd *)(param_1 + 0x4468));
  local_4._0_1_ = 0x1b;
  FUN_00419600((CWnd *)(param_1 + 0x4404));
  local_4._0_1_ = 0x1a;
  FUN_00419600((CWnd *)(param_1 + 0x43a0));
  local_4._0_1_ = 0x19;
  FUN_00419600((CWnd *)(param_1 + 0x433c));
  local_4._0_1_ = 0x18;
  FUN_00419600((CWnd *)(param_1 + 0x42d8));
  local_4._0_1_ = 0x17;
  FUN_00419600((CWnd *)(param_1 + 0x4274));
  local_4._0_1_ = 0x16;
  FUN_00419600((CWnd *)(param_1 + 0x4210));
  local_4._0_1_ = 0x15;
  FUN_00419600((CWnd *)(param_1 + 0x41ac));
  local_4._0_1_ = 0x14;
  FUN_00419600((CWnd *)(param_1 + 0x4148));
  local_4._0_1_ = 0x13;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x4144) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x4144) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  local_4._0_1_ = 0x12;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x4140) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x4140) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  local_4._0_1_ = 0x11;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x413c) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x413c) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  local_4._0_1_ = 0x10;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x4138) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x4138) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  local_4._0_1_ = 0xf;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x4134) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x4134) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  local_4._0_1_ = 0xe;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x4130) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x4130) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  local_4._0_1_ = 0xd;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x412c) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x412c) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  local_4._0_1_ = 0xc;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x4128) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x4128) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar3 + 4))(puVar3);
  }
  local_4._0_1_ = 0xb;
  *(undefined ***)(param_1 + 0x3818) = CCustomSkinButton::vftable;
  FUN_0041c830((CWnd *)(param_1 + 0x3818));
  local_4._0_1_ = 10;
  *(undefined ***)(param_1 + 0x2f0c) = CCustomSkinButton::vftable;
  FUN_0041c830((CWnd *)(param_1 + 0x2f0c));
  local_4._0_1_ = 9;
  FUN_0041c830((CWnd *)(param_1 + 0x2604));
  local_4._0_1_ = 8;
  FUN_0041c830((CWnd *)(param_1 + 0x1cfc));
  local_4._0_1_ = 7;
  FUN_0041c830((CWnd *)(param_1 + 0x13f4));
  local_4._0_1_ = 6;
  FUN_0041c830((CWnd *)(param_1 + 0xaec));
  local_4._0_1_ = 5;
  FUN_0041c830((CWnd *)(param_1 + 0x1e4));
  local_4._0_1_ = 4;
  FID_conflict__CHotKeyCtrl((CWnd *)(param_1 + 400));
  local_4._0_1_ = 3;
  FID_conflict__CHotKeyCtrl((CWnd *)(param_1 + 0x11c));
  local_4._0_1_ = 2;
  FID_conflict__CHotKeyCtrl((CWnd *)(param_1 + 200));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)(param_1 + 0xac) = CFont::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0xac));
  if (*(void **)(param_1 + 0x78) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}

