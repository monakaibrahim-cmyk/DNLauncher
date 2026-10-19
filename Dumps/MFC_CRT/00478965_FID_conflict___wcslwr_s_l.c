// Address: 0x00478965
// Name: FID_conflict:__wcslwr_s_l
// Category: MFC_CRT


/* Library Function - Multiple Matches With Different Base Names
    __wcslwr_s_l
    __wcsupr_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl FID_conflict___wcslwr_s_l(wchar_t *_Str,size_t _SizeInWords,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct *unaff_EBX;
  _LocaleUpdate local_14 [8];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  iVar1 = _wcsupr_s_l_stat((wchar_t *)_SizeInWords,(uint)local_14,unaff_EBX);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}

