// Address: 0x0048c5bb
// Name: __wcstombs_l_helper
// Category: MFC_CRT


/* Library Function - Single Match
    __wcstombs_l_helper
   
   Library: Visual Studio 2005 Release */

void __cdecl
__wcstombs_l_helper(LPSTR param_1,LPCWSTR param_2,uint param_3,localeinfo_struct *param_4)

{
  char cVar1;
  WCHAR WVar2;
  DWORD *pDVar3;
  LPCWSTR pWVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  LPCWSTR local_30;
  uint local_28;
  int local_24 [2];
  int local_1c;
  char local_18;
  BOOL local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_30 = param_2;
  local_28 = 0;
  local_14 = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) goto LAB_0048c744;
  if ((param_2 == (LPCWSTR)0x0) || (0x7fffffff < param_3)) {
    pDVar3 = FUN_0047b849();
    *pDVar3 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_0048c744;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_24,param_4);
  if (param_1 == (LPSTR)0x0) {
    if (*(int *)(local_24[0] + 0x14) == 0) {
      FUN_0047b6a4(param_2);
    }
    else {
      iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                  &local_14);
      if ((iVar5 == 0) || (local_14 != 0)) goto LAB_0048c72a;
    }
LAB_0048c679:
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if (*(int *)(local_24[0] + 0x14) == 0) {
      if (param_3 != 0) {
        do {
          if (0xff < (ushort)*param_2) goto LAB_0048c72a;
          param_1[local_28] = (CHAR)*param_2;
          WVar2 = *param_2;
          param_2 = param_2 + 1;
          if (WVar2 == L'\0') goto LAB_0048c679;
          local_28 = local_28 + 1;
        } while (local_28 < param_3);
      }
      if (local_18 != '\0') {
        *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
      }
      goto LAB_0048c744;
    }
    if (*(int *)(local_24[0] + 0xac) == 1) {
      pWVar4 = param_2;
      uVar8 = param_3;
      if (param_3 != 0) {
        do {
          if (*pWVar4 == L'\0') break;
          pWVar4 = pWVar4 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        if ((uVar8 != 0) && (*pWVar4 == L'\0')) {
          param_3 = ((int)pWVar4 - (int)param_2 >> 1) + 1;
        }
      }
      iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,param_3,param_1,param_3,
                                  (LPCSTR)0x0,&local_14);
      if (iVar5 != 0) {
joined_r0x0048c70c:
        if (local_14 == 0) goto LAB_0048c679;
      }
    }
    else {
      iVar5 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,param_2,-1,param_1,param_3,
                                  (LPCSTR)0x0,&local_14);
      if (iVar5 != 0) goto joined_r0x0048c70c;
      if (local_14 == 0) {
        DVar6 = GetLastError();
        uVar8 = 0;
        if (DVar6 == 0x7a) {
          while (uVar8 < param_3) {
            uVar7 = WideCharToMultiByte(*(UINT *)(local_24[0] + 4),0,local_30,1,local_10,
                                        *(int *)(local_24[0] + 0xac),(LPCSTR)0x0,&local_14);
            if ((((uVar7 == 0) || (local_14 != 0)) || ((int)uVar7 < 0)) || (5 < uVar7))
            goto LAB_0048c72a;
            if (param_3 < uVar7 + uVar8) break;
            iVar5 = 0;
            if (0 < (int)uVar7) {
              do {
                cVar1 = local_10[iVar5];
                param_1[uVar8] = cVar1;
                if (cVar1 == '\0') goto LAB_0048c7b2;
                iVar5 = iVar5 + 1;
                uVar8 = uVar8 + 1;
              } while (iVar5 < (int)uVar7);
            }
            local_30 = local_30 + 1;
          }
LAB_0048c7b2:
          if (local_18 != '\0') {
            *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
          }
          goto LAB_0048c744;
        }
      }
    }
LAB_0048c72a:
    pDVar3 = FUN_0047b849();
    *pDVar3 = 0x2a;
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
  }
LAB_0048c744:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

