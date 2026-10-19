// Address: 0x0041c830
// Name: FUN_0041c830
// Category: Launcher


void __fastcall FUN_0041c830(CWnd *param_1)

{
  CWnd *pCVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004990f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = CxSkinButton::vftable;
  local_4 = 10;
  if (*(HGDIOBJ *)(param_1 + 0x8fc) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x8fc));
  }
  pCVar1 = param_1 + 0x6f4;
  *(undefined ***)pCVar1 = CxImage::vftable;
  FUN_00434a90((int)pCVar1);
  FUN_004349e0((int)pCVar1);
  pCVar1 = param_1 + 0x4f8;
  local_4._0_1_ = 9;
  *(undefined ***)pCVar1 = CxImage::vftable;
  FUN_00434a90((int)pCVar1);
  FUN_004349e0((int)pCVar1);
  pCVar1 = param_1 + 0x2fc;
  local_4._0_1_ = 8;
  *(undefined ***)pCVar1 = CxImage::vftable;
  FUN_00434a90((int)pCVar1);
  FUN_004349e0((int)pCVar1);
  pCVar1 = param_1 + 0x100;
  local_4._0_1_ = 7;
  *(undefined ***)pCVar1 = CxImage::vftable;
  FUN_00434a90((int)pCVar1);
  FUN_004349e0((int)pCVar1);
  local_4._0_1_ = 6;
  *(undefined ***)(param_1 + 0xf8) = CBitmap::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0xf8));
  local_4._0_1_ = 5;
  *(undefined ***)(param_1 + 0xf0) = CBitmap::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0xf0));
  local_4._0_1_ = 4;
  *(undefined ***)(param_1 + 0xe8) = CBitmap::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0xe8));
  local_4._0_1_ = 3;
  *(undefined ***)(param_1 + 0xe0) = CBitmap::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0xe0));
  local_4._0_1_ = 2;
  *(undefined ***)(param_1 + 0xd8) = CBitmap::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0xd8));
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0xd0) = CBitmap::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0xd0));
  local_4 = (uint)local_4._1_3_ << 8;
  CToolTipCtrl::~CToolTipCtrl((CToolTipCtrl *)(param_1 + 0x60));
  local_4 = 0xffffffff;
  FID_conflict__CHotKeyCtrl(param_1);
  ExceptionList = local_c;
  return;
}

