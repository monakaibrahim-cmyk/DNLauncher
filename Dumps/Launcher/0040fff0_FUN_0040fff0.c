// Address: 0x0040fff0
// Name: FUN_0040fff0
// Category: Launcher


CSimpleStringT<char,0> * __thiscall FUN_0040fff0(void *this,LPCWSTR param_1)

{
  UINT UVar1;
  int iVar2;
  DWORD dwFlags;
  int cchWideChar;
  LPSTR lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  
  if (param_1 != (LPCWSTR)0x0) {
    UVar1 = (*(code *)Target_004c4f5c)();
    iVar2 = WideCharToMultiByte(UVar1,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    iVar2 = iVar2 + -1;
    if (0 < iVar2) {
      if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - iVar2) < 0) {
        ATL::CSimpleStringT<char,0>::PrepareWrite2(this,iVar2);
      }
      lpMultiByteStr = *(LPSTR *)this;
      lpUsedDefaultChar = (LPBOOL)0x0;
      lpDefaultChar = (LPCSTR)0x0;
      cchWideChar = -1;
      dwFlags = 0;
      cbMultiByte = iVar2;
      UVar1 = (*(code *)Target_004c4f5c)();
      WideCharToMultiByte(UVar1,dwFlags,param_1,cchWideChar,lpMultiByteStr,cbMultiByte,lpDefaultChar
                          ,lpUsedDefaultChar);
      if (iVar2 <= *(int *)(*(int *)this + -8)) {
        *(int *)(*(int *)this + -0xc) = iVar2;
        *(undefined1 *)(iVar2 + *(int *)this) = 0;
        return this;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80070057);
    }
  }
  ATL::CSimpleStringT<char,0>::Empty(this);
  return this;
}

