// Address: 0x00453ffc
// Name: _InitMultipleMonitorStubs
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _InitMultipleMonitorStubs
   
   Library: Visual Studio 2005 Release */

bool _InitMultipleMonitorStubs(void)

{
  HMODULE hModule;
  char *lpProcName;
  
  if (DAT_004ca73c != 0) {
    return DAT_004ca730 != (FARPROC)0x0;
  }
  DAT_004ca740 = _IsPlatformNT();
  hModule = GetModuleHandleW(L"USER32");
  if ((((hModule != (HMODULE)0x0) &&
       (_DAT_004ca720 = GetProcAddress(hModule,"GetSystemMetrics"), _DAT_004ca720 != (FARPROC)0x0))
      && (DAT_004ca724 = GetProcAddress(hModule,"MonitorFromWindow"), DAT_004ca724 != (FARPROC)0x0))
     && (((_DAT_004ca728 = GetProcAddress(hModule,"MonitorFromRect"), _DAT_004ca728 != (FARPROC)0x0
          && (_DAT_004ca72c = GetProcAddress(hModule,"MonitorFromPoint"),
             _DAT_004ca72c != (FARPROC)0x0)) &&
         ((_DAT_004ca734 = GetProcAddress(hModule,"EnumDisplayMonitors"),
          _DAT_004ca734 != (FARPROC)0x0 &&
          (_DAT_004ca738 = GetProcAddress(hModule,"EnumDisplayDevicesW"),
          _DAT_004ca738 != (FARPROC)0x0)))))) {
    if (DAT_004ca740 == 0) {
      lpProcName = "GetMonitorInfoA";
    }
    else {
      lpProcName = "GetMonitorInfoW";
    }
    DAT_004ca730 = GetProcAddress(hModule,lpProcName);
    if (DAT_004ca730 != (FARPROC)0x0) {
      DAT_004ca73c = 1;
      return true;
    }
  }
  _DAT_004ca738 = (FARPROC)0x0;
  _DAT_004ca734 = (FARPROC)0x0;
  DAT_004ca730 = (FARPROC)0x0;
  _DAT_004ca72c = (FARPROC)0x0;
  _DAT_004ca728 = (FARPROC)0x0;
  DAT_004ca724 = (FARPROC)0x0;
  _DAT_004ca720 = (FARPROC)0x0;
  DAT_004ca73c = 1;
  return false;
}

