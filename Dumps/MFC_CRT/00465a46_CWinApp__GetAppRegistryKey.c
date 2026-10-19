// Address: 0x00465a46
// Name: CWinApp::GetAppRegistryKey
// Category: MFC_CRT


/* Library Function - Single Match
    public: struct HKEY__ * __thiscall CWinApp::GetAppRegistryKey(void)
   
   Library: Visual Studio 2005 Release */

HKEY__ * __thiscall CWinApp::GetAppRegistryKey(CWinApp *this)

{
  LSTATUS LVar1;
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_10 = (HKEY__ *)0x0;
  local_8 = (HKEY)0x0;
  local_c = (HKEY)0x0;
  LVar1 = RegOpenKeyExW((HKEY)0x80000001,L"software",0,0x2001f,&local_8);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExW(local_8,*(LPCWSTR *)(this + 0x54),0,(LPWSTR)0x0,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_14);
    if (LVar1 == 0) {
      RegCreateKeyExW(local_c,*(LPCWSTR *)(this + 0x68),0,(LPWSTR)0x0,0,0x2001f,
                      (LPSECURITY_ATTRIBUTES)0x0,&local_10,&local_14);
    }
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  return local_10;
}

