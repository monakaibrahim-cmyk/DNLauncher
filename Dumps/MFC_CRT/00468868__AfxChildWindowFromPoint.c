// Address: 0x00468868
// Name: _AfxChildWindowFromPoint
// Category: MFC_CRT


/* Library Function - Single Match
    struct HWND__ * __stdcall _AfxChildWindowFromPoint(struct HWND__ *,struct tagPOINT)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

HWND__ * _AfxChildWindowFromPoint(HWND__ *param_1,tagPOINT param_2)

{
  POINT pt;
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  UINT uCmd;
  tagRECT local_14;
  
  ClientToScreen(param_1,&param_2);
  uCmd = 5;
  do {
    param_1 = GetWindow(param_1,uCmd);
    if (param_1 == (HWND)0x0) {
      return (HWND__ *)0x0;
    }
    iVar1 = GetDlgCtrlID(param_1);
    if (((short)iVar1 != 0) && (uVar2 = GetWindowLongW(param_1,-0x10), (uVar2 & 0x10000000) != 0)) {
      GetWindowRect(param_1,&local_14);
      pt.y = param_2.y;
      pt.x = param_2.x;
      BVar3 = PtInRect(&local_14,pt);
      if (BVar3 != 0) {
        return param_1;
      }
    }
    uCmd = 2;
  } while( true );
}

