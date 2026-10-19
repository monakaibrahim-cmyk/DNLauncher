// Address: 0x00476364
// Name: _wcsncpy_s
// Category: MFC_CRT


/* Library Function - Single Match
    _wcsncpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wcsncpy_s(wchar_t *_Dst,rsize_t _SizeInWords,wchar_t *_Src,rsize_t _MaxCount)

{
  wchar_t wVar1;
  DWORD *pDVar2;
  wchar_t *pwVar3;
  rsize_t rVar4;
  errno_t eVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (wchar_t *)0x0) {
      if (_SizeInWords == 0) {
        return 0;
      }
    }
    else {
LAB_00476388:
      if (_SizeInWords != 0) {
        if (_MaxCount == 0) {
          *_Dst = L'\0';
          return 0;
        }
        if (_Src != (wchar_t *)0x0) {
          pwVar3 = _Dst;
          rVar4 = _SizeInWords;
          if (_MaxCount == 0xffffffff) {
            do {
              wVar1 = *_Src;
              *pwVar3 = wVar1;
              pwVar3 = pwVar3 + 1;
              _Src = _Src + 1;
              if (wVar1 == L'\0') break;
              rVar4 = rVar4 - 1;
            } while (rVar4 != 0);
          }
          else {
            do {
              wVar1 = *_Src;
              *pwVar3 = wVar1;
              pwVar3 = pwVar3 + 1;
              _Src = _Src + 1;
              if ((wVar1 == L'\0') || (rVar4 = rVar4 - 1, rVar4 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pwVar3 = L'\0';
            }
          }
          if (rVar4 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInWords - 1] = L'\0';
            return 0x50;
          }
          *_Dst = L'\0';
          pDVar2 = FUN_0047b849();
          eVar5 = 0x22;
          *pDVar2 = 0x22;
          goto LAB_00476399;
        }
        *_Dst = L'\0';
      }
    }
  }
  else if (_Dst != (wchar_t *)0x0) goto LAB_00476388;
  pDVar2 = FUN_0047b849();
  eVar5 = 0x16;
  *pDVar2 = 0x16;
LAB_00476399:
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}

