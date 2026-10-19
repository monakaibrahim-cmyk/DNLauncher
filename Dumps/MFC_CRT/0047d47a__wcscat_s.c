// Address: 0x0047d47a
// Name: _wcscat_s
// Category: MFC_CRT


/* Library Function - Single Match
    _wcscat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wcscat_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src)

{
  wchar_t wVar1;
  DWORD *pDVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    pwVar3 = _Dst;
    if (_Src != (wchar_t *)0x0) {
      do {
        if (*pwVar3 == L'\0') break;
        pwVar3 = pwVar3 + 1;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        do {
          wVar1 = *_Src;
          *pwVar3 = wVar1;
          pwVar3 = pwVar3 + 1;
          _Src = _Src + 1;
          if (wVar1 == L'\0') break;
          _SizeInWords = _SizeInWords - 1;
        } while (_SizeInWords != 0);
        if (_SizeInWords != 0) {
          return 0;
        }
        *_Dst = L'\0';
        pDVar2 = FUN_0047b849();
        eVar4 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_0047d499;
      }
    }
    *_Dst = L'\0';
  }
  pDVar2 = FUN_0047b849();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_0047d499:
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}

