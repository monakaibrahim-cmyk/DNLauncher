// Address: 0x00402e90
// Name: FUN_00402e90
// Category: Launcher


CSimpleStringT<char,0> * __thiscall FUN_00402e90(void *this,LPCSTR param_1)

{
  UINT UVar1;
  int iVar2;
  DWORD dwFlags;
  int cbMultiByte;
  LPWSTR lpWideCharStr;
  int cchWideChar;
  
  if (param_1 != (LPCSTR)0x0) {
    UVar1 = (*(code *)Target_004c4f5c)();
    iVar2 = MultiByteToWideChar(UVar1,0,param_1,-1,(LPWSTR)0x0,0);
    iVar2 = iVar2 + -1;
    if (0 < iVar2) {
      if ((int)(1U - *(int *)(*(int *)this + -4) | *(int *)(*(int *)this + -8) - iVar2) < 0) {
        ATL::CSimpleStringT<char,0>::PrepareWrite2(this,iVar2);
      }
      lpWideCharStr = *(LPWSTR *)this;
      cbMultiByte = -1;
      dwFlags = 0;
      cchWideChar = iVar2;
      UVar1 = (*(code *)Target_004c4f5c)();
      MultiByteToWideChar(UVar1,dwFlags,param_1,cbMultiByte,lpWideCharStr,cchWideChar);
      if (iVar2 <= *(int *)(*(int *)this + -8)) {
        *(int *)(*(int *)this + -0xc) = iVar2;
        *(undefined2 *)(*(int *)this + iVar2 * 2) = 0;
        return this;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80070057);
    }
  }
  ATL::CSimpleStringT<wchar_t,0>::Empty(this);
  return this;
}

