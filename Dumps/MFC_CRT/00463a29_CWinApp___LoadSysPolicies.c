// Address: 0x00463a29
// Name: CWinApp::_LoadSysPolicies
// Category: MFC_CRT


int __thiscall CWinApp::_LoadSysPolicies(CWinApp *this)

{
  undefined *puVar1;
  LSTATUS LVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  DWORD DStack_18;
  CWinApp *pCStack_14;
  DWORD DStack_10;
  int iStack_c;
  HKEY pHStack_8;
  
  *(undefined4 *)(this + 0xa0) = 0;
  pHStack_8 = (HKEY)0x0;
  iStack_c = 0;
  DStack_18 = 4;
  DStack_10 = 0;
  ppuVar3 = &lpSubKey_004c2d40;
  pCStack_14 = this;
  puVar1 = lpSubKey_004c2d40;
  while (puVar1 != (undefined *)0x0) {
    LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)*ppuVar3,0,1,&pHStack_8);
    if (LVar2 == 0) {
      for (puVar4 = (undefined4 *)ppuVar3[1]; (LPCWSTR)*puVar4 != (LPCWSTR)0x0; puVar4 = puVar4 + 2)
      {
        LVar2 = RegQueryValueExW(pHStack_8,(LPCWSTR)*puVar4,(LPDWORD)0x0,&DStack_10,
                                 (LPBYTE)&iStack_c,&DStack_18);
        if ((LVar2 == 0) && (DStack_10 == 4)) {
          if (iStack_c == 0) {
            *(uint *)(pCStack_14 + 0xa0) = *(uint *)(pCStack_14 + 0xa0) & ~puVar4[1];
          }
          else {
            *(uint *)(pCStack_14 + 0xa0) = *(uint *)(pCStack_14 + 0xa0) | puVar4[1];
          }
        }
        iStack_c = 0;
        DStack_18 = 4;
        DStack_10 = 0;
      }
      RegCloseKey(pHStack_8);
      pHStack_8 = (HKEY)0x0;
    }
    ppuVar3 = ppuVar3 + 2;
    puVar1 = *ppuVar3;
  }
  return 1;
}

