// Address: 0x00404230
// Name: FUN_00404230
// Category: Launcher


void __fastcall FUN_00404230(undefined4 *param_1)

{
  int *piVar1;
  HANDLE hHandle;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00497c9c;
  local_c = ExceptionList;
  uVar2 = DAT_004c3750 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *param_1 = DnFirstPatchInfo::vftable;
  iVar3 = DAT_004cbcd8;
  local_4 = 3;
  if (DAT_004cbcd8 != 0) {
    *(undefined4 *)(DAT_004cbcd8 + 0x18) = 1;
    hHandle = *(HANDLE *)(iVar3 + 8);
    if (hHandle != (HANDLE)0xffffffff) {
      WaitForSingleObject(hHandle,0xffffffff);
      iVar3 = DAT_004cbcd8;
    }
    if (iVar3 != 0) {
      (*(code *)**(undefined4 **)(iVar3 + 4))(1,uVar2);
      DAT_004cbcd8 = 0;
    }
  }
  if (param_1[8] != 0) {
    FUN_00404570();
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (param_1[4] != 0) {
    FUN_00404570();
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_4 = local_4 & 0xffffff00;
  puVar4 = (undefined4 *)(param_1[2] + -0x10);
  piVar1 = (int *)(param_1[2] + -4);
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 + -1 < 1) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)(param_1[1] + -0x10);
  piVar1 = (int *)(param_1[1] + -4);
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(*(int *)*puVar4 + 4))(puVar4);
  }
  ExceptionList = local_c;
  return;
}

