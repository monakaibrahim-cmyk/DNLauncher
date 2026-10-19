// Address: 0x00477d3f
// Name: __vsprintf_s_l
// Category: MFC_CRT


/* Library Function - Single Match
    __vsprintf_s_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  DWORD *pDVar1;
  int iVar2;
  
  if (_Format == (char *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if ((_DstBuf == (char *)0x0) || (_DstSize == 0)) {
      pDVar1 = FUN_0047b849();
      *pDVar1 = 0x16;
    }
    else {
      iVar2 = __vsnprintf_helper(&DAT_00486392,_DstBuf,_DstSize,(int)_Format,_Locale,_ArgList);
      if (iVar2 < 0) {
        *_DstBuf = '\0';
      }
      if (iVar2 != -2) {
        return iVar2;
      }
      pDVar1 = FUN_0047b849();
      *pDVar1 = 0x22;
    }
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}

