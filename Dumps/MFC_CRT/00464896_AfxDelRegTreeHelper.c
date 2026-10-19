// Address: 0x00464896
// Name: AfxDelRegTreeHelper
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    long __stdcall AfxDelRegTreeHelper(struct HKEY__ *,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)
   
   Library: Visual Studio 2005 Release */

long AfxDelRegTreeHelper(HKEY__ *param_1,
                        CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2)

{
  LSTATUS LVar1;
  long lVar2;
  HKEY local_22c;
  int local_228 [2];
  void *local_220;
  int local_218;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_214;
  local_214[0] = L'\x18';
  local_214[1] = L'\0';
  local_218 = 0x4648ba;
  LVar1 = RegOpenKeyW(param_1,*(LPCWSTR *)param_2,&local_22c);
  if (LVar1 == 0) {
    while( true ) {
      LVar1 = RegEnumKeyW(local_22c,0,local_214,0x104);
      if (LVar1 != 0) break;
      local_218 = 0;
      FUN_004035c0(local_228,local_214);
      local_218._0_1_ = 1;
      LVar1 = AfxDelRegTreeHelper(local_22c,
                                  (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                   *)local_228);
      local_218 = (uint)local_218._1_3_ << 8;
      FUN_004031b0((undefined4 *)(local_228[0] + -0x10));
      if (LVar1 != 0) break;
      local_218 = -1;
    }
    if ((LVar1 == 0x103) || (LVar1 == 0x3f2)) {
      RegDeleteKeyW(param_1,*(LPCWSTR *)param_2);
    }
    RegCloseKey(local_22c);
  }
  ExceptionList = local_220;
  lVar2 = __security_check_cookie(local_8 ^ (uint)local_214);
  return lVar2;
}

