// Address: 0x0045e371
// Name: _AfxGetMouseScrollLines
// Category: Utility


/* Library Function - Single Match
    unsigned int __stdcall _AfxGetMouseScrollLines(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

uint _AfxGetMouseScrollLines(void)

{
  HWND hWnd;
  
  if (DAT_004c8f18 == 0) {
    DAT_004c8f18 = 1;
    if (DAT_004cab7c == 0) {
      pvParam_004caae8 = (PVOID)0x3;
      SystemParametersInfoW(0x68,0,&pvParam_004caae8,0);
    }
    else {
      if (DAT_004caaf0 == 0) {
        DAT_004caaec = RegisterWindowMessageW(L"MSH_SCROLL_LINES_MSG");
        if (DAT_004caaec == 0) {
          DAT_004caaf0 = 1;
          return (uint)pvParam_004caae8;
        }
        DAT_004caaf0 = 2;
      }
      if (((DAT_004caaf0 == 2) &&
          (hWnd = FindWindowW(L"MouseZ",L"Magellan MSWHEEL"), hWnd != (HWND)0x0)) &&
         (DAT_004caaec != 0)) {
        pvParam_004caae8 = (PVOID)SendMessageW(hWnd,DAT_004caaec,0,0);
      }
    }
  }
  return (uint)pvParam_004caae8;
}

