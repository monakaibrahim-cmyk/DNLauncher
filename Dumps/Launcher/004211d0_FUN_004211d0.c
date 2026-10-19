// Address: 0x004211d0
// Name: FUN_004211d0
// Category: Launcher


void __fastcall FUN_004211d0(CWnd *param_1)

{
  ushort uVar1;
  LPSTR lpString;
  undefined4 *puVar2;
  int iVar3;
  CWnd *pCVar4;
  HWND__ HVar5;
  ushort *puVar6;
  int *piVar7;
  int *extraout_EDX;
  int unaff_EDI;
  bool bVar8;
  HWND__ *pHVar9;
  HWND__ HStack_30;
  int local_2c;
  tagRECT tStack_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00499e20;
  local_14 = ExceptionList;
  lpString = (LPSTR)(DAT_004c3750 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_14;
  FUN_0040a2b0();
  puVar2 = FUN_00416590(&local_2c);
  local_c = 0;
  FID_conflict_operator_(param_1 + 0x4144,puVar2);
  local_c = 0xffffffff;
  piVar7 = (int *)(local_2c + -4);
  LOCK();
  iVar3 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  piVar7 = (int *)(iVar3 + -1);
  if ((int)piVar7 < 1) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))((undefined4 *)(local_2c + -0x10));
    piVar7 = extraout_EDX;
  }
  FUN_00421b80((int)param_1,piVar7);
  piVar7 = (int *)FUN_00453ed1();
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  iVar3 = (**(code **)(*piVar7 + 0xc))();
  HStack_30.unused = iVar3 + 0x10;
  pHVar9 = &HStack_30;
  local_c = 1;
  CWnd::GetDlgItem(param_1,7000);
  FID_conflict_GetWindowTextA(pHVar9,lpString,unaff_EDI);
  puVar6 = *(ushort **)(param_1 + 0x4128);
  HVar5.unused = HStack_30.unused;
  if (puVar6 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar5.unused;
    bVar8 = uVar1 < *puVar6;
    if (uVar1 != *puVar6) {
LAB_004212ee:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_004212f3;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar5.unused + 2);
    bVar8 = uVar1 < puVar6[1];
    if (uVar1 != puVar6[1]) goto LAB_004212ee;
    puVar6 = puVar6 + 2;
    HVar5.unused = (int)(HVar5.unused + 4);
  } while (uVar1 != 0);
  iVar3 = 0;
LAB_004212f3:
  if (iVar3 != 0) {
    pCVar4 = CWnd::GetDlgItem(param_1,7000);
    GetWindowRect(*(HWND *)(pCVar4 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar9 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b59);
  FID_conflict_GetWindowTextA(pHVar9,lpString,unaff_EDI);
  puVar6 = *(ushort **)(param_1 + 0x412c);
  HVar5.unused = HStack_30.unused;
  if (puVar6 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar5.unused;
    bVar8 = uVar1 < *puVar6;
    if (uVar1 != *puVar6) {
LAB_00421396:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0042139b;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar5.unused + 2);
    bVar8 = uVar1 < puVar6[1];
    if (uVar1 != puVar6[1]) goto LAB_00421396;
    puVar6 = puVar6 + 2;
    HVar5.unused = (int)(HVar5.unused + 4);
  } while (uVar1 != 0);
  iVar3 = 0;
LAB_0042139b:
  if (iVar3 != 0) {
    pCVar4 = CWnd::GetDlgItem(param_1,0x1b59);
    GetWindowRect(*(HWND *)(pCVar4 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar9 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b5a);
  FID_conflict_GetWindowTextA(pHVar9,lpString,unaff_EDI);
  puVar6 = *(ushort **)(param_1 + 0x4130);
  HVar5.unused = HStack_30.unused;
  if (puVar6 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar5.unused;
    bVar8 = uVar1 < *puVar6;
    if (uVar1 != *puVar6) {
LAB_00421436:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0042143b;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar5.unused + 2);
    bVar8 = uVar1 < puVar6[1];
    if (uVar1 != puVar6[1]) goto LAB_00421436;
    puVar6 = puVar6 + 2;
    HVar5.unused = (int)(HVar5.unused + 4);
  } while (uVar1 != 0);
  iVar3 = 0;
LAB_0042143b:
  if (iVar3 != 0) {
    pCVar4 = CWnd::GetDlgItem(param_1,0x1b5a);
    GetWindowRect(*(HWND *)(pCVar4 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar9 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b5b);
  FID_conflict_GetWindowTextA(pHVar9,lpString,unaff_EDI);
  puVar6 = *(ushort **)(param_1 + 0x4134);
  HVar5.unused = HStack_30.unused;
  if (puVar6 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar5.unused;
    bVar8 = uVar1 < *puVar6;
    if (uVar1 != *puVar6) {
LAB_004214d6:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_004214db;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar5.unused + 2);
    bVar8 = uVar1 < puVar6[1];
    if (uVar1 != puVar6[1]) goto LAB_004214d6;
    puVar6 = puVar6 + 2;
    HVar5.unused = (int)(HVar5.unused + 4);
  } while (uVar1 != 0);
  iVar3 = 0;
LAB_004214db:
  if (iVar3 != 0) {
    pCVar4 = CWnd::GetDlgItem(param_1,0x1b5b);
    GetWindowRect(*(HWND *)(pCVar4 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar9 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b5c);
  FID_conflict_GetWindowTextA(pHVar9,lpString,unaff_EDI);
  puVar6 = *(ushort **)(param_1 + 0x4138);
  HVar5.unused = HStack_30.unused;
  if (puVar6 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar5.unused;
    bVar8 = uVar1 < *puVar6;
    if (uVar1 != *puVar6) {
LAB_00421576:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0042157b;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar5.unused + 2);
    bVar8 = uVar1 < puVar6[1];
    if (uVar1 != puVar6[1]) goto LAB_00421576;
    puVar6 = puVar6 + 2;
    HVar5.unused = (int)(HVar5.unused + 4);
  } while (uVar1 != 0);
  iVar3 = 0;
LAB_0042157b:
  if (iVar3 != 0) {
    pCVar4 = CWnd::GetDlgItem(param_1,0x1b5c);
    GetWindowRect(*(HWND *)(pCVar4 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar9 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b5d);
  FID_conflict_GetWindowTextA(pHVar9,lpString,unaff_EDI);
  puVar6 = *(ushort **)(param_1 + 0x413c);
  HVar5.unused = HStack_30.unused;
  if (puVar6 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar5.unused;
    bVar8 = uVar1 < *puVar6;
    if (uVar1 != *puVar6) {
LAB_00421616:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0042161b;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar5.unused + 2);
    bVar8 = uVar1 < puVar6[1];
    if (uVar1 != puVar6[1]) goto LAB_00421616;
    puVar6 = puVar6 + 2;
    HVar5.unused = (int)(HVar5.unused + 4);
  } while (uVar1 != 0);
  iVar3 = 0;
LAB_0042161b:
  if (iVar3 != 0) {
    pCVar4 = CWnd::GetDlgItem(param_1,0x1b5d);
    GetWindowRect(*(HWND *)(pCVar4 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar9 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b5e);
  FID_conflict_GetWindowTextA(pHVar9,lpString,unaff_EDI);
  puVar6 = *(ushort **)(param_1 + 0x4140);
  HVar5.unused = HStack_30.unused;
  if (puVar6 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar5.unused;
    bVar8 = uVar1 < *puVar6;
    if (uVar1 != *puVar6) {
LAB_004216b6:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_004216bb;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar5.unused + 2);
    bVar8 = uVar1 < puVar6[1];
    if (uVar1 != puVar6[1]) goto LAB_004216b6;
    puVar6 = puVar6 + 2;
    HVar5.unused = (int)(HVar5.unused + 4);
  } while (uVar1 != 0);
  iVar3 = 0;
LAB_004216bb:
  if (iVar3 != 0) {
    pCVar4 = CWnd::GetDlgItem(param_1,0x1b5e);
    GetWindowRect(*(HWND *)(pCVar4 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  pHVar9 = &HStack_30;
  CWnd::GetDlgItem(param_1,0x1b5f);
  FID_conflict_GetWindowTextA(pHVar9,lpString,unaff_EDI);
  puVar6 = *(ushort **)(param_1 + 0x4144);
  HVar5.unused = HStack_30.unused;
  if (puVar6 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80004005);
  }
  do {
    uVar1 = *(ushort *)HVar5.unused;
    bVar8 = uVar1 < *puVar6;
    if (uVar1 != *puVar6) {
LAB_0042174e:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421753;
    }
    if (uVar1 == 0) break;
    uVar1 = *(ushort *)(HVar5.unused + 2);
    bVar8 = uVar1 < puVar6[1];
    if (uVar1 != puVar6[1]) goto LAB_0042174e;
    puVar6 = puVar6 + 2;
    HVar5.unused = (int)(HVar5.unused + 4);
  } while (uVar1 != 0);
  iVar3 = 0;
LAB_00421753:
  if (iVar3 != 0) {
    pCVar4 = CWnd::GetDlgItem(param_1,0x1b5f);
    GetWindowRect(*(HWND *)(pCVar4 + 0x20),&tStack_28);
    CWnd::ScreenToClient(param_1,&tStack_28);
    InvalidateRect(*(HWND *)(param_1 + 0x20),&tStack_28,1);
  }
  CWnd::UpdateData(param_1,0);
  local_c = 0xffffffff;
  puVar6 = (ushort *)(HStack_30.unused + -4);
  LOCK();
  iVar3 = *(int *)puVar6;
  *(int *)puVar6 = *(int *)puVar6 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(**(int **)(HStack_30.unused + -0x10) + 4))((ushort *)(HStack_30.unused + -0x10));
  }
  ExceptionList = local_14;
  return;
}

