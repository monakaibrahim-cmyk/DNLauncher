// Address: 0x00471a46
// Name: _AfxGetDlgCode
// Category: MFC_CRT


/* Library Function - Single Match
    unsigned long __stdcall _AfxGetDlgCode(class CWnd *,struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

ulong _AfxGetDlgCode(CWnd *param_1,tagMSG *param_2)

{
  ulong uVar1;
  WPARAM wParam;
  
  if (param_1 == (CWnd *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_2 == (tagMSG *)0x0) {
      wParam = 0;
    }
    else {
      wParam = param_2->wParam;
    }
    uVar1 = SendMessageW(*(HWND *)(param_1 + 0x20),0x87,wParam,(LPARAM)param_2);
  }
  return uVar1;
}

