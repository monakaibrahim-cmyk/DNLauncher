// Address: 0x00403930
// Name: FUN_00403930
// Category: Launcher


void __fastcall FUN_00403930(CDialog *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00498e4c;
  local_c = ExceptionList;
  uVar3 = DAT_004c3750 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = CDnFIrstPatchDlg::vftable;
  local_4 = 3;
  if (*(void **)(param_1 + 0xec) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xec));
  }
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x74) + 4))(1,uVar3);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  local_4._0_1_ = 2;
  *(undefined ***)(param_1 + 0xe4) = CFont::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0xe4));
  local_4._0_1_ = 1;
  FUN_00419600((CWnd *)(param_1 + 0x7c));
  local_4 = (uint)local_4._1_3_ << 8;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x78) + -0x10);
  piVar1 = (int *)(*(int *)(param_1 + 0x78) + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}

