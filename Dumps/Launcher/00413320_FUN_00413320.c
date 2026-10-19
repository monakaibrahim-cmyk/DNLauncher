// Address: 0x00413320
// Name: FUN_00413320
// Category: Launcher


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00413320(void *this,int param_1)

{
  void *this_00;
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  LPCSTR lpFileName;
  int iVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  undefined1 auStack_41f0 [4];
  int local_41ec;
  void *local_41e8;
  char local_41e0 [264];
  char local_40d8 [8296];
  char local_2070;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)auStack_41f0;
  local_41e8 = this;
  FUN_00418fd0(L"ApplyDeleteList");
  uVar8 = 0;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)) / 0x1c;
  }
  if (*(int *)((int)this + 0x2a4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)((int)this + 0x2a8) - *(int *)((int)this + 0x2a4)) / 0x13c;
  }
  *(int *)(param_1 + 0xa0) = iVar3 + iVar7;
  local_41ec = 0;
LAB_004133b0:
  iVar7 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar7 = (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)) / 0x1c;
  }
  if ((int)uVar8 < iVar7) {
    if ((*(int *)(param_1 + 0x60) == 0) ||
       ((uint)((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)) / 0x1c) <= uVar8)) {
      FUN_00475b26();
    }
    FUN_00425ef0();
    if ((*(int *)(param_1 + 0x60) == 0) ||
       ((uint)((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)) / 0x1c) <= uVar8)) {
      FUN_00475b26();
    }
    iVar7 = *(int *)(param_1 + 0x60) + local_41ec;
    if (*(uint *)(iVar7 + 0x18) < 0x10) {
      pcVar6 = (char *)(iVar7 + 4);
    }
    else {
      pcVar6 = *(char **)(iVar7 + 4);
    }
    if (pcVar6 != (char *)0x0) {
      pcVar4 = pcVar6;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      for (pcVar5 = pcVar4 + (-1 - (int)(pcVar6 + 1)); -1 < (int)pcVar5; pcVar5 = pcVar5 + -1) {
        if ((pcVar6[(int)pcVar5] == '\\') || (pcVar6[(int)pcVar5] == '/')) {
          sVar10 = (int)(pcVar4 + (-1 - (int)(pcVar6 + 1))) - (int)pcVar5;
          _memcpy(local_40d8,pcVar6 + (int)(pcVar5 + 1),sVar10);
          local_41e0[sVar10 + 0x108] = '\0';
          goto LAB_004134c0;
        }
      }
      pcVar4 = pcVar6;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      _strcpy_s(local_40d8,(rsize_t)(pcVar4 + (1 - (int)(pcVar6 + 1))),pcVar6);
    }
LAB_004134c0:
    uVar9 = 0;
    while( true ) {
      iVar7 = *(int *)(param_1 + 0x50);
      if (iVar7 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54) - iVar7 >> 2;
      }
      if (iVar3 <= (int)uVar9) break;
      if ((iVar7 == 0) || ((uint)(*(int *)(param_1 + 0x54) - iVar7 >> 2) <= uVar9)) {
        FUN_00475b26();
      }
      iVar7 = uVar9 * 4;
      FUN_0042aec0(*(int *)(iVar7 + *(int *)(param_1 + 0x50)));
      if (local_2070 != '\0') {
        if ((*(int *)(param_1 + 0x50) == 0) ||
           ((uint)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2) <= uVar9)) {
          FUN_00475b26();
        }
        FUN_0042aec0(*(int *)(*(int *)(param_1 + 0x50) + iVar7));
      }
      if ((*(int *)(param_1 + 0x50) == 0) ||
         ((uint)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2) <= uVar9)) {
        FUN_00475b26();
      }
      cVar2 = FUN_0042acf0(*(void **)(*(int *)(param_1 + 0x50) + iVar7),local_40d8);
      if (cVar2 != '\0') goto LAB_00413599;
      uVar9 = uVar9 + 1;
    }
    local_41e0[0] = '\0';
    _memset(local_41e0 + 1,0,0xff);
    if ((*(int *)(param_1 + 0x60) == 0) ||
       ((uint)((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)) / 0x1c) <= uVar8)) {
      FUN_00475b26();
    }
    iVar7 = *(int *)(param_1 + 0x60) + local_41ec;
    if (*(uint *)(iVar7 + 0x18) < 0x10) {
      pcVar6 = (char *)(iVar7 + 4);
    }
    else {
      pcVar6 = *(char **)(iVar7 + 4);
    }
    if (pcVar6 == (char *)0x0) goto LAB_00413662;
    pcVar4 = pcVar6;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    pcVar5 = pcVar4 + (-1 - (int)(pcVar6 + 1));
    do {
      if ((int)pcVar5 < 0) {
        local_41e0[0] = '\0';
LAB_00413662:
        pcVar6 = local_41e0;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        iVar7 = *(int *)(param_1 + 0x60);
        if (pcVar6 == local_41e0 + 1) {
          if ((iVar7 == 0) || ((uint)((*(int *)(param_1 + 100) - iVar7) / 0x1c) <= uVar8)) {
            FUN_00475b26();
          }
          iVar7 = *(int *)(param_1 + 0x60) + local_41ec;
          if (*(uint *)(iVar7 + 0x18) < 0x10) {
            FUN_00425fd0((LPCSTR)(iVar7 + 4));
          }
          else {
            FUN_00425fd0(*(LPCSTR *)(iVar7 + 4));
          }
        }
        else {
          if ((iVar7 == 0) || ((uint)((*(int *)(param_1 + 100) - iVar7) / 0x1c) <= uVar8)) {
            FUN_00475b26();
          }
          lpFileName = (LPCSTR)FUN_00415da0(".\\%s");
          DeleteFileA(lpFileName);
          *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
          DAT_004cbeb8 = *(int *)(param_1 + 0x9c);
          DAT_004cbebc = DAT_004cbeb8 >> 0x1f;
          DAT_004cbec0 = *(int *)(param_1 + 0xa0);
          DAT_004cbec4 = DAT_004cbec0 >> 0x1f;
        }
        goto LAB_00413769;
      }
      if (pcVar6[(int)pcVar5] == '.') {
        sVar10 = (int)(pcVar4 + (-1 - (int)(pcVar6 + 1))) - (int)pcVar5;
        _memcpy(local_41e0,pcVar6 + (int)(pcVar5 + 1),sVar10);
        local_41e0[sVar10] = '\0';
        goto LAB_00413662;
      }
      pcVar5 = pcVar5 + -1;
    } while( true );
  }
  goto LAB_00413846;
LAB_00413599:
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  DAT_004cbeb8 = *(int *)(param_1 + 0x9c);
  DAT_004cbebc = DAT_004cbeb8 >> 0x1f;
  DAT_004cbec0 = *(int *)(param_1 + 0xa0);
  DAT_004cbec4 = DAT_004cbec0 >> 0x1f;
  FUN_00418fd0(L"Delete File Name: [%s]");
LAB_00413769:
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar8 = 0;
    while( true ) {
      this_00 = *(void **)(param_1 + 0x50);
      if (this_00 == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x54) - (int)this_00 >> 2;
      }
      if (iVar7 <= (int)uVar8) break;
      if ((this_00 == (void *)0x0) ||
         ((uint)(*(int *)(param_1 + 0x54) - (int)this_00 >> 2) <= uVar8)) {
        FUN_00475b26();
      }
      FUN_00429370(*(void **)(param_1 + 0x50),*(int *)((int)*(void **)(param_1 + 0x50) + uVar8 * 4))
      ;
      if ((*(int *)(param_1 + 0x50) == 0) ||
         ((uint)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2) <= uVar8)) {
        FUN_00475b26();
      }
      iVar7 = *(int *)(param_1 + 0x50);
      if (*(int *)(iVar7 + uVar8 * 4) != 0) {
        if ((iVar7 == 0) || ((uint)(*(int *)(param_1 + 0x54) - iVar7 >> 2) <= uVar8)) {
          FUN_00475b26();
        }
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x50) + uVar8 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        if ((*(int *)(param_1 + 0x50) == 0) ||
           ((uint)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50) >> 2) <= uVar8)) {
          FUN_00475b26();
        }
        *(undefined4 *)(*(int *)(param_1 + 0x50) + uVar8 * 4) = 0;
      }
      uVar8 = uVar8 + 1;
    }
    FUN_00429370(this_00,(int)local_41e8);
LAB_00413846:
    __security_check_cookie(local_4 ^ (uint)auStack_41f0);
    return;
  }
  uVar8 = uVar8 + 1;
  local_41ec = local_41ec + 0x1c;
  goto LAB_004133b0;
}

