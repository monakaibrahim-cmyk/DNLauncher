// Address: 0x0040ece0
// Name: FUN_0040ece0
// Category: Launcher


undefined4 __thiscall FUN_0040ece0(void *this,HMODULE param_1,uint param_2)

{
  ushort uVar1;
  HRSRC pHVar2;
  ushort *puVar3;
  UINT UVar4;
  int iVar5;
  uint cchWideChar;
  DWORD dwFlags;
  LPCWSTR lpWideCharStr;
  LPSTR lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  
  pHVar2 = FindResourceW(param_1,(LPCWSTR)((param_2 >> 4) + 1 & 0xffff),(LPCWSTR)0x6);
  if (pHVar2 != (HRSRC)0x0) {
    puVar3 = (ushort *)FUN_004030b0(param_1,pHVar2,param_2);
    if (puVar3 != (ushort *)0x0) {
      uVar1 = *puVar3;
      UVar4 = (*(code *)Target_004c4f5c)();
      lpWideCharStr = (LPCWSTR)(puVar3 + 1);
      iVar5 = WideCharToMultiByte(UVar4,0,lpWideCharStr,(uint)uVar1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
      if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - iVar5) < 0) {
        ATL::CSimpleStringT<char,0>::PrepareWrite2(this,iVar5);
      }
      lpMultiByteStr = *(LPSTR *)this;
      cchWideChar = (uint)*puVar3;
      lpUsedDefaultChar = (LPBOOL)0x0;
      lpDefaultChar = (LPCSTR)0x0;
      dwFlags = 0;
      cbMultiByte = iVar5;
      UVar4 = (*(code *)Target_004c4f5c)();
      WideCharToMultiByte(UVar4,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                          lpDefaultChar,lpUsedDefaultChar);
      if ((-1 < iVar5) && (iVar5 <= *(int *)(*(int *)this + -8))) {
        *(int *)(*(int *)this + -0xc) = iVar5;
        *(undefined1 *)(iVar5 + *(int *)this) = 0;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80070057);
    }
  }
  return 0;
}

