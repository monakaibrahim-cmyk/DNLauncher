// Address: 0x00463588
// Name: CWinApp::_LoadSysPolicies
// Category: MFC_CRT


/* Library Function - Single Match
    protected: int __thiscall CWinApp::_LoadSysPolicies(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinApp::_LoadSysPolicies(CWinApp *this)

{
  undefined *puVar1;
  LSTATUS LVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  DWORD local_18;
  CWinApp *local_14;
  DWORD local_10;
  int local_c;
  HKEY local_8;
  
  *(undefined4 *)(this + 0xa0) = 0;
  local_8 = (HKEY)0x0;
  local_c = 0;
  local_18 = 4;
  local_10 = 0;
  ppuVar3 = &lpSubKey_004c2d40;
  local_14 = this;
  puVar1 = lpSubKey_004c2d40;
  while (puVar1 != (undefined *)0x0) {
    LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)*ppuVar3,0,1,&local_8);
    if (LVar2 == 0) {
      for (puVar4 = (undefined4 *)ppuVar3[1]; (LPCWSTR)*puVar4 != (LPCWSTR)0x0; puVar4 = puVar4 + 2)
      {
        LVar2 = RegQueryValueExW(local_8,(LPCWSTR)*puVar4,(LPDWORD)0x0,&local_10,(LPBYTE)&local_c,
                                 &local_18);
        if ((LVar2 == 0) && (local_10 == 4)) {
          if (local_c == 0) {
            *(uint *)(local_14 + 0xa0) = *(uint *)(local_14 + 0xa0) & ~puVar4[1];
          }
          else {
            *(uint *)(local_14 + 0xa0) = *(uint *)(local_14 + 0xa0) | puVar4[1];
          }
        }
        local_c = 0;
        local_18 = 4;
        local_10 = 0;
      }
      RegCloseKey(local_8);
      local_8 = (HKEY)0x0;
    }
    ppuVar3 = ppuVar3 + 2;
    puVar1 = *ppuVar3;
  }
  return 1;
}

