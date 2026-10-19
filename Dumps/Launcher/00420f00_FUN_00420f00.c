// Address: 0x00420f00
// Name: FUN_00420f00
// Category: Launcher


void __fastcall FUN_00420f00(CWnd *param_1)

{
  undefined **local_80 [29];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00497928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog((CDialog *)local_80,200,param_1);
  local_80[0] = CDnOptionDlg::vftable;
  local_4 = 0;
  FUN_0045a232((CDialog *)local_80);
  local_4 = 0xffffffff;
  CDialog::~CDialog((CDialog *)local_80);
  ExceptionList = local_c;
  return;
}

