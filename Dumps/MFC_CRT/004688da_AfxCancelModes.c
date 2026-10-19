// Address: 0x004688da
// Name: AfxCancelModes
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall AfxCancelModes(struct HWND__ *)
   
   Library: Visual Studio 2005 Release */

void AfxCancelModes(HWND__ *param_1)

{
  HWND hWnd;
  int iVar1;
  uint uVar2;
  HWND pHVar3;
  HWND pHVar4;
  
  hWnd = GetFocus();
  if (((hWnd != (HWND)0x0) && (hWnd != param_1)) &&
     ((iVar1 = _AfxIsComboBoxControl(hWnd,3), iVar1 != 0 ||
      ((hWnd = GetParent(hWnd), hWnd != param_1 &&
       (iVar1 = _AfxIsComboBoxControl(hWnd,2), iVar1 != 0)))))) {
    if ((param_1 != (HWND__ *)0x0) &&
       (uVar2 = GetWindowLongW(param_1,-0x10), (uVar2 & 0x40000000) != 0)) {
      pHVar3 = GetParent(param_1);
      pHVar4 = GetDesktopWindow();
      if (pHVar3 == pHVar4) {
        return;
      }
    }
    SendMessageW(hWnd,0x14f,0,0);
  }
  return;
}

