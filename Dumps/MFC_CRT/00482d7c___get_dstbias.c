// Address: 0x00482d7c
// Name: __get_dstbias
// Category: MFC_CRT


/* Library Function - Single Match
    __get_dstbias
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_dstbias(long *_Daylight_savings_bias)

{
  DWORD *pDVar1;
  
  if (_Daylight_savings_bias == (long *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *_Daylight_savings_bias = DAT_004c4540;
  return 0;
}

