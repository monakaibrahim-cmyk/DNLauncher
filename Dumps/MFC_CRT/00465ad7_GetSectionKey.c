// Address: 0x00465ad7
// Name: GetSectionKey
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: struct HKEY__ * __thiscall CWinApp::GetSectionKey(char const *)
    public: struct HKEY__ * __thiscall CWinApp::GetSectionKey(wchar_t const *)
   
   Library: Visual Studio 2005 Release */

HKEY __thiscall GetSectionKey(void *this,LPCWSTR param_1)

{
  HKEY__ *hKey;
  void *local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = this;
  hKey = CWinApp::GetAppRegistryKey(this);
  if (hKey == (HKEY__ *)0x0) {
    local_8 = (HKEY)0x0;
  }
  else {
    RegCreateKeyExW(hKey,param_1,0,(LPWSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,
                    (LPDWORD)&local_c);
    RegCloseKey(hKey);
  }
  return local_8;
}

