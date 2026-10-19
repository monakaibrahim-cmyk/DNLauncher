// Address: 0x0047a609
// Name: __get_osplatform
// Category: MFC_CRT


/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_004cae3c != 0)) {
    *param_1 = DAT_004cae3c;
    return 0;
  }
  pDVar1 = FUN_0047b849();
  *pDVar1 = 0x16;
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}

