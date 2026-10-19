// Address: 0x0049286b
// Name: FUN_0049286b
// Category: MFC_CRT


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __fastcall
FUN_0049286b(int *param_1,byte *param_2,LCID param_3,DWORD param_4,uint param_5,byte *param_6,
            uint param_7,UINT param_8)

{
  uint _Size;
  byte *lpMultiByteStr;
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  undefined4 *puVar5;
  uint uVar6;
  LPWSTR lpWideCharStr;
  UINT UVar7;
  uint uVar8;
  byte *pbVar9;
  byte *local_28;
  PCNZWCH local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  lpMultiByteStr = param_6;
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_20 = param_6;
  if (DAT_004cba04 == 0) {
    iVar1 = CompareStringW(0,0,(PCNZWCH)&lpSrcStr_004a5acc,1,(PCNZWCH)&lpSrcStr_004a5acc,1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_004cba04 = 2;
      }
    }
    else {
      DAT_004cba04 = 1;
    }
  }
  pbVar9 = param_2;
  uVar8 = param_5;
  if ((int)param_5 < 1) {
    if ((int)param_5 < -1) goto LAB_00492be2;
  }
  else {
    do {
      uVar8 = uVar8 - 1;
      if (*pbVar9 == 0) goto LAB_004928e5;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0);
    uVar8 = 0xffffffff;
LAB_004928e5:
    param_5 = param_5 + (-1 - uVar8);
  }
  pbVar9 = lpMultiByteStr;
  uVar8 = param_7;
  if ((int)param_7 < 1) {
    if ((int)param_7 < -1) goto LAB_00492be2;
  }
  else {
    do {
      uVar8 = uVar8 - 1;
      if (*pbVar9 == 0) goto LAB_00492907;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0);
    uVar8 = 0xffffffff;
LAB_00492907:
    param_7 = param_7 + (-1 - uVar8);
  }
  if ((DAT_004cba04 == 2) || (DAT_004cba04 == 0)) {
    pbVar9 = (byte *)0x0;
    if (param_3 == 0) {
      param_3 = *(LCID *)(*param_1 + 0x14);
    }
    if (param_8 == 0) {
      param_8 = *(UINT *)(*param_1 + 4);
    }
    UVar7 = ___ansicp(param_3);
    if (UVar7 != 0xffffffff) {
      local_28 = param_2;
      if (UVar7 != param_8) {
        pbVar9 = (byte *)FUN_00490696(param_8,UVar7,(char *)param_2,&param_5,(LPSTR)0x0,0);
        if (pbVar9 == (byte *)0x0) goto LAB_00492be2;
        local_20 = (byte *)FUN_00490696(param_8,UVar7,(char *)lpMultiByteStr,&param_7,(LPSTR)0x0,0);
        local_28 = pbVar9;
        if (local_20 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(pbVar9);
        }
      }
      CompareStringA(param_3,param_4,(PCNZCH)local_28,param_5,(PCNZCH)local_20,param_7);
      if (pbVar9 != (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pbVar9);
      }
    }
    goto LAB_00492be2;
  }
  if (DAT_004cba04 != 1) goto LAB_00492be2;
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 4);
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    if ((param_5 == param_7) ||
       (((1 < (int)param_7 || (1 < (int)param_5)) ||
        (BVar3 = GetCPInfo(param_8,&local_1c), BVar3 == 0)))) goto LAB_00492be2;
    if (0 < (int)param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*param_2 < *pBVar4 || (pBVar4[1] < *param_2))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_00492be2;
    }
    if (0 < (int)param_7) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*lpMultiByteStr < *pBVar4 || (pBVar4[1] < *lpMultiByteStr))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_00492be2;
    }
  }
  uVar8 = MultiByteToWideChar(param_8,9,(LPCSTR)param_2,param_5,(LPWSTR)0x0,0);
  if (uVar8 == 0) goto LAB_00492be2;
  if (((int)uVar8 < 1) || (0xffffffe0 / uVar8 < 2)) {
    local_24 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = uVar8 * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffc4;
      local_24 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_00492a5b:
        local_24 = (PCNZWCH)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_24 = (PCNZWCH)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_00492a5b;
      }
    }
  }
  if (local_24 == (PCNZWCH)0x0) goto LAB_00492be2;
  iVar1 = MultiByteToWideChar(param_8,1,(LPCSTR)param_2,param_5,local_24,uVar8);
  if ((iVar1 != 0) &&
     (uVar6 = MultiByteToWideChar(param_8,9,(LPCSTR)lpMultiByteStr,param_7,(LPWSTR)0x0,0),
     uVar6 != 0)) {
    if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar6 * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x3c) goto LAB_00492b1c;
        lpWideCharStr = (LPWSTR)&stack0xffffffcc;
      }
      else {
        lpWideCharStr = _malloc(_Size);
        if (lpWideCharStr != (LPWSTR)0x0) {
          lpWideCharStr[0] = L'\xdddd';
          lpWideCharStr[1] = L'\0';
          lpWideCharStr = lpWideCharStr + 4;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar1 = MultiByteToWideChar(param_8,1,(LPCSTR)lpMultiByteStr,param_7,lpWideCharStr,uVar6);
      if (iVar1 != 0) {
        CompareStringW(param_3,param_4,local_24,uVar8,lpWideCharStr,uVar6);
      }
      FUN_00477a94((int)lpWideCharStr);
    }
  }
LAB_00492b1c:
  FUN_00477a94((int)local_24);
LAB_00492be2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

