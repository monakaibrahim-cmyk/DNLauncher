// Address: 0x004549ed
// Name: FUN_004549ed
// Category: Utility


uint __thiscall FUN_004549ed(void *this,LONG param_1,LONG param_2,uint *param_3)

{
  tagPOINT tVar1;
  HWND__ *hWnd;
  uint uVar2;
  uint uVar3;
  
  tVar1.y = param_2;
  tVar1.x = param_1;
  hWnd = _AfxChildWindowFromPoint(*(HWND__ **)((int)this + 0x20),tVar1);
  if (hWnd == (HWND__ *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = GetDlgCtrlID(hWnd);
    uVar2 = uVar2 & 0xffff;
    if ((param_3 != (uint *)0x0) && (0x27 < *param_3)) {
      uVar3 = *(uint *)((int)this + 0x20);
      param_3[1] = param_3[1] | 1;
      param_3[9] = 0xffffffff;
      param_3[2] = uVar3;
      param_3[3] = (uint)hWnd;
      uVar3 = SendMessageW(hWnd,0x87,0,0);
      if ((uVar3 & 0x2000) == 0) {
        param_3[1] = param_3[1] | 0x80000002;
      }
    }
  }
  return uVar2;
}

