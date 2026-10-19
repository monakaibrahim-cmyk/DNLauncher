// Address: 0x0041c9c0
// Name: FUN_0041c9c0
// Category: Launcher


void __fastcall FUN_0041c9c0(CWnd *param_1)

{
  uint uVar1;
  
  uVar1 = GetWindowLongW(*(HWND *)(param_1 + 0x20),-0x10);
  *(uint *)(param_1 + 0x58) = uVar1 & 0xff;
  if (((byte)uVar1 & 3) == 3) {
    *(undefined4 *)(param_1 + 0x58) = 2;
  }
  else {
    *(uint *)(param_1 + 0x58) = (-(uint)(((byte)uVar1 & 9) != 9) & 0xfffffffc) + 4;
  }
  FUN_0045f86d();
  CWnd::ModifyStyle(param_1,0,0xb,0);
  return;
}

