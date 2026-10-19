// Address: 0x00479986
// Name: _feof
// Category: MFC_CRT


/* Library Function - Single Match
    _feof
   
   Library: Visual Studio 2005 Release */

int __cdecl _feof(FILE *_File)

{
  DWORD *pDVar1;
  
  if (_File == (FILE *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0;
  }
  return _File->_flag & 0x10;
}

