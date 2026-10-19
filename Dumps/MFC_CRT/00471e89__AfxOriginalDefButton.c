// Address: 0x00471e89
// Name: _AfxOriginalDefButton
// Category: MFC_CRT


/* Library Function - Single Match
    int __stdcall _AfxOriginalDefButton(class CWnd *)
   
   Library: Visual Studio 2005 Release */

int _AfxOriginalDefButton(CWnd *param_1)

{
  uint uVar1;
  
  uVar1 = SendMessageW(*(HWND *)(param_1 + 0x20),0x400,0,0);
  if ((short)(uVar1 >> 0x10) == 0x534b) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

