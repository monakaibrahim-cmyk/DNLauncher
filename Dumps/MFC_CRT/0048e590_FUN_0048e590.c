// Address: 0x0048e590
// Name: FUN_0048e590
// Category: MFC_CRT


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall
FUN_0048e590(void *this,DWORD param_1,LPCSTR param_2,uint param_3,LPWORD param_4,UINT param_5,
            LCID param_6,int param_7)

{
  uint _Size;
  BOOL BVar1;
  DWORD DVar2;
  uint cchWideChar;
  undefined4 *puVar3;
  int cchSrc;
  UINT UVar4;
  LPCWSTR lpWideCharStr;
  LPCSTR _Memory;
  void *local_c;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = this;
  if (DAT_004cb9f4 == 0) {
    BVar1 = GetStringTypeW(1,(LPCWSTR)&lpSrcStr_004a5acc,1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_004cb9f4 = 2;
      }
      goto LAB_0048e5e9;
    }
    DAT_004cb9f4 = 1;
  }
  else {
LAB_0048e5e9:
    if ((DAT_004cb9f4 == 2) || (DAT_004cb9f4 == 0)) {
      _Memory = (LPCSTR)0x0;
      if (param_6 == 0) {
        param_6 = *(LCID *)(*(int *)this + 0x14);
      }
      if (param_5 == 0) {
        param_5 = *(UINT *)(*(int *)this + 4);
      }
      UVar4 = ___ansicp(param_6);
      if ((UVar4 != 0xffffffff) &&
         (((UVar4 == param_5 ||
           (_Memory = (LPCSTR)FUN_00490696(param_5,UVar4,param_2,&param_3,(LPSTR)0x0,0),
           param_2 = _Memory, _Memory != (LPCSTR)0x0)) &&
          (GetStringTypeA(param_6,param_1,param_2,param_3,param_4), _Memory != (LPCSTR)0x0)))) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      goto LAB_0048e736;
    }
    if (DAT_004cb9f4 != 1) goto LAB_0048e736;
  }
  local_c = (void *)0x0;
  if (param_5 == 0) {
    param_5 = *(UINT *)(*(int *)this + 4);
  }
  cchWideChar = MultiByteToWideChar(param_5,(uint)(param_7 != 0) * 8 + 1,param_2,param_3,(LPWSTR)0x0
                                    ,0);
  if (cchWideChar == 0) goto LAB_0048e736;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_0048e679:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_0048e679;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    cchSrc = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,cchWideChar);
    if (cchSrc != 0) {
      local_c = (void *)GetStringTypeW(param_1,lpWideCharStr,cchSrc,param_4);
    }
    FUN_00477a94((int)lpWideCharStr);
  }
LAB_0048e736:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

