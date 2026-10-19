// Address: 0x00417140
// Name: FUN_00417140
// Category: Launcher


void __fastcall FUN_00417140(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  short sVar4;
  UINT UVar5;
  WCHAR *pWVar6;
  int iVar7;
  uint extraout_EDX;
  uint uVar8;
  WCHAR *pWVar9;
  undefined1 auStack_828 [4];
  undefined4 *local_824;
  undefined2 *local_820;
  undefined4 *local_81c;
  uint local_818;
  uint local_814;
  int local_80c;
  WCHAR local_808 [512];
  WCHAR local_408 [259];
  undefined2 local_202;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)auStack_828;
  local_820 = param_3;
  bVar1 = false;
  local_824 = param_2;
  local_81c = param_1;
  UVar5 = GetSystemDirectoryW(local_408,0x104);
  if (UVar5 != 0) {
    pWVar6 = local_808;
    local_80c = (int)local_408 - (int)pWVar6;
    local_202 = 0;
    iVar7 = 0x200;
    do {
      if (*(WCHAR *)(local_80c + (int)pWVar6) == L'\0') {
        if (iVar7 != 0) goto LAB_004171cd;
        break;
      }
      *pWVar6 = *(WCHAR *)(local_80c + (int)pWVar6);
      pWVar6 = pWVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pWVar6 = pWVar6 + -1;
LAB_004171cd:
    *pWVar6 = L'\0';
    FUN_00416460(0x4b2918);
    iVar7 = FUN_00417a80();
    if (-1 < iVar7) {
      if ((0x40002 < local_814) ||
         ((0x40001 < local_814 && ((0x5f < local_818 || (0x5e < local_818)))))) {
        if (local_81c != (undefined4 *)0x0) {
          *local_81c = 1;
        }
        if (local_824 != (undefined4 *)0x0) {
          *local_824 = 0;
        }
        if (local_820 != (undefined2 *)0x0) {
          *local_820 = 0x20;
        }
        bVar1 = true;
      }
      if ((0x40003 < local_814) ||
         ((0x40002 < local_814 && ((0x448 < local_818 || (0x447 < local_818)))))) {
        if (local_81c != (undefined4 *)0x0) {
          *local_81c = 2;
        }
        if (local_824 != (undefined4 *)0x0) {
          *local_824 = 0;
        }
        if (local_820 != (undefined2 *)0x0) {
          *local_820 = 0x20;
        }
        bVar1 = true;
      }
      if ((0x40004 < local_814) ||
         ((0x40003 < local_814 && ((0x44 < local_818 || (0x43 < local_818)))))) {
        if (local_81c != (undefined4 *)0x0) {
          *local_81c = 3;
        }
        if (local_824 != (undefined4 *)0x0) {
          *local_824 = 0;
        }
        if (local_820 != (undefined2 *)0x0) {
          *local_820 = 0x20;
        }
        bVar1 = true;
      }
    }
    pWVar9 = local_408;
    iVar7 = 0x200;
    pWVar6 = local_808;
    do {
      if (*pWVar9 == L'\0') {
        if (iVar7 != 0) goto LAB_004172d7;
        break;
      }
      *pWVar6 = *pWVar9;
      pWVar6 = pWVar6 + 1;
      pWVar9 = pWVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pWVar6 = pWVar6 + -1;
LAB_004172d7:
    *pWVar6 = L'\0';
    FUN_00416460(0x4b2930);
    iVar7 = FUN_00417a80();
    if ((-1 < iVar7) &&
       ((0x40004 < local_814 ||
        ((0x40003 < local_814 && ((0x46 < local_818 || (0x45 < local_818)))))))) {
      if (local_81c != (undefined4 *)0x0) {
        *local_81c = 3;
      }
      if (local_824 != (undefined4 *)0x0) {
        *local_824 = 0;
      }
      if (local_820 != (undefined2 *)0x0) {
        *local_820 = 0x61;
      }
      bVar1 = true;
    }
    pWVar9 = local_408;
    iVar7 = 0x200;
    pWVar6 = local_808;
    do {
      if (*pWVar9 == L'\0') {
        if (iVar7 != 0) goto LAB_0041736f;
        break;
      }
      *pWVar6 = *pWVar9;
      pWVar6 = pWVar6 + 1;
      pWVar9 = pWVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pWVar6 = pWVar6 + -1;
LAB_0041736f:
    *pWVar6 = L'\0';
    FUN_00416460(0x4b2918);
    iVar7 = FUN_00417a80();
    if (-1 < iVar7) {
      if ((0x40005 < local_814) ||
         ((0x40004 < local_814 && ((0x9b < local_818 || (0x9a < local_818)))))) {
        if (local_81c != (undefined4 *)0x0) {
          *local_81c = 5;
        }
        if (local_824 != (undefined4 *)0x0) {
          *local_824 = 0;
        }
        if (local_820 != (undefined2 *)0x0) {
          *local_820 = 0x20;
        }
        bVar1 = true;
      }
      if ((0x40006 < local_814) ||
         ((0x40005 < local_814 && ((0x13e < local_818 || (0x13d < local_818)))))) {
        if (local_81c != (undefined4 *)0x0) {
          *local_81c = 6;
        }
        if (local_824 != (undefined4 *)0x0) {
          *local_824 = 0;
        }
        if (local_820 != (undefined2 *)0x0) {
          *local_820 = 0x20;
        }
        bVar1 = true;
      }
      if ((0x40006 < local_814) ||
         ((0x40005 < local_814 && ((0x1b4 < local_818 || (0x1b3 < local_818)))))) {
        if (local_81c != (undefined4 *)0x0) {
          *local_81c = 6;
        }
        if (local_824 != (undefined4 *)0x0) {
          *local_824 = 1;
        }
        if (local_820 != (undefined2 *)0x0) {
          *local_820 = 0x20;
        }
        bVar1 = true;
      }
    }
    pWVar9 = local_408;
    iVar7 = 0x200;
    pWVar6 = local_808;
    do {
      if (*pWVar9 == L'\0') {
        if (iVar7 != 0) goto LAB_00417485;
        break;
      }
      *pWVar6 = *pWVar9;
      pWVar6 = pWVar6 + 1;
      pWVar9 = pWVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pWVar6 = pWVar6 + -1;
LAB_00417485:
    *pWVar6 = L'\0';
    FUN_00416460(0x4b294c);
    iVar7 = FUN_00417a80();
    if ((-1 < iVar7) &&
       ((0x40006 < local_814 ||
        ((0x40005 < local_814 && ((0x30206 < local_818 || (0x30205 < local_818)))))))) {
      if (local_81c != (undefined4 *)0x0) {
        *local_81c = 6;
      }
      if (local_824 != (undefined4 *)0x0) {
        *local_824 = 1;
      }
      if (local_820 != (undefined2 *)0x0) {
        *local_820 = 0x61;
      }
      bVar1 = true;
    }
    pWVar9 = local_408;
    iVar7 = 0x200;
    pWVar6 = local_808;
    do {
      if (*pWVar9 == L'\0') {
        if (iVar7 != 0) goto LAB_0041751f;
        break;
      }
      *pWVar6 = *pWVar9;
      pWVar6 = pWVar6 + 1;
      pWVar9 = pWVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pWVar6 = pWVar6 + -1;
LAB_0041751f:
    *pWVar6 = L'\0';
    FUN_00416460(0x4b2918);
    iVar7 = FUN_00417a80();
    if ((-1 < iVar7) &&
       ((0x40007 < local_814 || ((0x40006 < local_814 && ((700 < local_818 || (699 < local_818))))))
       )) {
      if (local_81c != (undefined4 *)0x0) {
        *local_81c = 7;
      }
      if (local_824 != (undefined4 *)0x0) {
        *local_824 = 0;
      }
      if (local_820 != (undefined2 *)0x0) {
        *local_820 = 0x20;
      }
      bVar1 = true;
    }
    pWVar9 = local_408;
    iVar7 = 0x200;
    pWVar6 = local_808;
    do {
      if (*pWVar9 == L'\0') {
        if (iVar7 != 0) goto LAB_004175bf;
        break;
      }
      *pWVar6 = *pWVar9;
      pWVar6 = pWVar6 + 1;
      pWVar9 = pWVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pWVar6 = pWVar6 + -1;
LAB_004175bf:
    *pWVar6 = L'\0';
    FUN_00416460(0x4b2964);
    iVar7 = FUN_00417a80();
    if ((-1 < iVar7) &&
       ((0x40007 < local_814 ||
        ((0x40006 < local_814 && ((0x2cc < local_818 || (0x2cb < local_818)))))))) {
      if (local_81c != (undefined4 *)0x0) {
        *local_81c = 7;
      }
      if (local_824 != (undefined4 *)0x0) {
        *local_824 = 0;
      }
      if (local_820 != (undefined2 *)0x0) {
        *local_820 = 0x61;
      }
      bVar1 = true;
    }
    pWVar9 = local_408;
    iVar7 = 0x200;
    pWVar6 = local_808;
    do {
      if (*pWVar9 == L'\0') {
        if (iVar7 != 0) goto LAB_0041765f;
        break;
      }
      *pWVar6 = *pWVar9;
      pWVar6 = pWVar6 + 1;
      pWVar9 = pWVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pWVar6 = pWVar6 + -1;
LAB_0041765f:
    *pWVar6 = L'\0';
    FUN_00416460(0x4b2918);
    iVar7 = FUN_00417a80();
    if ((-1 < iVar7) &&
       (((sVar4 = (short)(local_814 >> 0x10), sVar4 == 4 &&
         ((0x40008 < local_814 || ((0x40007 < local_814 && (399 < local_818)))))) ||
        ((sVar4 == 5 && (iVar7 = FUN_00417a50(local_818,local_814,0x8d20190,0x50001), -1 < iVar7))))
       )) {
      if (local_81c != (undefined4 *)0x0) {
        *local_81c = 8;
      }
      if (local_824 != (undefined4 *)0x0) {
        *local_824 = 0;
      }
      if (local_820 != (undefined2 *)0x0) {
        *local_820 = 0x20;
      }
      bVar1 = true;
    }
    iVar7 = 0x200;
    pWVar6 = local_808;
    do {
      if (*(WCHAR *)(local_80c + (int)pWVar6) == L'\0') {
        if (iVar7 != 0) goto LAB_0041771e;
        break;
      }
      *pWVar6 = *(WCHAR *)(local_80c + (int)pWVar6);
      pWVar6 = pWVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pWVar6 = pWVar6 + -1;
LAB_0041771e:
    *pWVar6 = L'\0';
    FUN_00416460(0x4b297c);
    iVar7 = FUN_00417a80();
    uVar3 = local_818;
    if (-1 < iVar7) {
      sVar4 = (short)(local_814 >> 0x10);
      uVar8 = local_814;
      if (((sVar4 == 4) &&
          ((0x40008 < local_814 || ((0x40007 < local_814 && (0x10370 < local_818)))))) ||
         ((sVar4 == 5 &&
          (iVar7 = FUN_00417a50(local_818,local_814,0xa280371,0x50001), uVar8 = extraout_EDX,
          -1 < iVar7)))) {
        if (local_81c != (undefined4 *)0x0) {
          *local_81c = 8;
        }
        if (local_824 != (undefined4 *)0x0) {
          *local_824 = 1;
        }
        if (local_820 != (undefined2 *)0x0) {
          *local_820 = 0x20;
        }
        bVar1 = true;
      }
      puVar2 = local_824;
      if (((sVar4 == 4) && ((0x40008 < uVar8 || ((0x40007 < uVar8 && (0x10384 < uVar3)))))) ||
         ((sVar4 == 5 && (iVar7 = FUN_00417a50(uVar3,uVar8,0xa280385,0x50001), -1 < iVar7)))) {
        if (local_81c != (undefined4 *)0x0) {
          *local_81c = 8;
        }
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 1;
        }
        if (local_820 != (undefined2 *)0x0) {
          *local_820 = 0x61;
        }
        bVar1 = true;
      }
    }
    iVar7 = 0x200;
    pWVar6 = local_808;
    do {
      if (*(WCHAR *)(local_80c + (int)pWVar6) == L'\0') {
        if (iVar7 != 0) goto LAB_0041784d;
        break;
      }
      *pWVar6 = *(WCHAR *)(local_80c + (int)pWVar6);
      pWVar6 = pWVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pWVar6 = pWVar6 + -1;
LAB_0041784d:
    *pWVar6 = L'\0';
    FUN_00416460(0x4b2990);
    iVar7 = FUN_00417a80();
    if ((-1 < iVar7) &&
       ((0x60003 < local_814 ||
        ((0x60002 < local_814 && ((0x10375 < local_818 || (0x10374 < local_818)))))))) {
      if (local_81c != (undefined4 *)0x0) {
        *local_81c = 8;
      }
      if (local_824 != (undefined4 *)0x0) {
        *local_824 = 1;
      }
      if (local_820 != (undefined2 *)0x0) {
        *local_820 = 0x62;
      }
      bVar1 = true;
    }
    pWVar9 = local_408;
    iVar7 = 0x200;
    pWVar6 = local_808;
    do {
      if (*pWVar9 == L'\0') {
        if (iVar7 != 0) goto LAB_004178e6;
        break;
      }
      *pWVar6 = *pWVar9;
      pWVar6 = pWVar6 + 1;
      pWVar9 = pWVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pWVar6 = pWVar6 + -1;
LAB_004178e6:
    *pWVar6 = L'\0';
    FUN_00416460(0x4b29ac);
    iVar7 = FUN_00417a80();
    if ((-1 < iVar7) &&
       (((sVar4 = (short)(local_814 >> 0x10), sVar4 == 4 &&
         ((0x40009 < local_814 || ((0x40008 < local_814 && (0x85 < local_818)))))) ||
        ((sVar4 == 5 && (iVar7 = FUN_00417a50(local_818,local_814,0xe5d0086,0x50002), -1 < iVar7))))
       )) {
      if (local_81c != (undefined4 *)0x0) {
        *local_81c = 8;
      }
      if (local_824 != (undefined4 *)0x0) {
        *local_824 = 2;
      }
      if (local_820 != (undefined2 *)0x0) {
        *local_820 = 0x20;
      }
      bVar1 = true;
    }
    iVar7 = 0x200;
    pWVar6 = local_808;
    do {
      if (*(WCHAR *)(local_80c + (int)pWVar6) == L'\0') {
        if (iVar7 != 0) goto LAB_004179ad;
        break;
      }
      *pWVar6 = *(WCHAR *)(local_80c + (int)pWVar6);
      pWVar6 = pWVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    pWVar6 = pWVar6 + -1;
LAB_004179ad:
    *pWVar6 = L'\0';
    FUN_00416460(0x4b29c4);
    iVar7 = FUN_00417a80();
    if (-1 < iVar7) {
      if (local_81c != (undefined4 *)0x0) {
        *local_81c = 9;
      }
      if (local_824 != (undefined4 *)0x0) {
        *local_824 = 0;
      }
      if (local_820 != (undefined2 *)0x0) {
        *local_820 = 0x20;
      }
      goto LAB_004179fa;
    }
    param_3 = local_820;
    param_1 = local_81c;
    param_2 = local_824;
    if (bVar1) goto LAB_004179fa;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = 0x20;
  }
LAB_004179fa:
  __security_check_cookie(local_4 ^ (uint)auStack_828);
  return;
}

