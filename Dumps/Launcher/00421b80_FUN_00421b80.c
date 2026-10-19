// Address: 0x00421b80
// Name: FUN_00421b80
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00421b80(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  CSimpleStringT<wchar_t,0> *this;
  int extraout_ECX;
  int iVar5;
  int extraout_ECX_00;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int local_8c;
  int iStack_88;
  int iStack_84;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_00499de8;
  local_4c = ExceptionList;
  uVar2 = DAT_004c3750 ^ (uint)&stack0xffffff40;
  ExceptionList = &local_4c;
  iVar5 = *(int *)(param_1 + 0xb4);
  if (((iVar5 == 3) || (iVar5 == 5)) || (iVar5 == 7)) {
    iVar5 = param_1;
    if (0 < *(int *)(DAT_004cbea8 + -0xc)) {
      FID_conflict_operator_((void *)(param_1 + 0x412c),&DAT_004cbea8);
      iVar5 = extraout_ECX;
      param_2 = extraout_EDX;
    }
    if ((-1 < DAT_004cbeb4) && ((0 < DAT_004cbeb4 || (DAT_004cbeb0 != 0)))) {
      piVar3 = FUN_00422090(&local_8c,(double)CONCAT44(DAT_004cbeb4,DAT_004cbeb0));
      local_44 = 0;
      FID_conflict_operator_((void *)(param_1 + 0x4130),piVar3);
      local_44 = 0xffffffff;
      param_2 = (int *)(local_8c + -4);
      LOCK();
      iVar5 = *param_2;
      *param_2 = *param_2 + -1;
      UNLOCK();
      iVar5 = iVar5 + -1;
      if (iVar5 < 1) {
        (**(code **)(**(int **)(local_8c + -0x10) + 4))();
        iVar5 = extraout_ECX_00;
        param_2 = extraout_EDX_00;
      }
    }
    *(undefined4 *)(param_1 + 0x188) = _DAT_004cbed0;
    FUN_00422170(iVar5,param_2,param_1);
    *(undefined4 *)(param_1 + 0x170) = DAT_004cbeb8;
    *(undefined4 *)(param_1 + 0x174) = DAT_004cbebc;
    *(undefined4 *)(param_1 + 0x178) = DAT_004cbec0;
    *(undefined4 *)(param_1 + 0x17c) = DAT_004cbec4;
    *(undefined4 *)(param_1 + 0x180) = DAT_004cbec8;
    *(undefined4 *)(param_1 + 0x184) = DAT_004cbecc;
    FUN_00421eb0();
  }
  if (*(int *)(&DAT_004c539c + *(int *)(param_1 + 0xb4) * 8) != -1) {
    if ((*(int *)(param_1 + 0x180) < 1) || (*(int *)(param_1 + 0x184) < 1)) {
      FUN_0040a2b0();
      puVar4 = FUN_00416590(&iStack_88);
      local_44 = 3;
      FID_conflict_operator_((void *)(param_1 + 0x4140),puVar4);
      iVar5 = iStack_88;
    }
    else {
      piVar3 = (int *)FUN_00453ed1();
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403200((undefined4 *)0x80004005);
      }
      local_8c = (**(code **)(*piVar3 + 0xc))(uVar2);
      local_8c = local_8c + 0x10;
      local_44 = 1;
      FUN_00403f30(&local_8c,L"(%d/%d)");
      FUN_0040a2b0();
      FUN_00416590(&iStack_88);
      iVar5 = local_8c;
      local_44._0_1_ = 2;
      FUN_00403f30((void *)(param_1 + 0x4140),L"%s %s");
      local_44 = CONCAT31(local_44._1_3_,1);
      piVar3 = (int *)(iStack_88 + -4);
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 1 || iVar1 + -1 < 0) {
        (**(code **)(**(int **)(iStack_88 + -0x10) + 4))();
      }
    }
    local_44 = 0xffffffff;
    piVar3 = (int *)(iVar5 + -4);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      (**(code **)(**(int **)(iVar5 + -0x10) + 4))();
    }
  }
  if (*(int *)(param_1 + 0xb4) == 9) {
    FUN_0040a2b0();
    this = (CSimpleStringT<wchar_t,0> *)FUN_0040d6f0();
    local_44 = 4;
    if (1 < *(int *)(*(int *)this + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork(this,*(int *)(*(int *)this + -0xc));
    }
    FUN_0040a2b0();
    FUN_00403f30((void *)(param_1 + 0x4128),L"Ver.%d \t (%s)");
    local_44 = 0xffffffff;
    piVar3 = (int *)(iStack_84 + -4);
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 1 || iVar5 + -1 < 0) {
      (**(code **)(**(int **)(iStack_84 + -0x10) + 4))();
    }
  }
  ExceptionList = local_4c;
  return;
}

