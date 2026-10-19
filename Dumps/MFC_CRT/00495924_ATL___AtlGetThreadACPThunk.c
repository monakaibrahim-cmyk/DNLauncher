// Address: 0x00495924
// Name: ATL::_AtlGetThreadACPThunk
// Category: MFC_CRT


/* Library Function - Single Match
    unsigned int __stdcall ATL::_AtlGetThreadACPThunk(void)
   
   Library: Visual Studio 2005 Release */

uint ATL::_AtlGetThreadACPThunk(void)

{
  code *Value;
  uint uVar1;
  _OSVERSIONINFOA local_9c;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  if ((local_9c.dwPlatformId != 2) || (Value = (code *)&LAB_00495920, local_9c.dwMajorVersion < 5))
  {
    Value = _AtlGetThreadACPFake;
  }
  InterlockedExchange((LONG *)&Target_004c4f5c,(LONG)Value);
  (*(code *)Target_004c4f5c)();
  uVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar1;
}

