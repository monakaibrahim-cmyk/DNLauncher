// Address: 0x00403ba0
// Name: FUN_00403ba0
// Category: Launcher


void FUN_00403ba0(void)

{
  int iVar1;
  int *piVar2;
  HFONT pHVar3;
  WPARAM wParam;
  undefined4 *puVar4;
  CWnd *pCVar5;
  CWnd *unaff_ESI;
  CWnd *local_2c;
  tagRECT local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00499d62;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  pHVar3 = CreateFontW(0x19,0,0,0,700,0,0,0,0,0,0,0,0x10,(LPCWSTR)&pszFaceName_004ac1d4);
  Attach(unaff_ESI + 0xe4,(int)pHVar3);
  *(undefined4 *)(unaff_ESI + 0xdc) = *(undefined4 *)(unaff_ESI + 0xe0);
  GetWindowRect(*(HWND *)(unaff_ESI + 0x9c),&local_28);
  RedrawWindow(*(HWND *)(unaff_ESI + 0x9c),&local_28,(HRGN)0x0,0x105);
  if (unaff_ESI + 0xe4 == (CWnd *)0x0) {
    wParam = 0;
  }
  else {
    wParam = *(WPARAM *)(unaff_ESI + 0xe8);
  }
  SendMessageW(*(HWND *)(unaff_ESI + 0x9c),0x30,wParam,1);
  piVar2 = *(int **)(unaff_ESI + 0xec);
  CWnd::MoveWindow(unaff_ESI + 0x7c,*piVar2,piVar2[1],piVar2[2] - *piVar2,piVar2[3] - piVar2[1],1);
  FUN_0040a2b0();
  puVar4 = FUN_00416590(&local_2c);
  local_c = 0;
  FUN_00403f30(unaff_ESI + 0x78,(wchar_t *)*puVar4);
  local_c = 0xffffffff;
  pCVar5 = local_2c + -4;
  LOCK();
  iVar1 = *(int *)pCVar5;
  *(int *)pCVar5 = *(int *)pCVar5 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(**(int **)(local_2c + -0x10) + 4))(local_2c + -0x10);
  }
  pCVar5 = FUN_00452728(0x54);
  local_c = 1;
  local_2c = pCVar5;
  if (pCVar5 == (CWnd *)0x0) {
    pCVar5 = (CWnd *)0x0;
  }
  else {
    CWnd::CWnd(pCVar5);
    *(undefined ***)pCVar5 = CProgressCtrl::vftable;
  }
  local_c = 0xffffffff;
  *(CWnd **)(unaff_ESI + 0x74) = pCVar5;
  if (pCVar5 != (CWnd *)0x0) {
    local_28.left = 10;
    local_28.top = 10;
    local_28.right = 200;
    local_28.bottom = 0x1e;
    (**(code **)(*(int *)pCVar5 + 0x134))(0x50000001,&local_28);
    iVar1 = *(int *)(unaff_ESI + 0xec);
    CWnd::MoveWindow(*(CWnd **)(unaff_ESI + 0x74),*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x14),
                     *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x10),
                     *(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x14),1);
    SendMessageW(*(HWND *)(*(int *)(unaff_ESI + 0x74) + 0x20),0x401,0,0x640000);
    CWnd::UpdateData(unaff_ESI,0);
  }
  ExceptionList = local_14;
  return;
}

