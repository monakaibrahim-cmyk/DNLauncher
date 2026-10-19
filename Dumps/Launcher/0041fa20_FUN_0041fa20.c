// Address: 0x0041fa20
// Name: FUN_0041fa20
// Category: Launcher


void __fastcall FUN_0041fa20(int *param_1)

{
  int iVar1;
  int iVar2;
  LPCWSTR pWVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  AFX_MODULE_STATE *pAVar6;
  HANDLE pvVar7;
  CWnd *pCVar8;
  HWND pHVar9;
  BOOL BVar10;
  code *pcVar11;
  void *unaff_ESI;
  bool bVar12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00499f44;
  local_c = ExceptionList;
  pWVar3 = (LPCWSTR)(DAT_004c3750 ^ (uint)&stack0xffffffe0);
  ExceptionList = &local_c;
  iVar1 = param_1[0x22];
  CWnd::MoveWindow((CWnd *)(param_1 + 100),*(int *)(iVar1 + 0x100),*(int *)(iVar1 + 0x104),
                   *(int *)(iVar1 + 0x108) - *(int *)(iVar1 + 0x100),
                   *(int *)(iVar1 + 0x10c) - *(int *)(iVar1 + 0x104),1);
  puVar4 = FUN_00407210();
  SendMessageW((HWND)param_1[0x6c],0xf1,*(WPARAM *)(puVar4 + 0x1c),0);
  puVar4 = FUN_0040a2b0();
  iVar1 = *(int *)(puVar4 + 0x5c);
  puVar4 = FUN_0040a2b0();
  iVar2 = *(int *)(puVar4 + 0x5c);
  puVar4 = FUN_0040a2b0();
  FUN_0041d570(*(int *)(puVar4 + 0x5c) + 0x1389,iVar2 + 0x138a,iVar1 + 0x138b);
  iVar1 = param_1[0x22];
  CWnd::MoveWindow((CWnd *)(param_1 + 0x79),*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x14),
                   *(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x10),
                   *(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x14),1);
  FID_conflict_SetWindowTextW((HWND)&PTR_004b1080,pWVar3);
  puVar4 = FUN_0040a2b0();
  iVar1 = *(int *)(puVar4 + 0x5c);
  puVar4 = FUN_0040a2b0();
  iVar2 = *(int *)(puVar4 + 0x5c);
  puVar4 = FUN_0040a2b0();
  FUN_0041d570(*(int *)(puVar4 + 0x5c) + 0x1395,iVar2 + 0x1396,iVar1 + 0x1397);
  iVar1 = param_1[0x22];
  CWnd::MoveWindow((CWnd *)(param_1 + 699),*(int *)(iVar1 + 0x20),*(int *)(iVar1 + 0x24),
                   *(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x20),
                   *(int *)(iVar1 + 0x2c) - *(int *)(iVar1 + 0x24),1);
  CWnd::ShowWindow((CWnd *)(param_1 + 699),0);
  FID_conflict_SetWindowTextW((HWND)&PTR_004b1080,pWVar3);
  puVar4 = FUN_0040a2b0();
  iVar1 = *(int *)(puVar4 + 0x5c);
  puVar4 = FUN_0040a2b0();
  iVar2 = *(int *)(puVar4 + 0x5c);
  puVar4 = FUN_0040a2b0();
  FUN_0041d570(*(int *)(puVar4 + 0x5c) + 0x1392,iVar2 + 0x1393,iVar1 + 0x1394);
  iVar1 = param_1[0x22];
  CWnd::MoveWindow((CWnd *)(param_1 + 0x4fd),*(int *)(iVar1 + 0x30),*(int *)(iVar1 + 0x34),
                   *(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x30),
                   *(int *)(iVar1 + 0x3c) - *(int *)(iVar1 + 0x34),1);
  CWnd::ShowWindow((CWnd *)(param_1 + 0x4fd),0);
  FID_conflict_SetWindowTextW((HWND)&PTR_004b1080,pWVar3);
  puVar4 = FUN_0040a2b0();
  iVar1 = *(int *)(puVar4 + 0x5c);
  puVar4 = FUN_0040a2b0();
  iVar2 = *(int *)(puVar4 + 0x5c);
  puVar4 = FUN_0040a2b0();
  FUN_0041d570(*(int *)(puVar4 + 0x5c) + 0x138c,iVar2 + 0x138d,iVar1 + 0x138e);
  iVar1 = param_1[0x22];
  CWnd::MoveWindow((CWnd *)(param_1 + 0x73f),*(int *)(iVar1 + 0x40),*(int *)(iVar1 + 0x44),
                   *(int *)(iVar1 + 0x48) - *(int *)(iVar1 + 0x40),
                   *(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x44),1);
  FID_conflict_SetWindowTextW((HWND)&PTR_004b1080,pWVar3);
  puVar4 = FUN_0040a2b0();
  iVar1 = *(int *)(puVar4 + 0x5c);
  puVar4 = FUN_0040a2b0();
  iVar2 = *(int *)(puVar4 + 0x5c);
  puVar4 = FUN_0040a2b0();
  FUN_0041d570(*(int *)(puVar4 + 0x5c) + 0x138f,iVar2 + 0x1390,iVar1 + 0x1391);
  iVar1 = param_1[0x22];
  CWnd::MoveWindow((CWnd *)(param_1 + 0x981),*(int *)(iVar1 + 0x50),*(int *)(iVar1 + 0x54),
                   *(int *)(iVar1 + 0x58) - *(int *)(iVar1 + 0x50),
                   *(int *)(iVar1 + 0x5c) - *(int *)(iVar1 + 0x54),1);
  FID_conflict_SetWindowTextW((HWND)&PTR_004b1080,pWVar3);
  puVar4 = FUN_0040a2b0();
  FUN_0041d570(*(int *)(puVar4 + 0x5c) + 0x42b,0x42c,0);
  iVar1 = param_1[0x22];
  CWnd::MoveWindow((CWnd *)(param_1 + 0xbc3),*(int *)(iVar1 + 0x110),*(int *)(iVar1 + 0x114),
                   *(int *)(iVar1 + 0x118) - *(int *)(iVar1 + 0x110),
                   *(int *)(iVar1 + 0x11c) - *(int *)(iVar1 + 0x114),1);
  FID_conflict_SetWindowTextW((HWND)&PTR_004b1080,pWVar3);
  puVar4 = FUN_0040a2b0();
  FUN_0041d570(*(int *)(puVar4 + 0x5c) + 0x42d,0x42e,0);
  iVar1 = param_1[0x22];
  CWnd::MoveWindow((CWnd *)(param_1 + 0xe06),*(int *)(iVar1 + 0x120),*(int *)(iVar1 + 0x124),
                   *(int *)(iVar1 + 0x128) - *(int *)(iVar1 + 0x120),
                   *(int *)(iVar1 + 300) - *(int *)(iVar1 + 0x124),1);
  FID_conflict_SetWindowTextW((HWND)&PTR_004b1080,pWVar3);
  puVar4 = FUN_00407210();
  bVar12 = *(int *)(puVar4 + 0x24) == 0;
  *(bool *)(param_1 + 0x1049) = *(int *)(puVar4 + 0x24) != 0;
  if (bVar12) {
    param_1[0xe05] = 1;
    pcVar11 = SendMessageW_exref;
    SendMessageW((HWND)param_1[0xbcb],0xf3,1,0);
    pWVar3 = (LPCWSTR)param_1[0xe0e];
    param_1[0x1048] = 0;
  }
  else {
    param_1[0xe05] = 0;
    pcVar11 = SendMessageW_exref;
    SendMessageW((HWND)param_1[0xbcb],0xf3,0,0);
    pWVar3 = (LPCWSTR)param_1[0xe0e];
    param_1[0x1048] = 1;
  }
  (*pcVar11)(pWVar3,0xf3,!bVar12,0);
  puVar5 = FUN_00452728(8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 0;
    *puVar5 = CBitmap::vftable;
  }
  param_1[0x30] = (int)puVar5;
  pAVar6 = AfxGetModuleState();
  pvVar7 = LoadImageW(*(HINSTANCE *)(pAVar6 + 8),(LPCWSTR)0x139a,0,0,0,0x1000);
  Attach((void *)param_1[0x30],(int)pvVar7);
  pCVar8 = FUN_00452728(0x108);
  if (pCVar8 == (CWnd *)0x0) {
    pCVar8 = (CWnd *)0x0;
  }
  else {
    pCVar8 = FUN_00419740(pCVar8,param_1 + 0x32,param_1[0x30]);
  }
  param_1[0x2e] = (int)pCVar8;
  if (pCVar8 == (CWnd *)0x0) {
    pHVar9 = (HWND)0x0;
  }
  else {
    pHVar9 = *(HWND *)(pCVar8 + 0x20);
  }
  BVar10 = IsWindow(pHVar9);
  if (BVar10 != 0) {
    *(undefined4 *)(pCVar8 + 0x70) = 0;
    *(undefined4 *)(pCVar8 + 0x74) = 100;
    *(undefined4 *)(pCVar8 + 0x78) = 1;
    FUN_0041a4f0(pCVar8);
  }
  iVar1 = param_1[0x22];
  CWnd::MoveWindow((CWnd *)(param_1 + 0x32),*(int *)(iVar1 + 0x60),*(int *)(iVar1 + 100),
                   *(int *)(iVar1 + 0x68) - *(int *)(iVar1 + 0x60),
                   *(int *)(iVar1 + 0x6c) - *(int *)(iVar1 + 100),1);
  FID_conflict_SetWindowTextW((HWND)&PTR_004b1080,pWVar3);
  puVar5 = FUN_00452728(8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 0;
    *puVar5 = CBitmap::vftable;
  }
  param_1[0x31] = (int)puVar5;
  pAVar6 = AfxGetModuleState();
  pvVar7 = LoadImageW(*(HINSTANCE *)(pAVar6 + 8),(LPCWSTR)0x139b,0,0,0,0x1000);
  Attach((void *)param_1[0x31],(int)pvVar7);
  pCVar8 = FUN_00452728(0x108);
  if (pCVar8 == (CWnd *)0x0) {
    pCVar8 = (CWnd *)0x0;
  }
  else {
    pCVar8 = FUN_00419740(pCVar8,param_1 + 0x47,param_1[0x31]);
  }
  param_1[0x2f] = (int)pCVar8;
  if (pCVar8 == (CWnd *)0x0) {
    pHVar9 = (HWND)0x0;
  }
  else {
    pHVar9 = *(HWND *)(pCVar8 + 0x20);
  }
  BVar10 = IsWindow(pHVar9);
  if (BVar10 != 0) {
    *(undefined4 *)(pCVar8 + 0x70) = 0;
    *(undefined4 *)(pCVar8 + 0x74) = 100;
    *(undefined4 *)(pCVar8 + 0x78) = 1;
    FUN_0041a4f0(pCVar8);
  }
  iVar1 = param_1[0x22];
  CWnd::MoveWindow((CWnd *)(param_1 + 0x47),*(int *)(iVar1 + 0x70),*(int *)(iVar1 + 0x74),
                   *(int *)(iVar1 + 0x78) - *(int *)(iVar1 + 0x70),
                   *(int *)(iVar1 + 0x7c) - *(int *)(iVar1 + 0x74),1);
  FID_conflict_SetWindowTextW((HWND)&PTR_004b1080,pWVar3);
  (**(code **)(*param_1 + 0x160))();
  (**(code **)(*param_1 + 0x164))();
  ExceptionList = unaff_ESI;
  return;
}

