// Address: 0x0048f736
// Name: FUN_0048f736
// Category: MFC_CRT


DWORD __cdecl
FUN_0048f736(undefined4 *param_1,LPCWSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  DWORD *pDVar5;
  DWORD DVar6;
  HANDLE pvVar7;
  int iVar8;
  byte bVar9;
  undefined4 unaff_EDI;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  _SECURITY_ATTRIBUTES local_3c;
  WCHAR local_30 [2];
  int local_2c;
  uint local_28 [2];
  HANDLE local_20;
  DWORD local_1c;
  DWORD local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar10 = (param_3 & 0x80) == 0;
  local_28[0] = 0;
  local_2c = 0;
  local_6 = 0;
  local_3c.nLength = 0xc;
  local_3c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar10) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_3c.bInheritHandle = (BOOL)bVar10;
  iVar3 = FUN_00494694(local_28);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar3 = __get_osplatform(&local_2c);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x74000) != 0 || (local_28[0] != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar4 = param_3 & 3;
  if (uVar4 == 0) {
    local_c = 0x80000000;
  }
  else {
    if (uVar4 == 1) {
      if (((param_3 & 8) == 0) || ((param_3 & 0x70000) == 0)) {
        local_c = 0x40000000;
        goto LAB_0048f81f;
      }
    }
    else if (uVar4 != 2) goto LAB_0048f7db;
    local_c = 0xc0000000;
  }
LAB_0048f81f:
  if (param_4 == 0x10) {
    local_14 = 0;
  }
  else if (param_4 == 0x20) {
    local_14 = 1;
  }
  else if (param_4 == 0x30) {
    local_14 = 2;
  }
  else if (param_4 == 0x40) {
    local_14 = 3;
  }
  else {
    if (param_4 != 0x80) goto LAB_0048f7db;
    local_14 = (uint)(local_c == 0x80000000);
  }
  uVar4 = param_3 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || (uVar4 == 0)) {
      local_18 = 3;
    }
    else if (uVar4 == 0x100) {
      local_18 = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_0048f929;
      if (uVar4 != 0x300) goto LAB_0048f7db;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_0048f929:
        local_18 = 5;
        goto LAB_0048f8d3;
      }
      if (uVar4 != 0x700) {
LAB_0048f7db:
        pDVar5 = FUN_0047b85c();
        *pDVar5 = 0;
        *in_EAX = 0xffffffff;
        pDVar5 = FUN_0047b849();
        *pDVar5 = 0x16;
        FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_0048f8d3:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_004cae38 & param_5))) {
    local_10 = 1;
  }
  if ((param_3 & 0x40) != 0) {
    local_10 = local_10 | 0x4000000;
    local_c = local_c | 0x10000;
    if (local_2c == 2) {
      local_14 = local_14 | 4;
    }
  }
  if ((param_3 & 0x1000) != 0) {
    local_10 = local_10 | 0x100;
  }
  if ((param_3 & 0x20) == 0) {
    if ((param_3 & 0x10) != 0) {
      local_10 = local_10 | 0x10000000;
    }
  }
  else {
    local_10 = local_10 | 0x8000000;
  }
  uVar4 = __alloc_osfhnd();
  *in_EAX = uVar4;
  if (uVar4 == 0xffffffff) {
    pDVar5 = FUN_0047b85c();
    *pDVar5 = 0;
    *in_EAX = 0xffffffff;
    pDVar5 = FUN_0047b849();
    *pDVar5 = 0x18;
    goto LAB_0048f9f1;
  }
  *param_1 = 1;
  local_20 = CreateFileW(param_2,local_c,local_14,&local_3c,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileW(param_2,local_c,local_14,&local_3c,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_0048f9fd;
    }
    pbVar1 = (byte *)((&DAT_004cc260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_0047b86f(DVar6);
    goto LAB_0048f9f1;
  }
LAB_0048f9fd:
  DVar6 = GetFileType(local_20);
  if (DVar6 == 0) {
    pbVar1 = (byte *)((&DAT_004cc260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_0047b86f(DVar6);
    CloseHandle(local_20);
    if (DVar6 == 0) {
      pDVar5 = FUN_0047b849();
      *pDVar5 = 0xd;
    }
    goto LAB_0048f9f1;
  }
  if (DVar6 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar6 == 3) {
    local_5 = local_5 | 8;
  }
  FUN_0048ff7a(*in_EAX,local_20);
  bVar9 = local_5 | 1;
  *(byte *)((&DAT_004cc260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40) = bVar9;
  pbVar1 = (byte *)((&DAT_004cc260)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar9;
    if (bVar2 == 0) goto LAB_0048fc08;
    if ((param_3 & 2) == 0) goto LAB_0048fb38;
    local_1c = FUN_004833c7(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      pDVar5 = FUN_0047b85c();
      bVar9 = local_5;
      if (*pDVar5 == 0x83) goto LAB_0048fb38;
    }
    else {
      local_30[0] = L'\0';
      local_30[1] = L'\0';
      iVar3 = FUN_004883a9(*in_EAX,local_30,(LPWSTR)&DAT_00000001);
      if ((((iVar3 != 0) || (local_30[0] != L'\x1a')) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar3 != -1))
         && (DVar6 = FUN_004833c7(*in_EAX,0,0), bVar9 = local_5, DVar6 != 0xffffffff))
      goto LAB_0048fb38;
    }
LAB_0048faea:
    FUN_004841a8(*in_EAX);
    goto LAB_0048f9f1;
  }
LAB_0048fb38:
  local_5 = bVar9;
  if ((local_5 & 0x80) != 0) {
    if ((param_3 & 0x74000) == 0) {
      if ((local_28[0] & 0x74000) == 0) {
        param_3 = param_3 | 0x4000;
      }
      else {
        param_3 = param_3 | local_28[0] & 0x74000;
      }
    }
    uVar4 = param_3 & 0x74000;
    if (uVar4 == 0x4000) {
      local_6 = 0;
    }
    else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
      if ((param_3 & 0x301) == 0x301) goto LAB_0048fba7;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_0048fba7:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_0048fc08;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar11 = FUN_0048e04a(*in_EAX,0,0,2);
            if (lVar11 == 0) goto LAB_0048fe0a;
            uVar12 = FUN_0048e04a(*in_EAX,0,0,0);
            uVar4 = (uint)uVar12 & (uint)((ulonglong)uVar12 >> 0x20);
            goto LAB_0048fda0;
          }
LAB_0048fbff:
          if (local_18 != 5) goto LAB_0048fc08;
        }
LAB_0048fe0a:
        iVar3 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_0048fc08;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar8 = FUN_00489089(*in_EAX,(WCHAR *)((int)&local_1c + iVar3),(WCHAR *)(local_18 - iVar3)
                              );
          if (iVar8 == -1) {
            FUN_004841a8(*in_EAX);
            pDVar5 = FUN_0047b849();
            return *pDVar5;
          }
          iVar3 = iVar3 + iVar8;
        } while (iVar3 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_0048fbff;
              lVar11 = FUN_0048e04a(*in_EAX,0,0,2);
              if (lVar11 != 0) {
                lVar11 = FUN_0048e04a(*in_EAX,0,0,0);
                if (lVar11 == -1) goto LAB_0048faea;
                goto LAB_0048fd29;
              }
            }
            goto LAB_0048fe0a;
          }
          goto LAB_0048fc08;
        }
LAB_0048fd29:
        iVar3 = FUN_004883a9(*in_EAX,(LPWSTR)&local_1c,(LPWSTR)0x3);
        if (iVar3 == -1) goto LAB_0048faea;
        if (iVar3 == 2) {
LAB_0048fdae:
          if ((local_1c & 0xffff) == 0xfffe) {
            FUN_004841a8(*in_EAX);
            pDVar5 = FUN_0047b849();
            *pDVar5 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            DVar6 = FUN_004833c7(*in_EAX,2,0);
            if (DVar6 == 0xffffffff) goto LAB_0048faea;
            local_6 = 2;
            goto LAB_0048fc08;
          }
        }
        else if (iVar3 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_0048fc08;
          }
          goto LAB_0048fdae;
        }
        uVar4 = FUN_004833c7(*in_EAX,0,0);
LAB_0048fda0:
        if (uVar4 == 0xffffffff) goto LAB_0048faea;
      }
    }
  }
LAB_0048fc08:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_004cc260)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_004cc260)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_004cc260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar7 = CreateFileW(param_2,uVar4 & 0x7fffffff,local_14,&local_3c,3,local_10,(HANDLE)0x0);
    if (pvVar7 == (HANDLE)0xffffffff) {
      DVar6 = GetLastError();
      FUN_0047b86f(DVar6);
      pbVar1 = (byte *)((&DAT_004cc260)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
      *pbVar1 = *pbVar1 & 0xfe;
      FUN_0048fff7(*in_EAX);
LAB_0048f9f1:
      pDVar5 = FUN_0047b849();
      return *pDVar5;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x40 + (&DAT_004cc260)[(int)*in_EAX >> 5]) = pvVar7;
  }
  return 0;
}

