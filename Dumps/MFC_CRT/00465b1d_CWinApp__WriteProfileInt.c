// Address: 0x00465b1d
// Name: CWinApp::WriteProfileInt
// Category: MFC_CRT


/* Library Function - Single Match
    public: int __thiscall CWinApp::WriteProfileInt(wchar_t const *,wchar_t const *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __thiscall CWinApp::WriteProfileInt(CWinApp *this,wchar_t *param_1,wchar_t *param_2,int param_3)

{
  HKEY hKey;
  int iVar1;
  wchar_t local_28 [16];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x54) == 0) {
    _swprintf_s(local_28,0x10,L"%d",param_3);
    WritePrivateProfileStringW(param_1,param_2,local_28,*(LPCWSTR *)(this + 0x68));
  }
  else {
    hKey = GetSectionKey(this,param_1);
    if (hKey != (HKEY)0x0) {
      RegSetValueExW(hKey,param_2,0,4,(BYTE *)&param_3,4);
      RegCloseKey(hKey);
    }
  }
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

