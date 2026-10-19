// Address: 0x0047af6a
// Name: FUN_0047af6a
// Category: MFC_CRT


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_0047af6a(byte *param_1,undefined4 *param_2,localeinfo_struct *param_3)

{
  DWORD *pDVar1;
  uint uVar2;
  _locale_t _Locale;
  FLT p_Var3;
  byte *_Str;
  _flt local_34;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  double local_c;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_3);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  _Str = param_1;
  if (param_1 == (byte *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_10 != '\0') {
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
    }
    return (float10)0;
  }
  while( true ) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = (byte)local_1c.locinfo[1].lc_category[0].locale[(uint)*_Str * 2] & 8;
    }
    else {
      uVar2 = __isctype_l((uint)*_Str,8,&local_1c);
    }
    if (uVar2 == 0) break;
    _Str = _Str + 1;
  }
  _Locale = (_locale_t)_strlen((char *)_Str);
  p_Var3 = __fltin2(&local_34,(char *)_Str,_Locale);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = _Str + p_Var3->nbytes;
  }
  uVar2 = p_Var3->flags;
  if ((uVar2 & 0x240) == 0) {
    if ((uVar2 & 0x81) == 0) {
      if (((uVar2 & 0x100) == 0) || (local_c = 0.0, p_Var3->dval != 0.0)) {
        local_c = p_Var3->dval;
        goto LAB_0047b070;
      }
    }
    else {
      local_c = _DAT_004c4510;
      if (*_Str == 0x2d) {
        local_c = -_DAT_004c4510;
      }
    }
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x22;
  }
  else {
    local_c = 0.0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
  }
LAB_0047b070:
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (float10)local_c;
}

