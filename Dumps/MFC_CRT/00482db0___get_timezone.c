// Address: 0x00482db0
// Name: __get_timezone
// Category: MFC_CRT


/* Library Function - Multiple Matches With Different Base Names
    __get_dstbias
    __get_timezone
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_timezone(long *_Timezone)

{
  DWORD *pDVar1;
  
  if (_Timezone == (long *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *_Timezone = DAT_004c4538;
  return 0;
}

