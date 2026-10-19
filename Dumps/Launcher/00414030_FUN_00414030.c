// Address: 0x00414030
// Name: FUN_00414030
// Category: Launcher


/* WARNING: Removing unreachable block (ram,0x00414451) */

undefined4 FUN_00414030(int param_1)

{
  undefined4 *puVar1;
  void *this;
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  LPCSTR pCVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  void *unaff_EDI;
  wchar_t *pwVar12;
  uint *puVar13;
  int local_2c;
  uint local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c [2];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0049aa18;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00418fd0(L"ApplyPatchList");
  puVar7 = *(undefined4 **)((int)unaff_EDI + 0x94);
  if (puVar7 < *(undefined4 **)((int)unaff_EDI + 0x90)) {
    FUN_00475b26();
  }
  puVar1 = *(undefined4 **)((int)unaff_EDI + 0x90);
  if (*(undefined4 **)((int)unaff_EDI + 0x94) < puVar1) {
    FUN_00475b26();
  }
  if (puVar1 != puVar7) {
    iVar3 = FUN_00415de0(puVar7);
    *(int *)((int)unaff_EDI + 0x94) = iVar3;
  }
  if (*(int *)(param_1 + 0x2a4) == 0) {
    local_1c[0] = (uint *)0x0;
  }
  else {
    local_1c[0] = (uint *)((*(int *)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2a4)) / 0x13c);
  }
  local_28 = 0;
  if (0 < (int)local_1c[0]) {
    local_24 = (uint *)0x0;
    do {
      if ((*(int *)(param_1 + 0x2a4) == 0) ||
         ((uint)((*(int *)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2a4)) / 0x13c) <= local_28)) {
        FUN_00475b26();
      }
      pCVar8 = (LPCSTR)(*(int *)(param_1 + 0x2a4) + (int)local_24);
      uVar9 = local_28;
      if (pCVar8 != (LPCSTR)0x0) {
        uVar10 = 0;
        local_2c = 0;
        while( true ) {
          uVar9 = local_28;
          iVar3 = 0;
          if (*(int *)((int)unaff_EDI + 0x80) != 0) {
            iVar3 = (*(int *)((int)unaff_EDI + 0x84) - *(int *)((int)unaff_EDI + 0x80)) / 0x1c;
          }
          if (iVar3 <= (int)uVar10) break;
          if ((*(int *)((int)unaff_EDI + 0x80) == 0) ||
             ((uint)((*(int *)((int)unaff_EDI + 0x84) - *(int *)((int)unaff_EDI + 0x80)) / 0x1c) <=
              uVar10)) {
            FUN_00475b26();
          }
          iVar3 = *(int *)((int)unaff_EDI + 0x80) + local_2c;
          if (*(uint *)(iVar3 + 0x18) < 0x10) {
            pcVar11 = (char *)(iVar3 + 4);
          }
          else {
            pcVar11 = *(char **)(iVar3 + 4);
          }
          iVar3 = __stricmp(pcVar11,pCVar8 + 1);
          uVar9 = local_28;
          if (iVar3 == 0) goto LAB_00414276;
          uVar10 = uVar10 + 1;
          local_2c = local_2c + 0x1c;
        }
        local_2c = 0;
        iVar3 = FUN_00413870(local_28,param_1,pCVar8);
        if (iVar3 == 0) {
          FUN_00416180(local_1c,pCVar8);
          local_c = 0;
          pwVar12 = L"PatchFileExist Failed!";
LAB_004142ba:
          FUN_00418f70(pwVar12);
          puVar5 = local_1c[0];
          goto LAB_004142cd;
        }
        if (local_2c == 0) {
          iVar3 = FUN_00413af0(unaff_EDI,param_1,pCVar8,&local_2c);
          if (iVar3 == 0) {
            FUN_00416180(local_1c,pCVar8);
            local_c = 1;
            pwVar12 = L"PatchFileSuitableSpace Failed!";
            goto LAB_004142ba;
          }
          if (local_2c != 0) goto LAB_00414228;
          FUN_00413c80((int)unaff_EDI,uVar9,(undefined4 *)pCVar8);
        }
        else {
LAB_00414228:
          *(int *)((int)unaff_EDI + 0x9c) = *(int *)((int)unaff_EDI + 0x9c) + 1;
          DAT_004cbeb8 = *(int *)((int)unaff_EDI + 0x9c);
          DAT_004cbebc = DAT_004cbeb8 >> 0x1f;
          DAT_004cbec0 = *(int *)((int)unaff_EDI + 0xa0);
          DAT_004cbec4 = DAT_004cbec0 >> 0x1f;
        }
        if (*(int *)((int)unaff_EDI + 0x48) != 0) {
          uVar9 = 0;
          while( true ) {
            this = *(void **)((int)unaff_EDI + 0x50);
            if (this == (void *)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)((int)unaff_EDI + 0x54) - (int)this >> 2;
            }
            if (iVar3 <= (int)uVar9) break;
            if ((this == (void *)0x0) ||
               ((uint)(*(int *)((int)unaff_EDI + 0x54) - (int)this >> 2) <= uVar9)) {
              FUN_00475b26();
            }
            FUN_00429370(*(void **)((int)unaff_EDI + 0x50),
                         *(int *)((int)*(void **)((int)unaff_EDI + 0x50) + uVar9 * 4));
            if ((*(int *)((int)unaff_EDI + 0x50) == 0) ||
               ((uint)(*(int *)((int)unaff_EDI + 0x54) - *(int *)((int)unaff_EDI + 0x50) >> 2) <=
                uVar9)) {
              FUN_00475b26();
            }
            iVar3 = *(int *)((int)unaff_EDI + 0x50);
            if (*(int *)(iVar3 + uVar9 * 4) != 0) {
              if ((iVar3 == 0) || ((uint)(*(int *)((int)unaff_EDI + 0x54) - iVar3 >> 2) <= uVar9)) {
                FUN_00475b26();
              }
              puVar7 = *(undefined4 **)(*(int *)((int)unaff_EDI + 0x50) + uVar9 * 4);
              if (puVar7 != (undefined4 *)0x0) {
                (**(code **)*puVar7)(1);
              }
              if ((*(int *)((int)unaff_EDI + 0x50) == 0) ||
                 ((uint)(*(int *)((int)unaff_EDI + 0x54) - *(int *)((int)unaff_EDI + 0x50) >> 2) <=
                  uVar9)) {
                FUN_00475b26();
              }
              *(undefined4 *)(*(int *)((int)unaff_EDI + 0x50) + uVar9 * 4) = 0;
            }
            uVar9 = uVar9 + 1;
          }
          FUN_00429370(this,param_1);
          ExceptionList = local_14;
          return 4;
        }
      }
LAB_00414276:
      local_24 = local_24 + 0x4f;
      local_28 = uVar9 + 1;
    } while ((int)local_28 < (int)local_1c[0]);
  }
  uVar9 = 0;
  while( true ) {
    iVar3 = *(int *)((int)unaff_EDI + 0x50);
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((int)unaff_EDI + 0x54) - iVar3 >> 2;
    }
    if (iVar4 <= (int)uVar9) break;
    if ((iVar3 == 0) || ((uint)(*(int *)((int)unaff_EDI + 0x54) - iVar3 >> 2) <= uVar9)) {
      FUN_00475b26();
    }
    FUN_0042a800();
    uVar9 = uVar9 + 1;
  }
  puVar5 = *(uint **)((int)unaff_EDI + 0x90);
  if (*(uint **)((int)unaff_EDI + 0x94) < puVar5) {
    FUN_00475b26();
  }
  while( true ) {
    local_1c[0] = *(uint **)((int)unaff_EDI + 0x94);
    local_20 = puVar5;
    if (local_1c[0] < *(uint **)((int)unaff_EDI + 0x90)) {
      FUN_00475b26();
    }
    if (puVar5 == local_1c[0]) {
      ExceptionList = local_14;
      return 1;
    }
    if (*(uint **)((int)unaff_EDI + 0x94) <= puVar5) {
      FUN_00475b26();
    }
    uVar9 = puVar5[1];
    if ((*(int *)(param_1 + 0x2a4) == 0) ||
       (iVar3 = *(int *)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2a4),
       (uint)(iVar3 / 0x13c) <= uVar9)) {
      FUN_00475b26();
      iVar3 = extraout_ECX;
    }
    pcVar11 = (char *)(uVar9 * 0x13c + *(int *)(param_1 + 0x2a4));
    puVar7 = FUN_00429b00(iVar3,pcVar11);
    puVar5 = local_20;
    if (puVar7 == (undefined4 *)0x0) break;
    if ((*(uint **)((int)unaff_EDI + 0x94) <= local_20) &&
       (FUN_00475b26(), *(uint **)((int)unaff_EDI + 0x94) <= puVar5)) {
      FUN_00475b26();
    }
    local_1c[0] = (uint *)*puVar5;
    if ((*(int *)((int)unaff_EDI + 0x50) == 0) ||
       ((uint)(*(int *)((int)unaff_EDI + 0x54) - *(int *)((int)unaff_EDI + 0x50) >> 2) <=
        local_1c[0])) {
      FUN_00475b26();
    }
    cVar2 = FUN_0042ab00(puVar7,*(int *)(*(int *)((int)unaff_EDI + 0x50) + (int)local_1c[0] * 4),
                         puVar5[2],0);
    if (cVar2 == '\0') {
      FUN_00418f70(L"Patch File Failed!");
      pcVar6 = *(code **)*puVar7;
      puVar13 = (uint *)&DAT_00000001;
LAB_004142ea:
      (*pcVar6)(puVar13);
      ExceptionList = local_14;
      return 0;
    }
    (**(code **)*puVar7)(1);
    *(int *)((int)unaff_EDI + 0x9c) = *(int *)((int)unaff_EDI + 0x9c) + 1;
    DAT_004cbeb8 = *(int *)((int)unaff_EDI + 0x9c);
    DAT_004cbebc = DAT_004cbeb8 >> 0x1f;
    DAT_004cbec0 = *(int *)((int)unaff_EDI + 0xa0);
    DAT_004cbec4 = DAT_004cbec0 >> 0x1f;
    if (*(uint **)((int)unaff_EDI + 0x94) <= puVar5) {
      FUN_00475b26();
    }
    puVar5 = puVar5 + 3;
  }
  FUN_00416180(&local_24,pcVar11);
  local_c = 2;
  FUN_00418f70(L"Reserve File GetFileInfo Failed!");
  puVar5 = local_24;
LAB_004142cd:
  local_c = 0xffffffff;
  puVar13 = puVar5 + -4;
  puVar5 = puVar5 + -1;
  LOCK();
  uVar9 = *puVar5;
  *puVar5 = *puVar5 - 1;
  UNLOCK();
  if (uVar9 != 1 && -1 < (int)(uVar9 - 1)) {
    ExceptionList = local_14;
    return 0;
  }
  pcVar6 = *(code **)(*(int *)*puVar13 + 4);
  goto LAB_004142ea;
}

