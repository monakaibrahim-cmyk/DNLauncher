// Address: 0x00475955
// Name: _wcstok
// Category: MFC_CRT


/* Library Function - Single Match
    _wcstok
   
   Library: Visual Studio 2005 Release */

wchar_t * __cdecl _wcstok(wchar_t *_Str,wchar_t *_Delim)

{
  wchar_t wVar1;
  _ptiddata p_Var2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  wchar_t *pwVar5;
  
  p_Var2 = __getptd();
  if (_Str == (wchar_t *)0x0) {
    _Str = p_Var2->_wtoken;
  }
  wVar4 = *_Str;
  if (wVar4 != L'\0') {
    wVar1 = *_Delim;
    pwVar3 = _Delim;
    do {
      while ((wVar1 != L'\0' && (wVar1 != wVar4))) {
        wVar1 = pwVar3[1];
        pwVar3 = pwVar3 + 1;
      }
      if (*pwVar3 == L'\0') break;
      _Str = _Str + 1;
      wVar4 = *_Str;
      wVar1 = *_Delim;
      pwVar3 = _Delim;
    } while (wVar4 != L'\0');
  }
  pwVar3 = _Str;
  if (*_Str != L'\0') {
    do {
      pwVar5 = _Delim;
      if (*_Delim != L'\0') {
        wVar4 = *_Delim;
        do {
          if (wVar4 == *pwVar3) break;
          pwVar5 = pwVar5 + 1;
          wVar4 = *pwVar5;
        } while (wVar4 != L'\0');
      }
      if (*pwVar5 != L'\0') {
        *pwVar3 = L'\0';
        pwVar3 = pwVar3 + 1;
        break;
      }
      pwVar3 = pwVar3 + 1;
    } while (*pwVar3 != L'\0');
  }
  p_Var2->_wtoken = pwVar3;
  return (wchar_t *)(-(uint)(_Str != pwVar3) & (uint)_Str);
}

