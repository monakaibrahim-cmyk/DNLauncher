// Address: 0x0040c890
// Name: FUN_0040c890
// Category: Launcher


void FUN_0040c890(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,
                 int param_11)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_40;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar2 = param_11;
  puStack_8 = &LAB_004996fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 5;
  FUN_00410200(&local_40);
  local_4 = CONCAT31(local_4._1_3_,6);
  local_26 = param_2;
  local_28 = param_3;
  local_24 = param_4;
  FID_conflict_operator_(&local_40,&param_5);
  FID_conflict_operator_(local_3c,&param_6);
  FID_conflict_operator_(local_38,&param_7);
  FID_conflict_operator_(local_34,&param_8);
  FID_conflict_operator_(local_30,&param_9);
  FID_conflict_operator_(local_2c,&param_10);
  uVar4 = *(uint *)(iVar2 + 4);
  if (*(uint *)(iVar2 + 8) < uVar4) {
    FUN_00475b26();
  }
  while( true ) {
    uVar3 = *(uint *)(iVar2 + 8);
    if (uVar3 < *(uint *)(iVar2 + 4)) {
      FUN_00475b26();
    }
    if (uVar4 == uVar3) break;
    if (*(uint *)(iVar2 + 8) <= uVar4) {
      FUN_00475b26();
    }
    FUN_0040d820();
    if (*(uint *)(iVar2 + 8) <= uVar4) {
      FUN_00475b26();
    }
    uVar4 = uVar4 + 8;
  }
  FUN_0040d8c0(&local_40);
  local_4._0_1_ = 5;
  FUN_004100b0(&local_40);
  local_4._0_1_ = 4;
  piVar1 = (int *)(param_5 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(**(int **)(param_5 + -0x10) + 4))((undefined4 *)(param_5 + -0x10));
  }
  local_4._0_1_ = 3;
  piVar1 = (int *)(param_6 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(**(int **)(param_6 + -0x10) + 4))((undefined4 *)(param_6 + -0x10));
  }
  local_4._0_1_ = 2;
  piVar1 = (int *)(param_7 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(**(int **)(param_7 + -0x10) + 4))((undefined4 *)(param_7 + -0x10));
  }
  local_4._0_1_ = 1;
  piVar1 = (int *)(param_8 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(**(int **)(param_8 + -0x10) + 4))((undefined4 *)(param_8 + -0x10));
  }
  local_4 = (uint)local_4._1_3_ << 8;
  piVar1 = (int *)(param_9 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 1) {
    (**(code **)(**(int **)(param_9 + -0x10) + 4))((undefined4 *)(param_9 + -0x10));
  }
  local_4 = 0xffffffff;
  piVar1 = (int *)(param_10 + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(param_10 + -0x10) + 4))((undefined4 *)(param_10 + -0x10));
  }
  ExceptionList = local_c;
  return;
}

