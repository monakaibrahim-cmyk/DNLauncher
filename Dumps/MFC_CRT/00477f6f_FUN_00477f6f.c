// Address: 0x00477f6f
// Name: FUN_00477f6f
// Category: MFC_CRT


undefined4 __cdecl
FUN_00477f6f(uchar *param_1,uchar *param_2,uint param_3,uchar *param_4,uint param_5,uchar *param_6,
            uint param_7,uchar *param_8,uint param_9)

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  DWORD *pDVar4;
  undefined4 uVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar *local_8;
  
  bVar2 = false;
  if (param_1 != (uchar *)0x0) {
    if (param_2 == (uchar *)0x0) {
      if (param_3 == 0) {
LAB_00477f94:
        if (param_4 == (uchar *)0x0) {
          if (param_5 == 0) {
LAB_00477fa5:
            if (param_6 == (uchar *)0x0) {
              if (param_7 == 0) {
LAB_00477fb6:
                if (param_8 == (uchar *)0x0) {
                  if (param_9 == 0) {
LAB_00477fc0:
                    iVar3 = 1;
                    puVar6 = param_1;
                    do {
                      if (*puVar6 == '\0') break;
                      iVar3 = iVar3 + -1;
                      puVar6 = puVar6 + 1;
                    } while (iVar3 != 0);
                    if (*puVar6 == ':') {
                      if (param_2 != (uchar *)0x0) {
                        if (param_3 < 3) goto LAB_004780d8;
                        __mbsnbcpy_s(param_2,0xffffffff,param_1,2);
                      }
                      param_1 = puVar6 + 1;
                    }
                    else if (param_2 != (uchar *)0x0) {
                      *param_2 = '\0';
                    }
                    puVar6 = (uchar *)0x0;
                    local_8 = (uchar *)0x0;
                    puVar7 = param_1;
                    if (*param_1 == '\0') {
LAB_00478071:
                      puVar6 = param_1;
                      if (param_4 != (uchar *)0x0) {
                        *param_4 = '\0';
                      }
                    }
                    else {
                      do {
                        iVar3 = __ismbblead((int)(char)*puVar7);
                        if (iVar3 == 0) {
                          uVar1 = *puVar7;
                          if ((uVar1 == '/') || (uVar1 == '\\')) {
                            puVar6 = puVar7 + 1;
                          }
                          else if (uVar1 == '.') {
                            local_8 = puVar7;
                          }
                        }
                        else {
                          puVar7 = puVar7 + 1;
                        }
                        puVar7 = puVar7 + 1;
                      } while (*puVar7 != '\0');
                      if (puVar6 == (uchar *)0x0) goto LAB_00478071;
                      if (param_4 != (uchar *)0x0) {
                        if (param_5 <= (uint)((int)puVar6 - (int)param_1)) goto LAB_004780d8;
                        __mbsnbcpy_s(param_4,0xffffffff,param_1,(int)puVar6 - (int)param_1);
                      }
                    }
                    param_1 = puVar6;
                    if ((local_8 == (uchar *)0x0) || (local_8 < param_1)) {
                      if (param_6 != (uchar *)0x0) {
                        if (param_7 <= (uint)((int)puVar7 - (int)param_1)) goto LAB_004780d8;
                        __mbsnbcpy_s(param_6,0xffffffff,param_1,(int)puVar7 - (int)param_1);
                      }
                      if (param_8 != (uchar *)0x0) {
                        *param_8 = '\0';
                      }
                      return 0;
                    }
                    if (param_6 != (uchar *)0x0) {
                      if (param_7 <= (uint)((int)local_8 - (int)param_1)) goto LAB_004780d8;
                      __mbsnbcpy_s(param_6,0xffffffff,param_1,(int)local_8 - (int)param_1);
                    }
                    if (param_8 == (uchar *)0x0) {
                      return 0;
                    }
                    if ((uint)((int)puVar7 - (int)local_8) < param_9) {
                      __mbsnbcpy_s(param_8,0xffffffff,local_8,(int)puVar7 - (int)local_8);
                      return 0;
                    }
                    goto LAB_004780d8;
                  }
                }
                else if (param_9 != 0) goto LAB_00477fc0;
              }
            }
            else if (param_7 != 0) goto LAB_00477fb6;
          }
        }
        else if (param_5 != 0) goto LAB_00477fa5;
      }
    }
    else if (param_3 != 0) goto LAB_00477f94;
  }
  bVar2 = true;
LAB_004780d8:
  if ((param_2 != (uchar *)0x0) && (param_3 != 0)) {
    *param_2 = '\0';
  }
  if ((param_4 != (uchar *)0x0) && (param_5 != 0)) {
    *param_4 = '\0';
  }
  if ((param_6 != (uchar *)0x0) && (param_7 != 0)) {
    *param_6 = '\0';
  }
  if ((param_8 != (uchar *)0x0) && (param_9 != 0)) {
    *param_8 = '\0';
  }
  pDVar4 = FUN_0047b849();
  if ((param_1 == (uchar *)0x0) || (bVar2)) {
    uVar5 = 0x16;
    *pDVar4 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    uVar5 = 0x22;
    *pDVar4 = 0x22;
  }
  return uVar5;
}

