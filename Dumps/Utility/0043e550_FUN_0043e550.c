// Address: 0x0043e550
// Name: FUN_0043e550
// Category: Utility


void __cdecl FUN_0043e550(int *param_1,char param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint _Size;
  undefined1 *puVar9;
  int iVar10;
  int local_528;
  int iStack_524;
  int iStack_520;
  int iStack_51c;
  int iStack_518;
  int *local_514;
  int aiStack_510 [258];
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)&local_528;
  local_514 = param_1;
  if ((param_3 < 0) || (3 < param_3)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(int *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (param_2 == '\0') {
    iVar6 = param_1[param_3 + 0x2c];
  }
  else {
    iVar6 = param_1[param_3 + 0x28];
  }
  local_528 = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(int *)(*param_1 + 0x18) = param_3;
    (**(code **)*param_1)(param_1);
  }
  if (*param_4 == 0) {
    iVar2 = (**(code **)param_1[1])(param_1,1,0x590);
    *param_4 = iVar2;
  }
  iVar2 = *param_4;
  *(int *)(iVar2 + 0x8c) = iVar6;
  iVar6 = 1;
  iVar10 = 0;
  iStack_524 = iVar2;
  do {
    _Size = (uint)*(byte *)(local_528 + iVar6);
    if (0x100 < (int)(_Size + iVar10)) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
      iVar2 = iStack_524;
    }
    if (_Size != 0) {
      _memset(acStack_108 + iVar10,iVar6,_Size);
      iVar10 = iVar10 + _Size;
      iVar2 = iStack_524;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x11);
  acStack_108[iVar10] = '\0';
  aiStack_510[0] = iVar10;
  iVar6 = 0;
  iVar10 = 0;
  iVar7 = (int)acStack_108[0];
  if (acStack_108[0] != '\0') {
    pcVar3 = acStack_108;
    do {
      cVar1 = *pcVar3;
      while (cVar1 == iVar7) {
        cVar1 = acStack_108[iVar10 + 1];
        aiStack_510[iVar10 + 1] = iVar6;
        iVar10 = iVar10 + 1;
        iVar6 = iVar6 + 1;
      }
      if (1 << ((byte)iVar7 & 0x1f) <= iVar6) {
        *(undefined4 *)(*param_1 + 0x14) = 8;
        (**(code **)*param_1)(param_1);
        iVar2 = iStack_524;
      }
      pcVar3 = acStack_108 + iVar10;
      iVar6 = iVar6 * 2;
      iVar7 = iVar7 + 1;
    } while (*pcVar3 != '\0');
  }
  iVar10 = 0;
  iVar6 = 1;
  do {
    if (*(char *)(iVar6 + local_528) == '\0') {
      *(undefined4 *)(iVar2 + iVar6 * 4) = 0xffffffff;
    }
    else {
      *(int *)(iVar2 + 0x48 + iVar6 * 4) = iVar10 - aiStack_510[iVar10 + 1];
      iVar10 = iVar10 + (uint)*(byte *)(iVar6 + local_528);
      *(int *)(iVar2 + iVar6 * 4) = aiStack_510[iVar10];
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x11);
  *(undefined4 *)(iVar2 + 0x44) = 0xfffff;
  _memset((void *)(iVar2 + 0x90),0,0x400);
  iVar10 = aiStack_510[0];
  iVar2 = local_528;
  iVar7 = 0;
  iVar6 = 1;
  iStack_520 = 7;
  do {
    iStack_51c = 1;
    if (*(char *)(iVar6 + local_528) != '\0') {
      iStack_518 = 1 << ((byte)iStack_520 & 0x1f);
      puVar8 = (undefined1 *)(iVar7 + 0x11 + local_528);
      do {
        iVar4 = aiStack_510[iVar7 + 1] << ((byte)iStack_520 & 0x1f);
        if (0 < iStack_518) {
          puVar9 = (undefined1 *)(iVar4 + 0x490 + iStack_524);
          piVar5 = (int *)(iStack_524 + 0x90 + iVar4 * 4);
          iVar4 = iStack_518;
          do {
            *piVar5 = iVar6;
            *puVar9 = *puVar8;
            iVar4 = iVar4 + -1;
            piVar5 = piVar5 + 1;
            puVar9 = puVar9 + 1;
          } while (0 < iVar4);
        }
        iStack_51c = iStack_51c + 1;
        iVar7 = iVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (iStack_51c <= (int)(uint)*(byte *)(iVar6 + local_528));
    }
    iVar6 = iVar6 + 1;
    iStack_520 = iStack_520 + -1;
  } while (-1 < iStack_520);
  if ((param_2 != '\0') && (iVar6 = 0, 0 < aiStack_510[0])) {
    do {
      if (0xf < *(byte *)(iVar2 + 0x11 + iVar6)) {
        *(undefined4 *)(*local_514 + 0x14) = 8;
        (**(code **)*local_514)(local_514);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar10);
  }
  __security_check_cookie(local_4 ^ (uint)&local_528);
  return;
}

