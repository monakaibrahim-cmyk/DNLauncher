// Address: 0x00471b3e
// Name: _AfxDlgSetFocus
// Category: MFC_CRT


/* Library Function - Single Match
    void __stdcall _AfxDlgSetFocus(class CWnd *)
   
   Library: Visual Studio 2005 Release */

void _AfxDlgSetFocus(CWnd *param_1)

{
  ulong uVar1;
  
  uVar1 = _AfxGetDlgCode(param_1,(tagMSG *)0x0);
  if ((uVar1 & 8) != 0) {
    SendMessageW(*(HWND *)(param_1 + 0x20),0xb1,0,-1);
  }
  CWnd::SetFocus(param_1);
  return;
}

