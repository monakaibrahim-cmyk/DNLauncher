// Address: 0x0041e560
// Name: FUN_0041e560
// Category: Launcher


void __thiscall FUN_0041e560(void *this,int *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  void *pvStack_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  byte abStack_20 [16];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00498319;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&pvStack_34;
  ExceptionList = &local_c;
  iVar8 = 0;
  local_4 = 0;
  local_2c = param_1;
  local_30 = 0;
  uVar7 = 0;
  puVar3 = (undefined1 *)((int)this + 0x46);
  do {
    *(undefined1 *)((int)&local_28 + uVar7) = puVar3[-2];
    *(undefined1 *)((int)&local_28 + uVar7 + 1) = puVar3[-1];
    *(undefined1 *)((int)&local_28 + uVar7 + 2) = *puVar3;
    *(undefined1 *)((int)&local_28 + uVar7 + 3) = puVar3[1];
    uVar7 = uVar7 + 4;
    puVar3 = puVar3 + 4;
  } while (uVar7 < 8);
  FUN_0041e780(this,&DAT_004c5408);
  FUN_0041e780(this,&local_28);
  uVar7 = 0;
  pbVar4 = (byte *)((int)this + 0x4e);
  do {
    abStack_20[uVar7] = pbVar4[-2];
    abStack_20[uVar7 + 1] = pbVar4[-1];
    abStack_20[uVar7 + 2] = *pbVar4;
    abStack_20[uVar7 + 3] = pbVar4[1];
    uVar7 = uVar7 + 4;
    pbVar4 = pbVar4 + 4;
  } while (uVar7 < 0x10);
  piVar5 = (int *)FUN_00453ed1();
  if (piVar5 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar5 + 0xc))();
    *param_1 = iVar6 + 0x10;
    local_4 = 0;
    local_30 = 1;
    while (piVar5 = (int *)FUN_00453ed1(), piVar5 != (int *)0x0) {
      iVar6 = (**(code **)(*piVar5 + 0xc))();
      pvStack_34 = (void *)(iVar6 + 0x10);
      local_4._0_1_ = 1;
      local_4._1_3_ = 0;
      if (abStack_20[iVar8] == 0) {
        piVar5 = FUN_004035c0(&local_28,(short *)&DAT_004b3450);
        local_4._0_1_ = 2;
        FID_conflict_operator_(&pvStack_34,piVar5);
        local_4._0_1_ = 1;
        piVar5 = (int *)(local_28 + -4);
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 1 || iVar6 + -1 < 0) {
          (**(code **)(**(int **)(local_28 + -0x10) + 4))((undefined4 *)(local_28 + -0x10));
        }
      }
      else {
        if (abStack_20[iVar8] < 0x10) {
          pwVar9 = L"0%x";
        }
        else {
          pwVar9 = L"%x";
        }
        FUN_00403f30(&pvStack_34,pwVar9);
      }
      pvVar2 = pvStack_34;
      FUN_00403380(param_1,pvStack_34,*(int *)((int)pvStack_34 + -0xc));
      puVar1 = (undefined4 *)((int)pvVar2 + -0x10);
      local_4 = (uint)local_4._1_3_ << 8;
      piVar5 = (int *)((int)pvVar2 + -4);
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(*(int *)*puVar1 + 4))(puVar1);
      }
      iVar8 = iVar8 + 1;
      if (0xf < iVar8) {
        ExceptionList = local_c;
        __security_check_cookie(local_10 ^ (uint)&pvStack_34);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80004005);
}

