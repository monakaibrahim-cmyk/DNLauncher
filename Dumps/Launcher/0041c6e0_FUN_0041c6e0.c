// Address: 0x0041c6e0
// Name: FUN_0041c6e0
// Category: Launcher


CWnd * FUN_0041c6e0(CWnd *param_1)

{
  DWORD DVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004991a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CWnd::CWnd(param_1);
  local_4 = 0;
  *(undefined ***)param_1 = CxSkinButton::vftable;
  CToolTipCtrl::CToolTipCtrl((CToolTipCtrl *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined ***)(param_1 + 0xd0) = CBitmap::vftable;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined ***)(param_1 + 0xd8) = CBitmap::vftable;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined ***)(param_1 + 0xe0) = CBitmap::vftable;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined ***)(param_1 + 0xe8) = CBitmap::vftable;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined ***)(param_1 + 0xf0) = CBitmap::vftable;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined ***)(param_1 + 0xf8) = CBitmap::vftable;
  local_4._0_1_ = 7;
  FUN_004349c0(param_1 + 0x100,0);
  local_4._0_1_ = 8;
  FUN_004349c0(param_1 + 0x2fc,0);
  local_4._0_1_ = 9;
  FUN_004349c0(param_1 + 0x4f8,0);
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_004349c0(param_1 + 0x6f4,0);
  *(undefined2 *)(param_1 + 0x904) = 1;
  *(undefined2 *)(param_1 + 0x8f4) = 0;
  *(undefined4 *)(param_1 + 0x8fc) = 0;
  DVar1 = GetSysColor(0x12);
  *(DWORD *)(param_1 + 0x8f8) = DVar1;
  param_1[0x54] = (CWnd)0x0;
  param_1[0x5c] = (CWnd)0x0;
  param_1[0x5d] = (CWnd)0x0;
  *(undefined4 *)(param_1 + 0x900) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x8f0) = 0;
  ExceptionList = local_c;
  return param_1;
}

