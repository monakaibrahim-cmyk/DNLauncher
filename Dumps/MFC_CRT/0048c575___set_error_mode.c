// Address: 0x0048c575
// Name: __set_error_mode
// Category: MFC_CRT


/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_004cae24;
      DAT_004cae24 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_004cae24;
    }
  }
  pDVar2 = FUN_0047b849();
  *pDVar2 = 0x16;
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}

