// Address: 0x00492bf4
// Name: ___crtCompareStringA
// Category: MFC_CRT


/* Library Function - Single Match
    ___crtCompareStringA
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl
___crtCompareStringA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,
          int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page)

{
  int iVar1;
  _LocaleUpdate local_14 [8];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Plocinfo);
  iVar1 = FUN_0049286b((int *)local_14,(byte *)_LpString1,(LCID)_LocaleName,_DwCmpFlags,_CchCount1,
                       (byte *)_LpString2,_CchCount2,_Code_page);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}

