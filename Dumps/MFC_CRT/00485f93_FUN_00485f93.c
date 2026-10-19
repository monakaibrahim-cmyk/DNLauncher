// Address: 0x00485f93
// Name: FUN_00485f93
// Category: MFC_CRT


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall
FUN_00485f93(void *this,LCID param_1,uint param_2,LPCSTR param_3,uint param_4,LPWSTR param_5,
            int param_6,UINT param_7,int param_8)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  undefined4 *puVar5;
  LPCWSTR lpDestStr;
  UINT UVar6;
  char *pcVar7;
  uint uVar8;
  LPWSTR lpMultiByteStr;
  LPWSTR local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  if (DAT_004cb968 == 0) {
    iVar2 = LCMapStringW(0,0x100,(LPCWSTR)&lpSrcStr_004a5acc,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_004cb968 = 2;
      }
    }
    else {
      DAT_004cb968 = 1;
    }
  }
  pcVar7 = param_3;
  uVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      uVar8 = uVar8 - 1;
      if (*pcVar7 == '\0') goto LAB_00486002;
      pcVar7 = pcVar7 + 1;
    } while (uVar8 != 0);
    uVar8 = 0xffffffff;
LAB_00486002:
    uVar8 = param_4 - uVar8;
    uVar4 = uVar8 - 1;
    bVar1 = (int)uVar4 < (int)param_4;
    param_4 = uVar4;
    if (bVar1) {
      param_4 = uVar8;
    }
  }
  if ((DAT_004cb968 == 2) || (DAT_004cb968 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (LPWSTR)0x0;
    if (param_1 == 0) {
      param_1 = *(LCID *)(*(int *)this + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(UINT *)(*(int *)this + 4);
    }
    UVar6 = ___ansicp(param_1);
    if (UVar6 == 0xffffffff) goto LAB_00486323;
    if (UVar6 == param_7) {
      LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    }
    else {
      local_10 = (LPCWSTR)FUN_00490696(param_7,UVar6,param_3,&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_00486323;
      local_c = LCMapStringA(param_1,param_2,(LPCSTR)local_10,param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar7 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_00486300;
          pcVar7 = &stack0xffffffe4;
        }
        else {
          pcVar7 = _malloc(local_c + 8);
          if (pcVar7 != (char *)0x0) {
            pcVar7[0] = -0x23;
            pcVar7[1] = -0x23;
            pcVar7[2] = '\0';
            pcVar7[3] = '\0';
            pcVar7 = pcVar7 + 8;
          }
        }
        if (pcVar7 != (char *)0x0) {
          _memset(pcVar7,0,local_c);
          local_c = LCMapStringA(param_1,param_2,(LPCSTR)local_10,param_4,pcVar7,local_c);
          if (local_c != 0) {
            local_14 = (LPWSTR)FUN_00490696(UVar6,param_7,pcVar7,&local_c,(LPSTR)param_5,param_6);
          }
          FUN_00477a94((int)pcVar7);
        }
      }
    }
LAB_00486300:
    if (local_10 != (LPCWSTR)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_10);
    }
    if ((local_14 != (LPWSTR)0x0) && (param_5 != local_14)) {
                    /* WARNING: Subroutine does not return */
      _free(local_14);
    }
    goto LAB_00486323;
  }
  if (DAT_004cb968 != 1) goto LAB_00486323;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(UINT *)(*(int *)this + 4);
  }
  uVar8 = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,param_3,param_4,(LPWSTR)0x0,0);
  if (uVar8 == 0) goto LAB_00486323;
  if (((int)uVar8 < 1) || (0xffffffe0 / uVar8 < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar4 = uVar8 * 2 + 8;
    if (uVar4 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_004860aa:
        local_10 = (LPCWSTR)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar4);
      local_10 = (LPCWSTR)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_004860aa;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_00486323;
  iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,local_10,uVar8);
  if ((iVar2 != 0) &&
     (local_c = LCMapStringW(param_1,param_2,local_10,uVar8,(LPWSTR)0x0,0), local_c != 0)) {
    if ((param_2 & 0x400) == 0) {
      if (((int)local_c < 1) || (0xffffffe0 / local_c < 2)) {
        lpDestStr = (LPCWSTR)0x0;
      }
      else {
        uVar4 = local_c * 2 + 8;
        if (uVar4 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_004861b9;
          lpDestStr = (LPCWSTR)&stack0xffffffe4;
        }
        else {
          lpDestStr = _malloc(uVar4);
          if (lpDestStr != (LPCWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPCWSTR)0x0) {
        iVar2 = LCMapStringW(param_1,param_2,local_10,uVar8,lpDestStr,local_c);
        if (iVar2 != 0) {
          lpMultiByteStr = param_5;
          iVar2 = param_6;
          if (param_6 == 0) {
            lpMultiByteStr = (LPWSTR)0x0;
            iVar2 = 0;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,(LPSTR)lpMultiByteStr,iVar2,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
        }
        FUN_00477a94((int)lpDestStr);
      }
    }
    else if ((param_6 != 0) && ((int)local_c <= param_6)) {
      LCMapStringW(param_1,param_2,local_10,uVar8,param_5,param_6);
    }
  }
LAB_004861b9:
  FUN_00477a94((int)local_10);
LAB_00486323:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

