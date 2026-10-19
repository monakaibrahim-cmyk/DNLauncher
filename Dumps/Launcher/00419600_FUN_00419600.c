// Address: 0x00419600
// Name: FUN_00419600
// Category: Launcher


void __fastcall FUN_00419600(CWnd *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00498a68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = CColorStatic::vftable;
  local_4 = 0;
  *(undefined ***)(param_1 + 0x54) = CBrush::vftable;
  CGdiObject::~CGdiObject((CGdiObject *)(param_1 + 0x54));
  local_4 = 0xffffffff;
  FID_conflict__CHotKeyCtrl(param_1);
  ExceptionList = local_c;
  return;
}

