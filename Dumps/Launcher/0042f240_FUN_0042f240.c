// Address: 0x0042f240
// Name: FUN_0042f240
// Category: Launcher


void __fastcall
FUN_0042f240(undefined4 param_1,char *param_2,char *param_3,int *param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined **ppuVar6;
  int iVar7;
  char *local_2c;
  char *local_28;
  int *local_24;
  undefined1 local_20 [4];
  void *local_1c;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_2c;
  cVar4 = '\0';
  local_28 = param_3;
  local_24 = param_4;
  *param_4 = 0;
  local_8 = 0xf;
  local_c = 0;
  local_1c = (void *)((uint)local_1c & 0xffffff00);
  local_2c = param_2;
  if ((param_2[1] != '\0') && (param_2[1] == '#')) {
    if (param_2[2] != '\0') {
      cVar5 = '\x01';
      if (param_2[2] == 'x') {
        if (((param_2[3] != '\0') && (pcVar1 = _strchr(param_2 + 3,0x3b), pcVar1 != (char *)0x0)) &&
           (*pcVar1 != '\0')) {
          cVar3 = pcVar1[-1];
          while (cVar3 != 'x') {
            if ((cVar3 < '0') || ('9' < cVar3)) {
              if ((cVar3 < 'a') || ('f' < cVar3)) {
                if ((cVar3 < 'A') || ('F' < cVar3)) goto LAB_0042f2b1;
                cVar3 = cVar3 + -0x37;
              }
              else {
                cVar3 = cVar3 + -0x57;
              }
            }
            else {
              cVar3 = cVar3 + -0x30;
            }
            cVar4 = cVar4 + cVar3 * cVar5;
            cVar5 = cVar5 << 4;
            cVar3 = pcVar1[-2];
            pcVar1 = pcVar1 + -1;
          }
LAB_0042f39e:
          if (param_5 != 1) {
            *local_28 = cVar4;
            *local_24 = 1;
            FUN_00402c90((int)local_20);
            __security_check_cookie(local_4 ^ (uint)&local_2c);
            return;
          }
          FUN_0042ec00((int)local_28,local_24);
          FUN_00402c90((int)local_20);
          __security_check_cookie(local_4 ^ (uint)&local_2c);
          return;
        }
      }
      else {
        pcVar1 = _strchr(param_2 + 2,0x3b);
        if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
          cVar3 = pcVar1[-1];
          while (cVar3 != '#') {
            if ((cVar3 < '0') || ('9' < cVar3)) goto LAB_0042f2b1;
            cVar4 = cVar4 + (cVar3 + -0x30) * cVar5;
            cVar5 = cVar5 * '\n';
            cVar3 = pcVar1[-2];
            pcVar1 = pcVar1 + -1;
          }
          goto LAB_0042f39e;
        }
      }
LAB_0042f2b1:
      FUN_00402c90((int)local_20);
      __security_check_cookie(local_4 ^ (uint)&local_2c);
      return;
    }
  }
  iVar7 = 0;
  ppuVar6 = &PTR_s__amp__004c5344;
  do {
    iVar2 = _strncmp(*ppuVar6,local_2c,(size_t)ppuVar6[1]);
    if (iVar2 == 0) {
      *local_28 = (&DAT_004c534c)[iVar7 * 0xc];
      *local_24 = 1;
      if (local_8 < 0x10) {
        __security_check_cookie(local_4 ^ (uint)&local_2c);
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_1c);
    }
    ppuVar6 = ppuVar6 + 3;
    iVar7 = iVar7 + 1;
  } while ((int)ppuVar6 < 0x4c5380);
  *local_28 = *local_2c;
  if (local_8 < 0x10) {
    __security_check_cookie(local_4 ^ (uint)&local_2c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1c);
}

