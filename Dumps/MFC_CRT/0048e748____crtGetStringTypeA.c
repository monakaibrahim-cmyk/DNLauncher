// Address: 0x0048e748
// Name: ___crtGetStringTypeA
// Category: MFC_CRT


/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  BOOL BVar1;
  int in_stack_00000020;
  _LocaleUpdate local_14 [8];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Plocinfo);
  BVar1 = FUN_0048e590(local_14,_DWInfoType,_LpSrcStr,_CchSrc,_LpCharType,_Code_page,_BError,
                       in_stack_00000020);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return BVar1;
}

