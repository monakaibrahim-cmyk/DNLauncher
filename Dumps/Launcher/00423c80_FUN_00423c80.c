// Address: 0x00423c80
// Name: FUN_00423c80
// Category: Launcher


void __fastcall FUN_00423c80(CWnd *param_1)

{
  ushort uVar1;
  int iVar2;
  LPSTR lpString;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  CWnd *pCVar6;
  HWND__ HVar7;
  undefined *puVar8;
  ushort *puVar9;
  int unaff_EDI;
  bool bVar10;
  HWND__ *pHVar11;
  HWND__ HStack_30;
  int local_2c;
  tagRECT tStack_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0049a780;
  local_14 = ExceptionList;
  lpString = (LPSTR)(DAT_004c3750 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_14;
  FUN_0040a2b0();
  puVar3 = FUN_00416590(&local_2c);
  local_c = 0;
  FID_conflict_operator_(param_1 + 0x4144,puVar3);
  local_c = 0xffffffff;
  piVar4 = (int *)(local_2c + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))((undefined4 *)(local_2c + -0x10));
  }
  FUN_0040a2b0();
  puVar3 = FUN_00416590(&local_2c);
  local_c = 1;
  FID_conflict_operator_(param_1 + 0x4810,puVar3);
  local_c = 0xffffffff;
  piVar4 = (int *)(local_2c + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))((undefined4 *)(local_2c + -0x10));
  }
  FUN_0040a2b0();
  puVar3 = FUN_00416590(&local_2c);
  local_c = 2;
  FID_conflict_operator_(param_1 + 0x4814,puVar3);
  local_c = 0xffffffff;
  piVar4 = (int *)(local_2c + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))((undefined4 *)(local_2c + -0x10));
  }
  FUN_0040a2b0();
  puVar3 = FUN_00416590(&local_2c);
  local_c = 3;
  FID_conflict_operator_(param_1 + 0x4818,puVar3);
  local_c = 0xffffffff;
  piVar4 = (int *)(local_2c + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))((undefined4 *)(local_2c + -0x10));
  }
  FUN_0040a2b0();
  FUN_00416590(&local_2c);
  local_c = 4;
  FUN_00403f30(param_1 + 0x481c,L"%s :");
  local_c = 0xffffffff;
  piVar4 = (int *)(local_2c + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))((undefined4 *)(local_2c + -0x10));
  }
  FUN_0040a2b0();
  FUN_00416590(&local_2c);
  local_c = 5;
  FUN_00403f30(param_1 + 0x4820,L"%s :");
  local_c = 0xffffffff;
  piVar4 = (int *)(local_2c + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))((undefined4 *)(local_2c + -0x10));
  }
  FUN_0040a2b0();
  FUN_00416590(&local_2c);
  local_c = 6;
  FUN_00403f30(param_1 + 0x4824,L"%s :");
  local_c = 0xffffffff;
  piVar4 = (int *)(local_2c + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))((undefined4 *)(local_2c + -0x10));
  }
  FUN_0040a2b0();
  FUN_00416590(&local_2c);
  local_c = 7;
  FUN_00403f30(param_1 + 0x4828,L"%s :");
  local_c = 0xffffffff;
  piVar4 = (int *)(local_2c + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))((undefined4 *)(local_2c + -0x10));
  }
  FUN_0040a2b0();
  puVar3 = FUN_00416590(&local_2c);
  local_c = 8;
  FID_conflict_operator_(param_1 + 0x482c,puVar3);
  local_c = 0xffffffff;
  piVar4 = (int *)(local_2c + -4);
  LOCK();
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))((undefined4 *)(local_2c + -0x10));
  }
  piVar4 = (int *)FUN_00453ed1();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  HStack_30.unused = iVar5 + 0x10;
  pHVar11 = &HStack_30;
  local_c = 9;
  CWnd::GetDlgItem(param_1,0x1b5f);
  FID_conflict_GetWindowTextA(pHVar11,lpString,unaff_EDI);
  puVar9 = *(ushort **)(param_1 + 0x4144);
  HVar7.unused = HStack_30.unused;
  if (puVar9 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar7.unused;
    bVar10 = uVar1 < *puVar9;
    if (uVar1 != *puVar9) {
LAB_00424056:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0042405a;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar7.unused + 2);
    bVar10 = uVar1 < puVar9[1];
    if (uVar1 != puVar9[1]) goto LAB_00424056;
    puVar9 = puVar9 + 2;
    HVar7.unused = (int)(HVar7.unused + 4);
  } while (uVar1 != 0);
  iVar5 = 0;
LAB_0042405a:
  if (iVar5 != 0) {
    pCVar6 = CWnd::GetDlgItem(param_1,0x1b5f);
    GetWindowRect(*(HWND *)(pCVar6 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar11 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b79);
  FID_conflict_GetWindowTextA(pHVar11,lpString,unaff_EDI);
  puVar9 = *(ushort **)(param_1 + 0x4810);
  HVar7.unused = HStack_30.unused;
  if (puVar9 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar7.unused;
    bVar10 = uVar1 < *puVar9;
    if (uVar1 != *puVar9) {
LAB_004240fc:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00424101;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar7.unused + 2);
    bVar10 = uVar1 < puVar9[1];
    if (uVar1 != puVar9[1]) goto LAB_004240fc;
    puVar9 = puVar9 + 2;
    HVar7.unused = (int)(HVar7.unused + 4);
  } while (uVar1 != 0);
  iVar5 = 0;
LAB_00424101:
  if (iVar5 != 0) {
    pCVar6 = CWnd::GetDlgItem(param_1,0x1b79);
    GetWindowRect(*(HWND *)(pCVar6 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar11 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b7a);
  FID_conflict_GetWindowTextA(pHVar11,lpString,unaff_EDI);
  puVar9 = *(ushort **)(param_1 + 0x4814);
  HVar7.unused = HStack_30.unused;
  if (puVar9 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar7.unused;
    bVar10 = uVar1 < *puVar9;
    if (uVar1 != *puVar9) {
LAB_00424197:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0042419c;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar7.unused + 2);
    bVar10 = uVar1 < puVar9[1];
    if (uVar1 != puVar9[1]) goto LAB_00424197;
    puVar9 = puVar9 + 2;
    HVar7.unused = (int)(HVar7.unused + 4);
  } while (uVar1 != 0);
  iVar5 = 0;
LAB_0042419c:
  if (iVar5 != 0) {
    pCVar6 = CWnd::GetDlgItem(param_1,0x1b7a);
    GetWindowRect(*(HWND *)(pCVar6 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar11 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b7b);
  FID_conflict_GetWindowTextA(pHVar11,lpString,unaff_EDI);
  puVar9 = *(ushort **)(param_1 + 0x4818);
  HVar7.unused = HStack_30.unused;
  if (puVar9 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar7.unused;
    bVar10 = uVar1 < *puVar9;
    if (uVar1 != *puVar9) {
LAB_00424236:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0042423b;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar7.unused + 2);
    bVar10 = uVar1 < puVar9[1];
    if (uVar1 != puVar9[1]) goto LAB_00424236;
    puVar9 = puVar9 + 2;
    HVar7.unused = (int)(HVar7.unused + 4);
  } while (uVar1 != 0);
  iVar5 = 0;
LAB_0042423b:
  if (iVar5 != 0) {
    pCVar6 = CWnd::GetDlgItem(param_1,0x1b7b);
    GetWindowRect(*(HWND *)(pCVar6 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar11 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b78);
  FID_conflict_GetWindowTextA(pHVar11,lpString,unaff_EDI);
  puVar9 = *(ushort **)(param_1 + 0x481c);
  HVar7.unused = HStack_30.unused;
  if (puVar9 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar7.unused;
    bVar10 = uVar1 < *puVar9;
    if (uVar1 != *puVar9) {
LAB_004242d6:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_004242db;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar7.unused + 2);
    bVar10 = uVar1 < puVar9[1];
    if (uVar1 != puVar9[1]) goto LAB_004242d6;
    puVar9 = puVar9 + 2;
    HVar7.unused = (int)(HVar7.unused + 4);
  } while (uVar1 != 0);
  iVar5 = 0;
LAB_004242db:
  if (iVar5 != 0) {
    pCVar6 = CWnd::GetDlgItem(param_1,0x1b78);
    GetWindowRect(*(HWND *)(pCVar6 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar11 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b75);
  FID_conflict_GetWindowTextA(pHVar11,lpString,unaff_EDI);
  puVar9 = *(ushort **)(param_1 + 0x4820);
  HVar7.unused = HStack_30.unused;
  if (puVar9 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar7.unused;
    bVar10 = uVar1 < *puVar9;
    if (uVar1 != *puVar9) {
LAB_00424376:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0042437b;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar7.unused + 2);
    bVar10 = uVar1 < puVar9[1];
    if (uVar1 != puVar9[1]) goto LAB_00424376;
    puVar9 = puVar9 + 2;
    HVar7.unused = (int)(HVar7.unused + 4);
  } while (uVar1 != 0);
  iVar5 = 0;
LAB_0042437b:
  if (iVar5 != 0) {
    pCVar6 = CWnd::GetDlgItem(param_1,0x1b75);
    GetWindowRect(*(HWND *)(pCVar6 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar11 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b76);
  FID_conflict_GetWindowTextA(pHVar11,lpString,unaff_EDI);
  puVar9 = *(ushort **)(param_1 + 0x4824);
  HVar7.unused = HStack_30.unused;
  if (puVar9 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar7.unused;
    bVar10 = uVar1 < *puVar9;
    if (uVar1 != *puVar9) {
LAB_00424416:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0042441b;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar7.unused + 2);
    bVar10 = uVar1 < puVar9[1];
    if (uVar1 != puVar9[1]) goto LAB_00424416;
    puVar9 = puVar9 + 2;
    HVar7.unused = (int)(HVar7.unused + 4);
  } while (uVar1 != 0);
  iVar5 = 0;
LAB_0042441b:
  if (iVar5 != 0) {
    pCVar6 = CWnd::GetDlgItem(param_1,0x1b76);
    GetWindowRect(*(HWND *)(pCVar6 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar11 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b77);
  FID_conflict_GetWindowTextA(pHVar11,lpString,unaff_EDI);
  puVar9 = *(ushort **)(param_1 + 0x4828);
  HVar7.unused = HStack_30.unused;
  if (puVar9 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar7.unused;
    bVar10 = uVar1 < *puVar9;
    if (uVar1 != *puVar9) {
LAB_004244b6:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_004244bb;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar7.unused + 2);
    bVar10 = uVar1 < puVar9[1];
    if (uVar1 != puVar9[1]) goto LAB_004244b6;
    puVar9 = puVar9 + 2;
    HVar7.unused = (int)(HVar7.unused + 4);
  } while (uVar1 != 0);
  iVar5 = 0;
LAB_004244bb:
  if (iVar5 != 0) {
    pCVar6 = CWnd::GetDlgItem(param_1,0x1b77);
    GetWindowRect(*(HWND *)(pCVar6 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar11 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b7e);
  FID_conflict_GetWindowTextA(pHVar11,lpString,unaff_EDI);
  puVar9 = *(ushort **)(param_1 + 0x482c);
  HVar7.unused = HStack_30.unused;
  if (puVar9 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar7.unused;
    bVar10 = uVar1 < *puVar9;
    if (uVar1 != *puVar9) {
LAB_0042454d:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00424552;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar7.unused + 2);
    bVar10 = uVar1 < puVar9[1];
    if (uVar1 != puVar9[1]) goto LAB_0042454d;
    puVar9 = puVar9 + 2;
    HVar7.unused = (int)(HVar7.unused + 4);
  } while (uVar1 != 0);
  iVar5 = 0;
LAB_00424552:
  if (iVar5 != 0) {
    pCVar6 = CWnd::GetDlgItem(param_1,0x1b7e);
    GetWindowRect(*(HWND *)(pCVar6 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  puVar8 = FUN_0040a2b0();
  iVar5 = *(int *)(puVar8 + 0x5c);
  puVar8 = FUN_0040a2b0();
  iVar2 = *(int *)(puVar8 + 0x5c);
  puVar8 = FUN_0040a2b0();
  FUN_0041d570(*(int *)(puVar8 + 0x5c) + 0x1389,iVar2 + 0x138a,iVar5 + 0x138b);
  InvalidateRect(*(HWND *)(param_1 + 0x204),(RECT *)0x0,1);
  puVar8 = FUN_0040a2b0();
  iVar5 = *(int *)(puVar8 + 0x5c);
  puVar8 = FUN_0040a2b0();
  iVar2 = *(int *)(puVar8 + 0x5c);
  puVar8 = FUN_0040a2b0();
  FUN_0041d570(*(int *)(puVar8 + 0x5c) + 0x1395,iVar2 + 0x1396,iVar5 + 0x1397);
  InvalidateRect(*(HWND *)(param_1 + 0xb0c),(RECT *)0x0,1);
  puVar8 = FUN_0040a2b0();
  iVar5 = *(int *)(puVar8 + 0x5c);
  puVar8 = FUN_0040a2b0();
  iVar2 = *(int *)(puVar8 + 0x5c);
  puVar8 = FUN_0040a2b0();
  FUN_0041d570(*(int *)(puVar8 + 0x5c) + 0x1392,iVar2 + 0x1393,iVar5 + 0x1394);
  InvalidateRect(*(HWND *)(param_1 + 0x1414),(RECT *)0x0,1);
  FUN_004211d0(param_1);
  local_c = 0xffffffff;
  puVar9 = (ushort *)(HStack_30.unused + -4);
  LOCK();
  iVar5 = *(int *)puVar9;
  *(int *)puVar9 = *(int *)puVar9 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(HStack_30.unused + -0x10) + 4))((ushort *)(HStack_30.unused + -0x10));
  }
  ExceptionList = local_14;
  return;
}

