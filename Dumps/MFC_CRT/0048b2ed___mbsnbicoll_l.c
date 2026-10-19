// Address: 0x0048b2ed
// Name: __mbsnbicoll_l
// Category: MFC_CRT


/* Library Function - Single Match
    __mbsnbicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  DWORD *pDVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if ((local_14.mbcinfo)->ismbcodepage == 0) {
      iVar2 = __strnicoll_l((char *)_Str1,(char *)_Str2,_MaxCount,_Locale);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,*(LPCWSTR *)(local_14.mbcinfo)->mbulinfo,0x1001,(LPCSTR)_Str1,
                         _MaxCount,(LPCSTR)_Str2,_MaxCount,(local_14.mbcinfo)->mbcodepage);
      if (iVar2 == 0) goto LAB_0048b3b6;
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_0048b3b6:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

