// Address: 0x0047d881
// Name: _wcscspn
// Category: MFC_CRT


/* Library Function - Single Match
    _wcscspn
   
   Library: Visual Studio 2005 Release */

size_t __cdecl _wcscspn(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  
  pwVar1 = _Str;
  if (*_Str != L'\0') {
    do {
      if (*_Control != L'\0') {
        pwVar3 = _Control;
        wVar2 = *_Control;
        do {
          if (wVar2 == *pwVar1) goto LAB_0047d8b9;
          pwVar3 = pwVar3 + 1;
          wVar2 = *pwVar3;
        } while (wVar2 != L'\0');
      }
      pwVar1 = pwVar1 + 1;
    } while (*pwVar1 != L'\0');
  }
LAB_0047d8b9:
  return (int)pwVar1 - (int)_Str >> 1;
}

