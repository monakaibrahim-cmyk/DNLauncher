// Address: 0x00468824
// Name: _AfxCompareClassName
// Category: MFC_CRT


/* Library Function - Single Match
    int __stdcall _AfxCompareClassName(struct HWND__ *,wchar_t const *)
   
   Library: Visual Studio 2005 Release */

int _AfxCompareClassName(HWND__ *param_1,wchar_t *param_2)

{
  int iVar1;
  WCHAR local_48 [32];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  GetClassNameW(param_1,local_48,0x20);
  AfxInvariantStrICmp(local_48,param_2);
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

