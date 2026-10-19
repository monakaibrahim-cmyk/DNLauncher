// Address: 0x004771f7
// Name: __wfopen_s
// Category: MFC_CRT


/* Library Function - Single Match
    __wfopen_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __wfopen_s(FILE **_File,wchar_t *_Filename,wchar_t *_Mode)

{
  DWORD *pDVar1;
  FILE *pFVar2;
  DWORD DVar3;
  
  if (_File == (FILE **)0x0) {
    pDVar1 = FUN_0047b849();
    DVar3 = 0x16;
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    pFVar2 = __wfsopen(_Filename,_Mode,0x80);
    *_File = pFVar2;
    if (pFVar2 == (FILE *)0x0) {
      pDVar1 = FUN_0047b849();
      DVar3 = *pDVar1;
    }
    else {
      DVar3 = 0;
    }
  }
  return DVar3;
}

