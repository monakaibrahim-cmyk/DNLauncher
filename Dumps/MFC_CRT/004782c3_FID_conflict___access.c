// Address: 0x004782c3
// Name: FID_conflict:__access
// Category: MFC_CRT


/* Library Function - Multiple Matches With Different Base Names
    __access
    __waccess
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___access(wchar_t *_Filename,int _AccessMode)

{
  errno_t eVar1;
  
  eVar1 = FID_conflict___waccess_s(_Filename,_AccessMode);
  return -(uint)(eVar1 != 0);
}

