// Address: 0x00495b1e
// Name: ATL::CAtlBaseModule::CAtlBaseModule
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall ATL::CAtlBaseModule::CAtlBaseModule(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall ATL::CAtlBaseModule::CAtlBaseModule(CAtlBaseModule *this)

{
  long lVar1;
  _OSVERSIONINFOA local_9c;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)(local_9c.szCSDVersion + 0xc);
  _ATL_BASE_MODULE70::_ATL_BASE_MODULE70((_ATL_BASE_MODULE70 *)this);
  *(undefined4 *)(this + 8) = 0x400000;
  *(undefined4 *)(this + 4) = 0x400000;
  *(undefined4 *)this = 0x3c;
  this[0xc] = (CAtlBaseModule)0x0;
  _memset(&local_9c,0,0x94);
  local_9c.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_9c);
  if (local_9c.dwPlatformId == 2) {
    if (local_9c.dwMajorVersion < 5) goto LAB_00495b9a;
  }
  else if ((local_9c.dwPlatformId != 1) ||
          ((local_9c.dwMajorVersion < 5 &&
           ((local_9c.dwMajorVersion != 4 || (local_9c.dwMinorVersion == 0)))))) goto LAB_00495b9a;
  this[0xc] = (CAtlBaseModule)0x1;
LAB_00495b9a:
  *(undefined4 *)(this + 0x10) = 0x800;
  *(undefined **)(this + 0x14) = &DAT_004abeac;
  lVar1 = CComCriticalSection::Init((CComCriticalSection *)(this + 0x18));
  if (lVar1 < 0) {
    DAT_004cbc9d = 1;
  }
  __security_check_cookie(local_8 ^ (uint)(local_9c.szCSDVersion + 0xc));
  return;
}

