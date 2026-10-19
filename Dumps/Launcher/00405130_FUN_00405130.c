// Address: 0x00405130
// Name: FUN_00405130
// Category: Launcher


void FUN_00405130(void)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  void *pvVar4;
  short *psVar5;
  LPWSTR pWVar6;
  int iVar7;
  int extraout_ECX;
  LPCWSTR lpFirst;
  uint uVar8;
  void *pvVar9;
  void *pvVar10;
  void *local_60;
  undefined1 local_5c [4];
  void *local_58;
  void *local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_34;
  uint local_30;
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00499c9e;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&local_60;
  ExceptionList = &local_c;
  local_14 = 7;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffff0000);
  local_4 = 0;
  psVar5 = DAT_004cbcf4;
  do {
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar2 != 0);
  FUN_00406500((undefined4 *)DAT_004cbcf4,(int)psVar5 - (int)(DAT_004cbcf4 + 1) >> 1);
  local_58 = (void *)0x0;
  local_54 = (void *)0x0;
  local_50 = 0;
  local_4._0_1_ = 1;
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  FUN_00406500((undefined4 *)&DAT_004b0380,1);
  local_4._0_1_ = 2;
  FUN_00424740(local_5c,(int)local_48);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  pvVar9 = (void *)0x0;
  for (uVar8 = 0;
      (pvVar10 = local_54, local_60 = pvVar9, local_58 != (void *)0x0 &&
      (uVar8 < (uint)(((int)local_54 - (int)local_58) / 0x1c))); uVar8 = uVar8 + 1) {
    if (*(uint *)((int)pvVar9 + 0x18 + (int)local_58) < 8) {
      lpFirst = (LPCWSTR)((int)pvVar9 + 4 + (int)local_58);
    }
    else {
      lpFirst = *(LPCWSTR *)((int)pvVar9 + 4 + (int)local_58);
    }
    pWVar6 = StrStrW(lpFirst,L"language:");
    if (pWVar6 != (LPWSTR)0x0) {
      if ((local_58 == (void *)0x0) || ((uint)(((int)local_54 - (int)local_58) / 0x1c) <= uVar8)) {
        FUN_00475b26();
      }
      pvVar10 = local_54;
      pvVar9 = local_58;
      FUN_004062c0();
      if ((pvVar9 == (void *)0x0) || ((uint)(((int)pvVar10 - (int)pvVar9) / 0x1c) <= uVar8)) {
        FUN_00475b26();
      }
      pvVar9 = local_60;
      FUN_00406100();
      if ((local_58 == (void *)0x0) ||
         (iVar7 = (int)local_54 - (int)local_58, (uint)(iVar7 / 0x1c) <= uVar8)) {
        FUN_00475b26();
        iVar7 = extraout_ECX;
      }
      if (*(uint *)((int)pvVar9 + 0x18 + (int)local_58) < 8) {
        psVar5 = (short *)((int)pvVar9 + 4 + (int)local_58);
      }
      else {
        psVar5 = *(short **)((int)pvVar9 + 4 + (int)local_58);
      }
      local_4c = &stack0xffffff88;
      FUN_004035c0(&stack0xffffff88,psVar5);
      uVar3 = local_4 >> 8;
      if ((DAT_004cc218 & 1) == 0) {
        DAT_004cc218 = DAT_004cc218 | 1;
        local_4._0_1_ = 4;
        FUN_00409d50();
        _atexit((_func_4879 *)&LAB_0049b250);
        uVar3 = (uint)local_4._1_3_;
      }
      local_4._1_3_ = (uint3)uVar3;
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_0040a4b0(0x4cc198,iVar7);
      pvVar9 = local_60;
    }
    pvVar9 = (void *)((int)pvVar9 + 0x1c);
  }
  if (local_54 < local_58) {
    FUN_00475b26();
  }
  pvVar9 = local_58;
  if (local_54 < local_58) {
    FUN_00475b26();
  }
  pvVar4 = local_54;
  if (pvVar9 != pvVar10) {
    local_60 = (void *)((int)pvVar9 + (((int)local_54 - (int)pvVar10) / 0x1c) * 0x1c);
    if (pvVar10 != local_54) {
      iVar7 = (int)pvVar9 - (int)pvVar10;
      do {
        FUN_004069c0((void *)(iVar7 + (int)pvVar10),0,0xffffffff);
        pvVar10 = (void *)((int)pvVar10 + 0x1c);
      } while (pvVar10 != pvVar4);
    }
    FUN_00406e30();
    local_54 = local_60;
  }
  if (0 < *(int *)(DAT_004cbda0 + -0xc)) {
    if (1 < *(int *)(DAT_004cbda0 + -4)) {
      ATL::CSimpleStringT<wchar_t,0>::Fork
                ((CSimpleStringT<wchar_t,0> *)&DAT_004cbda0,*(int *)(DAT_004cbda0 + -0xc));
    }
    iVar7 = *(int *)(DAT_004cbda0 + -0xc);
    if (*(short *)(DAT_004cbda0 + -2 + iVar7 * 2) != 0x2f) {
      iVar1 = iVar7 + 1;
      if ((int)(1U - *(int *)(DAT_004cbda0 + -4) | *(int *)(DAT_004cbda0 + -8) - iVar1) < 0) {
        ATL::CSimpleStringT<char,0>::PrepareWrite2((CSimpleStringT<char,0> *)&DAT_004cbda0,iVar1);
      }
      *(undefined2 *)(DAT_004cbda0 + iVar7 * 2) = 0x2f;
      if ((iVar1 < 0) || (*(int *)(DAT_004cbda0 + -8) < iVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_00403200((undefined4 *)0x80070057);
      }
      *(int *)(DAT_004cbda0 + -0xc) = iVar1;
      *(undefined2 *)(DAT_004cbda0 + iVar1 * 2) = 0;
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_00406e30();
                    /* WARNING: Subroutine does not return */
    _free(local_58);
  }
  local_58 = (void *)0x0;
  local_54 = (void *)0x0;
  local_50 = 0;
  if (local_14 < 8) {
    ExceptionList = local_c;
    __security_check_cookie(local_10 ^ (uint)&local_60);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_28);
}

