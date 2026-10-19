// Address: 0x00408610
// Name: FUN_00408610
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00408610(CDialog *param_1)

{
  int *piVar1;
  int iVar2;
  LPCWSTR lpString;
  HWND pHVar3;
  CWnd *pCVar4;
  undefined *puVar5;
  CWnd *pCVar6;
  undefined4 *puVar7;
  int iVar8;
  LRESULT LVar9;
  LPARAM *pLVar10;
  wchar_t *extraout_ECX;
  uint uVar11;
  code *pcVar12;
  int unaff_EDI;
  undefined4 uVar13;
  WPARAM wParam;
  undefined4 uVar14;
  wchar_t *pwVar15;
  undefined1 *puStack_70;
  CWnd *local_6c;
  int iStack_68;
  CDialog *local_64;
  WCHAR aWStack_60 [38];
  undefined4 uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ac68;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&puStack_70;
  lpString = (LPCWSTR)(DAT_004c3750 ^ (uint)&stack0xffffff80);
  ExceptionList = &local_c;
  local_64 = param_1;
  CDialog::OnInitDialog(param_1);
  pHVar3 = GetParent(*(HWND *)(param_1 + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  puVar5 = FUN_00407210();
  FUN_00407530((int)puVar5,*(HWND *)(param_1 + 0x20));
  pCVar6 = CWnd::GetDlgItem((CWnd *)param_1,0x1b69);
  if (pCVar6 != (CWnd *)0x0) {
    FUN_0040a2b0();
    puVar7 = FUN_00416590(&local_6c);
    local_4 = 0;
    FID_conflict_SetWindowTextW((HWND)*puVar7,lpString);
    local_4 = 0xffffffff;
    pCVar6 = local_6c + -4;
    LOCK();
    iVar2 = *(int *)pCVar6;
    *(int *)pCVar6 = *(int *)pCVar6 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_6c + -0x10) + 4))();
    }
  }
  pCVar6 = CWnd::GetDlgItem((CWnd *)local_64,0x1b66);
  if (pCVar6 != (CWnd *)0x0) {
    FUN_0040a2b0();
    puVar7 = FUN_00416590(&local_6c);
    local_4 = 1;
    FID_conflict_SetWindowTextW((HWND)*puVar7,lpString);
    local_4 = 0xffffffff;
    pCVar6 = local_6c + -4;
    LOCK();
    iVar2 = *(int *)pCVar6;
    *(int *)pCVar6 = *(int *)pCVar6 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_6c + -0x10) + 4))();
    }
  }
  pCVar6 = CWnd::GetDlgItem((CWnd *)local_64,0x1b65);
  if (pCVar6 != (CWnd *)0x0) {
    FUN_0040a2b0();
    puVar7 = FUN_00416590(&local_6c);
    local_4 = 2;
    FID_conflict_SetWindowTextW((HWND)*puVar7,lpString);
    local_4 = 0xffffffff;
    pCVar6 = local_6c + -4;
    LOCK();
    iVar2 = *(int *)pCVar6;
    *(int *)pCVar6 = *(int *)pCVar6 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_6c + -0x10) + 4))();
    }
  }
  pCVar6 = CWnd::GetDlgItem((CWnd *)local_64,0x1b6c);
  if (pCVar6 != (CWnd *)0x0) {
    FUN_0040a2b0();
    puVar7 = FUN_00416590(&local_6c);
    local_4 = 3;
    FID_conflict_SetWindowTextW((HWND)*puVar7,lpString);
    local_4 = 0xffffffff;
    pCVar6 = local_6c + -4;
    LOCK();
    iVar2 = *(int *)pCVar6;
    *(int *)pCVar6 = *(int *)pCVar6 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_6c + -0x10) + 4))();
    }
  }
  pCVar6 = CWnd::GetDlgItem((CWnd *)local_64,0x1b64);
  if (pCVar6 != (CWnd *)0x0) {
    FUN_0040a2b0();
    puVar7 = FUN_00416590(&local_6c);
    local_4 = 4;
    FID_conflict_SetWindowTextW((HWND)*puVar7,lpString);
    local_4 = 0xffffffff;
    pCVar6 = local_6c + -4;
    LOCK();
    iVar2 = *(int *)pCVar6;
    *(int *)pCVar6 = *(int *)pCVar6 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_6c + -0x10) + 4))();
    }
  }
  pCVar6 = CWnd::GetDlgItem((CWnd *)local_64,0x1b6f);
  if (pCVar6 != (CWnd *)0x0) {
    FUN_0040a2b0();
    puVar7 = FUN_00416590(&local_6c);
    local_4 = 5;
    FID_conflict_SetWindowTextW((HWND)*puVar7,lpString);
    local_4 = 0xffffffff;
    pCVar6 = local_6c + -4;
    LOCK();
    iVar2 = *(int *)pCVar6;
    *(int *)pCVar6 = *(int *)pCVar6 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_6c + -0x10) + 4))();
    }
  }
  pCVar6 = CWnd::GetDlgItem((CWnd *)local_64,0x1b67);
  if (pCVar6 != (CWnd *)0x0) {
    FUN_0040a2b0();
    puVar7 = FUN_00416590(&local_6c);
    local_4 = 6;
    FID_conflict_SetWindowTextW((HWND)*puVar7,lpString);
    local_4 = 0xffffffff;
    pCVar6 = local_6c + -4;
    LOCK();
    iVar2 = *(int *)pCVar6;
    *(int *)pCVar6 = *(int *)pCVar6 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_6c + -0x10) + 4))();
    }
  }
  pCVar6 = CWnd::GetDlgItem((CWnd *)local_64,0x1b68);
  if (pCVar6 != (CWnd *)0x0) {
    FUN_0040a2b0();
    puVar7 = FUN_00416590(&local_6c);
    local_4 = 7;
    FID_conflict_SetWindowTextW((HWND)*puVar7,lpString);
    local_4 = 0xffffffff;
    pCVar6 = local_6c + -4;
    LOCK();
    iVar2 = *(int *)pCVar6;
    *(int *)pCVar6 = *(int *)pCVar6 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(local_6c + -0x10) + 4))();
    }
  }
  aWStack_60[0] = L'\0';
  aWStack_60[1] = L'\0';
  aWStack_60[2] = L'\0';
  aWStack_60[3] = L'\0';
  aWStack_60[4] = L'\0';
  aWStack_60[5] = L'\0';
  aWStack_60[6] = L'\0';
  aWStack_60[7] = L'\0';
  aWStack_60[8] = L'\0';
  aWStack_60[9] = L'\0';
  aWStack_60[10] = L'\0';
  aWStack_60[0xb] = L'\0';
  aWStack_60[0xc] = L'\0';
  aWStack_60[0xd] = L'\0';
  aWStack_60[0xe] = L'\0';
  aWStack_60[0xf] = L'\0';
  aWStack_60[0x10] = L'\0';
  aWStack_60[0x11] = L'\0';
  aWStack_60[0x12] = L'\0';
  aWStack_60[0x13] = 0;
  local_6c = (CWnd *)0x0;
  while( true ) {
    iVar2 = *(int *)(pCVar4 + 0x78);
    if (iVar2 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(pCVar4 + 0x7c) - iVar2 >> 3;
    }
    if (iVar8 <= (int)local_6c) break;
    if ((iVar2 == 0) || ((CWnd *)(*(int *)(pCVar4 + 0x7c) - iVar2 >> 3) <= local_6c)) {
      FUN_00475b26();
    }
    iVar2 = *(int *)(pCVar4 + 0x78);
    iVar8 = (int)local_6c * 8;
    if ((DAT_004cc194 & 1) == 0) {
      DAT_004cc194 = DAT_004cc194 | 1;
      _DAT_004cc114 = CDnOptionData::vftable;
      DAT_004cc118 = 0x500;
      DAT_004cc11c = 800;
      DAT_004cc120 = 0;
      DAT_004cc124 = 0;
      DAT_004cc128 = 0;
      DAT_004cc12c = 0;
      _DAT_004cc130 = 0;
      _DAT_004cc134 = 0;
      _DAT_004cc138 = 0;
      _DAT_004cc140 = 0;
      _DAT_004cc144 = 0;
      _DAT_004cc148 = 0;
      puStack_70 = (undefined1 *)GetSystemMetrics(0);
      iStack_68 = GetSystemMetrics(1);
      if ((double)iStack_68 / (double)(int)puStack_70 <= _DAT_004b4710) {
        DAT_004cc118 = 0x500;
        DAT_004cc11c = 800;
      }
      else {
        DAT_004cc118 = 0x400;
        DAT_004cc11c = 0x300;
      }
      _atexit((_func_4879 *)&LAB_0049b240);
      local_4 = 0xffffffff;
    }
    if (*(int *)(iVar2 + iVar8) == DAT_004cc118) {
      if ((*(int *)(pCVar4 + 0x78) == 0) ||
         ((CWnd *)(*(int *)(pCVar4 + 0x7c) - *(int *)(pCVar4 + 0x78) >> 3) <= local_6c)) {
        FUN_00475b26();
      }
      iVar2 = *(int *)(pCVar4 + 0x78);
      if ((DAT_004cc194 & 1) == 0) {
        DAT_004cc194 = DAT_004cc194 | 1;
        local_4 = 9;
        FUN_00407100();
        _atexit((_func_4879 *)&LAB_0049b240);
        local_4 = 0xffffffff;
      }
      if (*(int *)(iVar2 + iVar8 + 4) == DAT_004cc11c) {
        if ((*(int *)(pCVar4 + 0x78) == 0) ||
           ((CWnd *)(*(int *)(pCVar4 + 0x7c) - *(int *)(pCVar4 + 0x78) >> 3) <= local_6c)) {
          FUN_00475b26();
        }
        if ((*(int *)(pCVar4 + 0x78) == 0) ||
           ((CWnd *)(*(int *)(pCVar4 + 0x7c) - *(int *)(pCVar4 + 0x78) >> 3) <= local_6c)) {
          FUN_00475b26();
        }
        wsprintfW(aWStack_60,L"%d X %d",*(undefined4 *)(*(int *)(pCVar4 + 0x78) + iVar8));
      }
    }
    local_6c = local_6c + 1;
  }
  local_6c = CWnd::GetDlgItem((CWnd *)local_64,0x1b63);
  if (local_6c != (CWnd *)0x0) {
    uVar11 = 0;
    while( true ) {
      pCVar6 = local_6c;
      iVar2 = *(int *)(pCVar4 + 0x78);
      if (iVar2 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(pCVar4 + 0x7c) - iVar2 >> 3;
      }
      if (iVar8 <= (int)uVar11) break;
      if ((iVar2 == 0) || ((uint)(*(int *)(pCVar4 + 0x7c) - iVar2 >> 3) <= uVar11)) {
        FUN_00475b26();
      }
      if ((*(int *)(pCVar4 + 0x78) == 0) ||
         ((uint)(*(int *)(pCVar4 + 0x7c) - *(int *)(pCVar4 + 0x78) >> 3) <= uVar11)) {
        FUN_00475b26();
      }
      wsprintfW(aWStack_60 + 0x14,L"%d X %d",*(undefined4 *)(*(int *)(pCVar4 + 0x78) + uVar11 * 8));
      SendMessageW(*(HWND *)(local_6c + 0x20),0x143,0,(LPARAM)(aWStack_60 + 0x14));
      uVar11 = uVar11 + 1;
    }
    LVar9 = SendMessageW(*(HWND *)(local_6c + 0x20),0x146,0,0);
    if (LVar9 == 0) {
      puStack_70 = &stack0xffffff78;
      pwVar15 = extraout_ECX;
      FUN_004035c0(&stack0xffffff78,
                   L"No resolution available. Please check your graphic card driver and monitors");
      FUN_00416510(pwVar15);
    }
    LVar9 = SendMessageW(*(HWND *)(pCVar6 + 0x20),0x14d,0,(LPARAM)aWStack_60);
    if (LVar9 == -1) {
      SendMessageW(*(HWND *)(pCVar6 + 0x20),0x14e,0,0);
      if ((*(int *)(pCVar4 + 0x78) == 0) ||
         (*(int *)(pCVar4 + 0x7c) - *(int *)(pCVar4 + 0x78) >> 3 == 0)) {
        FUN_00475b26();
      }
      local_6c = *(CWnd **)(pCVar4 + 0x78);
      if ((DAT_004cc194 & 1) == 0) {
        DAT_004cc194 = DAT_004cc194 | 1;
        _DAT_004cc114 = CDnOptionData::vftable;
        DAT_004cc118 = 0x500;
        DAT_004cc11c = 800;
        DAT_004cc120 = 0;
        DAT_004cc124 = 0;
        DAT_004cc128 = 0;
        DAT_004cc12c = 0;
        _DAT_004cc130 = 0;
        _DAT_004cc134 = 0;
        _DAT_004cc138 = 0;
        _DAT_004cc140 = 0;
        _DAT_004cc144 = 0;
        _DAT_004cc148 = 0;
        iStack_68 = GetSystemMetrics(0);
        puStack_70 = (undefined1 *)GetSystemMetrics(1);
        if ((double)(int)puStack_70 / (double)iStack_68 <= _DAT_004b4710) {
          DAT_004cc118 = 0x500;
          DAT_004cc11c = 800;
        }
        else {
          DAT_004cc118 = 0x400;
          DAT_004cc11c = 0x300;
        }
        _atexit((_func_4879 *)&LAB_0049b240);
        local_4 = 0xffffffff;
      }
      DAT_004cc118 = *(int *)local_6c;
      if ((*(int *)(pCVar4 + 0x78) == 0) ||
         (*(int *)(pCVar4 + 0x7c) - *(int *)(pCVar4 + 0x78) >> 3 == 0)) {
        FUN_00475b26();
      }
      local_6c = *(CWnd **)(pCVar4 + 0x78);
      if ((DAT_004cc194 & 1) == 0) {
        DAT_004cc194 = DAT_004cc194 | 1;
        _DAT_004cc114 = CDnOptionData::vftable;
        DAT_004cc118 = 0x500;
        DAT_004cc11c = 800;
        DAT_004cc120 = 0;
        DAT_004cc124 = 0;
        DAT_004cc128 = 0;
        DAT_004cc12c = 0;
        _DAT_004cc130 = 0;
        _DAT_004cc134 = 0;
        _DAT_004cc138 = 0;
        _DAT_004cc140 = 0;
        _DAT_004cc144 = 0;
        _DAT_004cc148 = 0;
        iStack_68 = GetSystemMetrics(0);
        puStack_70 = (undefined1 *)GetSystemMetrics(1);
        if ((double)(int)puStack_70 / (double)iStack_68 <= _DAT_004b4710) {
          DAT_004cc118 = 0x500;
          DAT_004cc11c = 800;
        }
        else {
          DAT_004cc118 = 0x400;
          DAT_004cc11c = 0x300;
        }
        _atexit((_func_4879 *)&LAB_0049b240);
        local_4 = 0xffffffff;
      }
      DAT_004cc11c = *(int *)(local_6c + 4);
      if ((DAT_004cc194 & 1) == 0) {
        DAT_004cc194 = DAT_004cc194 | 1;
        _DAT_004cc114 = CDnOptionData::vftable;
        DAT_004cc118 = 0x500;
        DAT_004cc11c = 800;
        DAT_004cc120 = 0;
        DAT_004cc124 = 0;
        DAT_004cc128 = 0;
        DAT_004cc12c = 0;
        _DAT_004cc130 = 0;
        _DAT_004cc134 = 0;
        _DAT_004cc138 = 0;
        _DAT_004cc140 = 0;
        _DAT_004cc144 = 0;
        _DAT_004cc148 = 0;
        iStack_68 = GetSystemMetrics(0);
        puStack_70 = (undefined1 *)GetSystemMetrics(1);
        if ((double)(int)puStack_70 / (double)iStack_68 <= _DAT_004b4710) {
          DAT_004cc118 = 0x500;
          DAT_004cc11c = 800;
        }
        else {
          DAT_004cc118 = 0x400;
          DAT_004cc11c = 0x300;
        }
        _atexit((_func_4879 *)&LAB_0049b240);
        local_4 = 0xffffffff;
      }
      FUN_00407280(0x4cc114,*(HWND *)(local_64 + 0x20));
    }
  }
  pCVar4 = CWnd::GetDlgItem((CWnd *)local_64,0x1b62);
  if (pCVar4 != (CWnd *)0x0) {
    if ((DAT_004cc218 & 1) == 0) {
      DAT_004cc218 = DAT_004cc218 | 1;
      local_4 = 0xd;
      FUN_00409d50();
      _atexit((_func_4879 *)&LAB_0049b250);
      local_4 = 0xffffffff;
    }
    pLVar10 = FUN_00416590(&puStack_70);
    SendMessageW(*(HWND *)(pCVar4 + 0x20),0x143,0,*pLVar10);
    puVar7 = (undefined4 *)(puStack_70 + -0x10);
    piVar1 = (int *)(puStack_70 + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(*(int *)*puVar7 + 4))();
    }
    if ((DAT_004cc218 & 1) == 0) {
      DAT_004cc218 = DAT_004cc218 | 1;
      local_4 = 0xe;
      FUN_00409d50();
      _atexit((_func_4879 *)&LAB_0049b250);
      local_4 = 0xffffffff;
    }
    pLVar10 = FUN_00416590(&puStack_70);
    SendMessageW(*(HWND *)(pCVar4 + 0x20),0x143,0,*pLVar10);
    puVar7 = (undefined4 *)(puStack_70 + -0x10);
    piVar1 = (int *)(puStack_70 + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(*(int *)*puVar7 + 4))();
    }
    if ((DAT_004cc218 & 1) == 0) {
      DAT_004cc218 = DAT_004cc218 | 1;
      local_4 = 0xf;
      FUN_00409d50();
      _atexit((_func_4879 *)&LAB_0049b250);
      local_4 = 0xffffffff;
    }
    pLVar10 = FUN_00416590(&puStack_70);
    SendMessageW(*(HWND *)(pCVar4 + 0x20),0x143,0,*pLVar10);
    puVar7 = (undefined4 *)(puStack_70 + -0x10);
    piVar1 = (int *)(puStack_70 + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(*(int *)*puVar7 + 4))();
    }
    if ((DAT_004cc194 & 1) == 0) {
      DAT_004cc194 = DAT_004cc194 | 1;
      _DAT_004cc114 = CDnOptionData::vftable;
      DAT_004cc118 = 0x500;
      DAT_004cc11c = 800;
      DAT_004cc120 = 0;
      DAT_004cc124 = 0;
      DAT_004cc128 = 0;
      DAT_004cc12c = 0;
      _DAT_004cc130 = 0;
      _DAT_004cc134 = 0;
      _DAT_004cc138 = 0;
      _DAT_004cc140 = 0;
      _DAT_004cc144 = 0;
      _DAT_004cc148 = 0;
      iStack_68 = GetSystemMetrics(0);
      puStack_70 = (undefined1 *)GetSystemMetrics(1);
      if ((double)(int)puStack_70 / (double)iStack_68 <= _DAT_004b4710) {
        DAT_004cc118 = 0x500;
        DAT_004cc11c = 800;
      }
      else {
        DAT_004cc118 = 0x400;
        DAT_004cc11c = 0x300;
      }
      _atexit((_func_4879 *)&LAB_0049b240);
      local_4 = 0xffffffff;
    }
    if (DAT_004cc120 == 0) {
      pHVar3 = *(HWND *)(pCVar4 + 0x20);
      wParam = 2;
    }
    else {
      if ((DAT_004cc194 & 1) == 0) {
        DAT_004cc194 = DAT_004cc194 | 1;
        local_4 = 0x11;
        FUN_00407100();
        _atexit((_func_4879 *)&LAB_0049b240);
        local_4 = 0xffffffff;
      }
      if (DAT_004cc120 == 1) {
        pHVar3 = *(HWND *)(pCVar4 + 0x20);
        wParam = 1;
      }
      else {
        puVar5 = FUN_00407210();
        if (*(int *)(puVar5 + 0xc) != 2) goto LAB_004092db;
        pHVar3 = *(HWND *)(pCVar4 + 0x20);
        wParam = 0;
      }
    }
    SendMessageW(pHVar3,0x14e,wParam,0);
  }
LAB_004092db:
  pCVar4 = CWnd::GetDlgItem((CWnd *)local_64,0x1b7f);
  pcVar12 = SendMessageW_exref;
  if (pCVar4 != (CWnd *)0x0) {
    if ((DAT_004cc218 & 1) == 0) {
      DAT_004cc218 = DAT_004cc218 | 1;
      local_4 = 0x12;
      FUN_00409d50();
      _atexit((_func_4879 *)&LAB_0049b250);
      local_4 = 0xffffffff;
    }
    pLVar10 = FUN_00416590(&puStack_70);
    pcVar12 = SendMessageW_exref;
    SendMessageW(*(HWND *)(pCVar4 + 0x20),0x143,0,*pLVar10);
    puVar7 = (undefined4 *)(puStack_70 + -0x10);
    piVar1 = (int *)(puStack_70 + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(*(int *)*puVar7 + 4))();
    }
    if ((DAT_004cc218 & 1) == 0) {
      DAT_004cc218 = DAT_004cc218 | 1;
      local_4 = 0x13;
      FUN_00409d50();
      _atexit((_func_4879 *)&LAB_0049b250);
      local_4 = 0xffffffff;
    }
    pLVar10 = FUN_00416590(&puStack_70);
    SendMessageW(*(HWND *)(pCVar4 + 0x20),0x143,0,*pLVar10);
    puVar7 = (undefined4 *)(puStack_70 + -0x10);
    piVar1 = (int *)(puStack_70 + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(*(int *)*puVar7 + 4))();
    }
    if ((DAT_004cc218 & 1) == 0) {
      DAT_004cc218 = DAT_004cc218 | 1;
      local_4 = 0x14;
      FUN_00409d50();
      _atexit((_func_4879 *)&LAB_0049b250);
      local_4 = 0xffffffff;
    }
    pLVar10 = FUN_00416590(&puStack_70);
    SendMessageW(*(HWND *)(pCVar4 + 0x20),0x143,0,*pLVar10);
    puVar7 = (undefined4 *)(puStack_70 + -0x10);
    piVar1 = (int *)(puStack_70 + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(*(int *)*puVar7 + 4))();
    }
    if ((DAT_004cc194 & 1) == 0) {
      DAT_004cc194 = DAT_004cc194 | 1;
      _DAT_004cc114 = CDnOptionData::vftable;
      DAT_004cc118 = 0x500;
      DAT_004cc11c = 800;
      DAT_004cc120 = 0;
      DAT_004cc124 = 0;
      DAT_004cc128 = 0;
      DAT_004cc12c = 0;
      _DAT_004cc130 = 0;
      _DAT_004cc134 = 0;
      _DAT_004cc138 = 0;
      _DAT_004cc140 = 0;
      _DAT_004cc144 = 0;
      _DAT_004cc148 = 0;
      iStack_68 = GetSystemMetrics(0);
      puStack_70 = (undefined1 *)GetSystemMetrics(1);
      if ((double)(int)puStack_70 / (double)iStack_68 <= _DAT_004b4710) {
        DAT_004cc118 = 0x500;
        DAT_004cc11c = 800;
      }
      else {
        DAT_004cc118 = 0x400;
        DAT_004cc11c = 0x300;
      }
      _atexit((_func_4879 *)&LAB_0049b240);
      local_4 = 0xffffffff;
    }
    SendMessageW(*(HWND *)(pCVar4 + 0x20),0x14e,DAT_004cc128,0);
    pCVar4 = CWnd::GetDlgItem((CWnd *)local_64,0x1b63);
    if (pCVar4 != (CWnd *)0x0) {
      if ((DAT_004cc194 & 1) == 0) {
        DAT_004cc194 = DAT_004cc194 | 1;
        local_4 = 0x16;
        FUN_00407100();
        _atexit((_func_4879 *)&LAB_0049b240);
        local_4 = 0xffffffff;
      }
      CWnd::EnableWindow(pCVar4,(uint)(DAT_004cc128 != 2));
    }
  }
  pCVar4 = CWnd::GetDlgItem((CWnd *)local_64,0x1b6d);
  if (pCVar4 != (CWnd *)0x0) {
    if ((DAT_004cc218 & 1) == 0) {
      DAT_004cc218 = DAT_004cc218 | 1;
      local_4 = 0x17;
      FUN_00409d50();
      _atexit((_func_4879 *)&LAB_0049b250);
      local_4 = 0xffffffff;
    }
    FUN_00416590(&puStack_70);
    (*pcVar12)(*(undefined4 *)(pCVar4 + 0x20),0x143,0);
    piVar1 = (int *)(unaff_EDI + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(**(int **)(unaff_EDI + -0x10) + 4))((undefined4 *)(unaff_EDI + -0x10));
    }
    if ((DAT_004cc218 & 1) == 0) {
      DAT_004cc218 = DAT_004cc218 | 1;
      uStack_14 = 0x18;
      FUN_00409d50();
      _atexit((_func_4879 *)&LAB_0049b250);
      uStack_14 = 0xffffffff;
    }
    puVar7 = FUN_00416590(&stack0xffffff80);
    (*pcVar12)(*(undefined4 *)(pCVar4 + 0x20),0x143,0,*puVar7);
    puVar7 = (undefined4 *)(puStack_70 + -0x10);
    piVar1 = (int *)(puStack_70 + -4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(*(int *)*puVar7 + 4))();
    }
    if ((DAT_004cc194 & 1) == 0) {
      DAT_004cc194 = DAT_004cc194 | 1;
      _DAT_004cc114 = CDnOptionData::vftable;
      DAT_004cc118 = 0x500;
      DAT_004cc11c = 800;
      DAT_004cc120 = 0;
      DAT_004cc124 = 0;
      DAT_004cc128 = 0;
      DAT_004cc12c = 0;
      _DAT_004cc130 = 0;
      _DAT_004cc134 = 0;
      _DAT_004cc138 = 0;
      _DAT_004cc140 = 0;
      _DAT_004cc144 = 0;
      _DAT_004cc148 = 0;
      iStack_68 = GetSystemMetrics(0);
      puStack_70 = (undefined1 *)GetSystemMetrics(1);
      if ((double)(int)puStack_70 / (double)iStack_68 <= _DAT_004b4710) {
        DAT_004cc118 = 0x500;
        DAT_004cc11c = 800;
      }
      else {
        DAT_004cc118 = 0x400;
        DAT_004cc11c = 0x300;
      }
      _atexit((_func_4879 *)&LAB_0049b240);
      local_4 = 0xffffffff;
    }
    if (DAT_004cc124 == 0) {
      uVar13 = *(undefined4 *)(pCVar4 + 0x20);
      uVar14 = 1;
    }
    else {
      if ((DAT_004cc194 & 1) == 0) {
        DAT_004cc194 = DAT_004cc194 | 1;
        local_4 = 0x1a;
        FUN_00407100();
        _atexit((_func_4879 *)&LAB_0049b240);
        local_4 = 0xffffffff;
      }
      if (DAT_004cc124 != 1) goto LAB_00409824;
      uVar13 = *(undefined4 *)(pCVar4 + 0x20);
      uVar14 = 0;
    }
    (*pcVar12)(uVar13,0x14e,uVar14);
  }
LAB_00409824:
  pCVar4 = CWnd::GetDlgItem((CWnd *)local_64,0x1b6e);
  if (pCVar4 != (CWnd *)0x0) {
    if ((DAT_004cc194 & 1) == 0) {
      DAT_004cc194 = DAT_004cc194 | 1;
      _DAT_004cc114 = CDnOptionData::vftable;
      DAT_004cc118 = 0x500;
      DAT_004cc11c = 800;
      DAT_004cc120 = 0;
      DAT_004cc124 = 0;
      DAT_004cc128 = 0;
      DAT_004cc12c = 0;
      _DAT_004cc130 = 0;
      _DAT_004cc134 = 0;
      _DAT_004cc138 = 0;
      _DAT_004cc140 = 0;
      _DAT_004cc144 = 0;
      _DAT_004cc148 = 0;
      iStack_68 = GetSystemMetrics(0);
      puStack_70 = (undefined1 *)GetSystemMetrics(1);
      if ((double)(int)puStack_70 / (double)iStack_68 <= _DAT_004b4710) {
        DAT_004cc118 = 0x500;
        DAT_004cc11c = 800;
      }
      else {
        DAT_004cc118 = 0x400;
        DAT_004cc11c = 0x300;
      }
      _atexit((_func_4879 *)&LAB_0049b240);
    }
    if (DAT_004cc12c == 0) {
      uVar13 = *(undefined4 *)(pCVar4 + 0x20);
    }
    else {
      uVar13 = *(undefined4 *)(pCVar4 + 0x20);
    }
    (*pcVar12)(uVar13,0xf1,DAT_004cc12c != 0);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&puStack_70);
  return;
}

