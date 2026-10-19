// Address: 0x00476b99
// Name: FUN_00476b99
// Category: MFC_CRT


undefined4 __cdecl
FUN_00476b99(wchar_t *param_1,wchar_t *param_2,uint param_3,wchar_t *param_4,uint param_5,
            wchar_t *param_6,uint param_7,wchar_t *param_8,uint param_9)

{
  bool bVar1;
  wchar_t wVar2;
  int iVar3;
  uint uVar4;
  DWORD *pDVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *local_8;
  
  bVar1 = false;
  if (param_1 != (wchar_t *)0x0) {
    if (param_2 == (wchar_t *)0x0) {
      if (param_3 == 0) {
LAB_00476bc4:
        if (param_4 == (wchar_t *)0x0) {
          if (param_5 == 0) {
LAB_00476bd5:
            if (param_6 == (wchar_t *)0x0) {
              if (param_7 == 0) {
LAB_00476be6:
                if (param_8 == (wchar_t *)0x0) {
                  if (param_9 == 0) {
LAB_00476bf0:
                    iVar3 = 1;
                    pwVar7 = param_1;
                    do {
                      if (*pwVar7 == L'\0') break;
                      iVar3 = iVar3 + -1;
                      pwVar7 = pwVar7 + 1;
                    } while (iVar3 != 0);
                    if (*pwVar7 == L':') {
                      if (param_2 != (wchar_t *)0x0) {
                        if (param_3 < 3) goto LAB_00476d19;
                        _wcsncpy_s(param_2,0xffffffff,param_1,2);
                      }
                      param_1 = pwVar7 + 1;
                    }
                    else if (param_2 != (wchar_t *)0x0) {
                      *param_2 = L'\0';
                    }
                    wVar2 = *param_1;
                    pwVar7 = (wchar_t *)0x0;
                    local_8 = (wchar_t *)0x0;
                    pwVar6 = param_1;
                    if (wVar2 == L'\0') {
LAB_00476ca9:
                      pwVar7 = param_1;
                      if (param_4 != (wchar_t *)0x0) {
                        *param_4 = L'\0';
                      }
                    }
                    else {
                      do {
                        if ((wVar2 == L'/') || (wVar2 == L'\\')) {
                          pwVar7 = pwVar6 + 1;
                        }
                        else if (wVar2 == L'.') {
                          local_8 = pwVar6;
                        }
                        pwVar6 = pwVar6 + 1;
                        wVar2 = *pwVar6;
                      } while (wVar2 != L'\0');
                      if (pwVar7 == (wchar_t *)0x0) goto LAB_00476ca9;
                      if (param_4 != (wchar_t *)0x0) {
                        uVar4 = (int)pwVar7 - (int)param_1 >> 1;
                        if (param_5 <= uVar4) goto LAB_00476d19;
                        _wcsncpy_s(param_4,0xffffffff,param_1,uVar4);
                      }
                    }
                    param_1 = pwVar7;
                    if ((local_8 == (wchar_t *)0x0) || (local_8 < param_1)) {
                      if (param_6 != (wchar_t *)0x0) {
                        uVar4 = (int)pwVar6 - (int)param_1 >> 1;
                        if (param_7 <= uVar4) goto LAB_00476d19;
                        _wcsncpy_s(param_6,0xffffffff,param_1,uVar4);
                      }
                      if (param_8 != (wchar_t *)0x0) {
                        *param_8 = L'\0';
                      }
                      return 0;
                    }
                    if (param_6 != (wchar_t *)0x0) {
                      uVar4 = (int)local_8 - (int)param_1 >> 1;
                      if (param_7 <= uVar4) goto LAB_00476d19;
                      _wcsncpy_s(param_6,0xffffffff,param_1,uVar4);
                    }
                    if (param_8 == (wchar_t *)0x0) {
                      return 0;
                    }
                    uVar4 = (int)pwVar6 - (int)local_8 >> 1;
                    if (uVar4 < param_9) {
                      _wcsncpy_s(param_8,0xffffffff,local_8,uVar4);
                      return 0;
                    }
                    goto LAB_00476d19;
                  }
                }
                else if (param_9 != 0) goto LAB_00476bf0;
              }
            }
            else if (param_7 != 0) goto LAB_00476be6;
          }
        }
        else if (param_5 != 0) goto LAB_00476bd5;
      }
    }
    else if (param_3 != 0) goto LAB_00476bc4;
  }
  bVar1 = true;
LAB_00476d19:
  if ((param_2 != (wchar_t *)0x0) && (param_3 != 0)) {
    *param_2 = L'\0';
  }
  if ((param_4 != (wchar_t *)0x0) && (param_5 != 0)) {
    *param_4 = L'\0';
  }
  if ((param_6 != (wchar_t *)0x0) && (param_7 != 0)) {
    *param_6 = L'\0';
  }
  if ((param_8 != (wchar_t *)0x0) && (param_9 != 0)) {
    *param_8 = L'\0';
  }
  if (param_1 == (wchar_t *)0x0) {
    pDVar5 = FUN_0047b849();
  }
  else {
    pDVar5 = FUN_0047b849();
    if (!bVar1) {
      *pDVar5 = 0x22;
      return 0x22;
    }
  }
  *pDVar5 = 0x16;
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}

