// Address: 0x00419550
// Name: FUN_00419550
// Category: Launcher


CWnd * FUN_00419550(CWnd *param_1)

{
  DWORD color;
  HBRUSH pHVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498aa3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CWnd::CWnd(param_1);
  *(undefined ***)param_1 = CColorStatic::vftable;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined ***)(param_1 + 0x54) = CBrush::vftable;
  local_4 = 1;
  color = GetSysColor(0xf);
  *(DWORD *)(param_1 + 0x5c) = color;
  *(undefined4 *)(param_1 + 0x60) = 0;
  pHVar1 = CreateSolidBrush(color);
  Attach(param_1 + 0x54,(int)pHVar1);
  ExceptionList = local_c;
  return param_1;
}

