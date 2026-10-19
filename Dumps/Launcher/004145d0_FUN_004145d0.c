// Address: 0x004145d0
// Name: FUN_004145d0
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_004145d0(int param_1,void *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  BOOL BVar6;
  int *piVar7;
  CStringData *pCVar8;
  int iVar9;
  int extraout_ECX;
  DWORD extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar10;
  undefined4 extraout_ECX_03;
  wchar_t *extraout_ECX_04;
  void *extraout_ECX_05;
  void *this;
  uint uVar11;
  CStringData *pCVar12;
  int iVar13;
  wchar_t *pwVar14;
  undefined1 auStack_6130 [4];
  int local_612c;
  undefined1 *local_6128;
  void *local_6124;
  undefined4 *local_6120;
  undefined1 *puStack_611c;
  char local_6118;
  undefined1 local_6117 [263];
  char local_6010 [8192];
  char local_4010;
  undefined1 local_400f [8191];
  CHAR local_2010;
  undefined1 local_200f [8191];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049a24c;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)auStack_6130;
  ExceptionList = &local_c;
  local_6124 = param_2;
  local_6128 = &DAT_00000001;
  FUN_00418fd0(L"ApplyCopyList");
  uVar11 = 0;
  iVar13 = 0;
  do {
    iVar9 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      iVar9 = (*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80)) / 0x1c;
    }
    local_612c = iVar13;
    if (iVar9 <= (int)uVar11) goto LAB_00414d44;
    local_6118 = '\0';
    _memset(local_6117,0,0x103);
    if ((*(int *)(param_1 + 0x80) == 0) ||
       (iVar9 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80), (uint)(iVar9 / 0x1c) <= uVar11)
       ) {
      FUN_00475b26();
      iVar9 = extraout_ECX;
    }
    FUN_00415dc0(iVar9,&local_6118,"\\%s");
    local_6120 = (undefined4 *)FUN_004299c0(extraout_ECX_00,&local_6118);
    if (local_6120 != (undefined4 *)0x0) {
      local_6010[0] = '\0';
      _memset(local_6010 + 1,0,0x1fff);
      local_2010 = '\0';
      _memset(local_200f,0,0x1fff);
      pcVar4 = local_6010;
      do {
        cVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
      if ((*(int *)(param_1 + 0x80) == 0) ||
         ((uint)((*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80)) / 0x1c) <= uVar11)) {
        FUN_00475b26();
      }
      iVar13 = *(int *)(param_1 + 0x80) + iVar13;
      if (*(uint *)(iVar13 + 0x18) < 0x10) {
        pcVar5 = (char *)(iVar13 + 4);
      }
      else {
        pcVar5 = *(char **)(iVar13 + 4);
      }
      pcVar1 = pcVar5 + 1;
      do {
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      if ((0x104 < (int)pcVar4 - (int)(local_6010 + 1)) || (0x104 < (int)pcVar5 - (int)pcVar1)) {
        FUN_00418fd0(L"nSize1 > _MAX_PATH || nSize2 > _MAX_PATH ");
      }
      if ((*(int *)(param_1 + 0x80) == 0) ||
         ((uint)((*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80)) / 0x1c) <= uVar11)) {
        FUN_00475b26();
      }
      FUN_00425ef0();
      if ((*(int *)(param_1 + 0x80) == 0) ||
         ((uint)((*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80)) / 0x1c) <= uVar11)) {
        FUN_00475b26();
      }
      iVar13 = local_612c;
      FUN_00424860();
      if ((*(int *)(param_1 + 0x80) == 0) ||
         ((uint)((*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80)) / 0x1c) <= uVar11)) {
        FUN_00475b26();
      }
      iVar13 = *(int *)(param_1 + 0x80) + iVar13;
      if (*(uint *)(iVar13 + 0x18) < 0x10) {
        pcVar4 = (char *)(iVar13 + 4);
      }
      else {
        pcVar4 = *(char **)(iVar13 + 4);
      }
      iVar13 = __stricmp(pcVar4,"DnLauncher.exe");
      uVar10 = extraout_ECX_01;
      if (iVar13 == 0) {
        FUN_00416610(L"dnlauncher.tmp");
        iVar13 = FID_conflict___access((wchar_t *)"DnLauncher.exe",0);
        if ((iVar13 == 0) && (BVar6 = MoveFileW(L"DnLauncher.exe",L"dnlauncher.tmp"), BVar6 == 0)) {
          piVar7 = (int *)FUN_00453ed1();
          if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00403200((undefined4 *)0x80004005);
          }
          local_612c = (**(code **)(*piVar7 + 0xc))();
          local_612c = local_612c + 0x10;
          iStack_4 = 0;
          FUN_0040a2b0();
          FUN_00416590(&local_6128);
          iStack_4._0_1_ = 1;
          FUN_00403f30(&local_612c,L"%s %d");
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          piVar7 = (int *)(local_6128 + -4);
          LOCK();
          iVar13 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar13 == 1 || iVar13 + -1 < 0) {
            (**(code **)(**(int **)(local_6128 + -0x10) + 4))();
          }
          iVar13 = local_612c;
          puStack_611c = &stack0xffff9eb8;
          pCVar12 = (CStringData *)(local_612c + -0x10);
          pCVar8 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar12);
          FUN_00416510((wchar_t *)(pCVar8 + 0x10));
          (**(code **)*local_6120)();
          FUN_00429370(local_6124,(int)local_6124);
          FUN_00418f70(L"Launcher Patch Failed!");
          iStack_4 = 0xffffffff;
          piVar7 = (int *)(iVar13 + -4);
          LOCK();
          iVar13 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar13 == 1 || iVar13 + -1 < 0) {
            (**(code **)(**(int **)pCVar12 + 4))();
          }
          goto LAB_00414d44;
        }
        FUN_00418fd0(L"Apply Launcher Patch");
        local_6128 = (undefined1 *)0x2;
        uVar10 = extraout_ECX_02;
      }
      if (local_6010[0] != '\0') {
        FUN_00426120(local_6010);
        GetCurrentDirectoryA(0x2000,&local_2010);
        local_4010 = '\0';
        _memset(local_400f,0,0x1fff);
        _strcpy_s(&local_4010,0x2000,&local_2010);
        _strcat_s(&local_4010,0x2000,"\\");
        _strcat_s(&local_4010,0x2000,local_6010);
        SetCurrentDirectoryA(&local_4010);
        uVar10 = extraout_ECX_03;
      }
      puVar2 = local_6120;
      cVar3 = FUN_00428e10(uVar10);
      if (cVar3 == '\0') {
        iVar13 = __stricmp((char *)(puVar2 + 1),"DnLauncher.exe");
        if (iVar13 == 0) {
          piVar7 = (int *)FUN_00453ed1();
          if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00403200((undefined4 *)0x80004005);
          }
          local_612c = (**(code **)(*piVar7 + 0xc))();
          local_612c = local_612c + 0x10;
          iStack_4 = 2;
          FUN_0040a2b0();
          FUN_00416590(&puStack_611c);
          iStack_4._0_1_ = 3;
          FUN_00403f30(&local_612c,L"%s %d");
          iStack_4 = CONCAT31(iStack_4._1_3_,2);
          piVar7 = (int *)(puStack_611c + -4);
          LOCK();
          iVar13 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar13 == 1 || iVar13 + -1 < 0) {
            (**(code **)(**(int **)(puStack_611c + -0x10) + 4))();
          }
          iVar13 = local_612c;
          local_6128 = &stack0xffff9eb8;
          pCVar12 = (CStringData *)(local_612c + -0x10);
          pCVar8 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar12);
          FUN_00416510((wchar_t *)(pCVar8 + 0x10));
          iStack_4 = 0xffffffff;
          piVar7 = (int *)(iVar13 + -4);
          LOCK();
          iVar13 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar13 == 1 || iVar13 + -1 < 0) {
            (**(code **)(**(int **)pCVar12 + 4))();
          }
        }
        else {
          FUN_0040a2b0();
          local_6128 = &stack0xffff9eb8;
          pwVar14 = extraout_ECX_04;
          FUN_00416590(&stack0xffff9eb8);
          FUN_00416510(pwVar14);
        }
        GetLastError();
        FUN_00418fd0(L"%s File Copy Failed! (%d)");
        (**(code **)*local_6120)();
        FUN_00429370(local_6124,(int)local_6124);
        goto LAB_00414d44;
      }
      if (local_6010[0] != '\0') {
        SetCurrentDirectoryA(&local_2010);
      }
      FUN_00418fd0(L"Copy File Name: [%s]");
      (**(code **)*puVar2)();
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
      DAT_004cbeb8 = *(int *)(param_1 + 0x9c);
      DAT_004cbebc = DAT_004cbeb8 >> 0x1f;
      DAT_004cbec0 = *(int *)(param_1 + 0xa0);
      DAT_004cbec4 = DAT_004cbec0 >> 0x1f;
      if (*(int *)(param_1 + 0x48) != 0) {
        uVar11 = 0;
        while( true ) {
          this = *(void **)(param_1 + 0x50);
          if (this == (void *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *(int *)(param_1 + 0x54) - (int)this >> 2;
          }
          if (iVar13 <= (int)uVar11) break;
          if ((this == (void *)0x0) || ((uint)(*(int *)(param_1 + 0x54) - (int)this >> 2) <= uVar11)
             ) {
            FUN_00475b26();
            this = extraout_ECX_05;
          }
          FUN_00429370(this,*(int *)(*(int *)(param_1 + 0x50) + uVar11 * 4));
          if ((*(int *)(param_1 + 0x50) == 0) ||
             ((uint)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2) <= uVar11)) {
            FUN_00475b26();
          }
          iVar13 = *(int *)(param_1 + 0x50);
          if (*(int *)(iVar13 + uVar11 * 4) != 0) {
            if ((iVar13 == 0) || ((uint)(*(int *)(param_1 + 0x54) - iVar13 >> 2) <= uVar11)) {
              FUN_00475b26();
            }
            puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x50) + uVar11 * 4);
            if (puVar2 != (undefined4 *)0x0) {
              (**(code **)*puVar2)();
            }
            if ((*(int *)(param_1 + 0x50) == 0) ||
               ((uint)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2) <= uVar11)) {
              FUN_00475b26();
            }
            *(undefined4 *)(*(int *)(param_1 + 0x50) + uVar11 * 4) = 0;
          }
          uVar11 = uVar11 + 1;
        }
        FUN_00429370(local_6124,(int)local_6124);
LAB_00414d44:
        ExceptionList = local_c;
        __security_check_cookie(local_10 ^ (uint)auStack_6130);
        return;
      }
    }
    uVar11 = uVar11 + 1;
    iVar13 = local_612c + 0x1c;
  } while( true );
}

