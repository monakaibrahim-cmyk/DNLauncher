// Address: 0x00453fa4
// Name: _IsPlatformNT
// Category: Utility


/* Library Function - Single Match
    _IsPlatformNT
   
   Library: Visual Studio 2005 Release */

void _IsPlatformNT(void)

{
  _OSVERSIONINFOA local_9c;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  _memset(&local_9c.dwMajorVersion,0,0x90);
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

