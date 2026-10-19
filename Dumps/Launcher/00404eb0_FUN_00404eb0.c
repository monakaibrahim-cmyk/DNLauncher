// Address: 0x00404eb0
// Name: FUN_00404eb0
// Category: Launcher


void FUN_00404eb0(void)

{
  short sVar1;
  int *piVar2;
  undefined4 *puVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  CStringData *pCVar7;
  CStringData *pCVar8;
  undefined1 auStack_50 [4];
  uint local_4c;
  undefined1 *puStack_48;
  undefined4 *puStack_44;
  undefined1 auStack_40 [4];
  void *local_3c;
  undefined4 local_2c;
  uint local_28;
  short local_24;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined2 local_12;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00499cf0;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)auStack_50;
  ExceptionList = &local_c;
  local_4c = 0;
  local_24 = 0;
  local_22 = 0;
  local_1e = 0;
  local_1a = 0;
  local_16 = 0;
  local_12 = 0;
  local_28 = 7;
  local_2c = 0;
  local_3c = (void *)((uint)local_3c & 0xffff0000);
  local_4 = 0;
  FUN_00416e10();
  piVar2 = (int *)FUN_00453ed1();
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
  uVar5 = local_4c;
  puStack_44 = puVar3 + 4;
  local_4._0_1_ = 1;
  FUN_00418fd0(L"DirectX Version (%u) (%s)");
  if (uVar5 < 0x90000) {
    psVar4 = &local_24;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    FUN_00406500((undefined4 *)&local_24,(int)psVar4 - (int)&local_22 >> 1);
    uVar5 = FUN_00406e70((int)auStack_40);
    if (uVar5 != 0) {
      piVar2 = (int *)FUN_00453ed1();
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00403200((undefined4 *)0x80004005);
      }
      iVar6 = (**(code **)(*piVar2 + 0xc))();
      local_4c = iVar6 + 0x10;
      local_4._0_1_ = 2;
      FUN_0040a2b0();
      puVar3 = FUN_00416590(&puStack_48);
      local_4._0_1_ = 3;
      FUN_00403f30(&local_4c,(wchar_t *)*puVar3);
      local_4._0_1_ = 2;
      piVar2 = (int *)(puStack_48 + -4);
      LOCK();
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(**(int **)(puStack_48 + -0x10) + 4))();
      }
      uVar5 = local_4c;
      puStack_48 = &stack0xffffff98;
      pCVar8 = (CStringData *)(local_4c - 0x10);
      pCVar7 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar8);
      FUN_00416510((wchar_t *)(pCVar7 + 0x10));
      DAT_004cbcd0 = 2;
      local_4._0_1_ = 1;
      piVar2 = (int *)(uVar5 - 4);
      LOCK();
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 + -1 < 1) {
        (**(code **)(**(int **)pCVar8 + 4))();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      piVar2 = puStack_44 + -1;
      LOCK();
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1 || iVar6 + -1 < 0) {
        (**(code **)(*(int *)puStack_44[-4] + 4))();
      }
      if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
        _free(local_3c);
      }
      goto LAB_0040510b;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  piVar2 = puVar3 + 3;
  LOCK();
  iVar6 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar6 == 1 || iVar6 + -1 < 0) {
    (**(code **)(*(int *)*puVar3 + 4))();
  }
  if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
LAB_0040510b:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)auStack_50);
  return;
}

