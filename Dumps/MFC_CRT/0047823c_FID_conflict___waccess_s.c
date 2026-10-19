// Address: 0x0047823c
// Name: FID_conflict:__waccess_s
// Category: MFC_CRT


/* Library Function - Multiple Matches With Different Base Names
    __access_s
    __waccess_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl FID_conflict___waccess_s(wchar_t *_Filename,int _AccessMode)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  if ((_Filename == (wchar_t *)0x0) || ((_AccessMode & 0xfffffff9U) != 0)) {
    pDVar1 = FUN_0047b85c();
    *pDVar1 = 0;
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  DVar2 = GetFileAttributesA((LPCSTR)_Filename);
  if (DVar2 == 0xffffffff) {
    DVar2 = GetLastError();
    FUN_0047b86f(DVar2);
  }
  else {
    if ((((DVar2 & 0x10) != 0) || ((DVar2 & 1) == 0)) || ((_AccessMode & 2U) == 0)) {
      return 0;
    }
    pDVar1 = FUN_0047b85c();
    *pDVar1 = 5;
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0xd;
  }
  pDVar1 = FUN_0047b849();
  return *pDVar1;
}

