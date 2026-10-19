// Address: 0x00429c00
// Name: FUN_00429c00
// Category: Launcher


void __fastcall FUN_00429c00(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *_Src;
  int unaff_EBX;
  int iVar8;
  int iVar9;
  size_t _Size;
  undefined1 auStack_458 [4];
  longlong local_454;
  int local_448;
  undefined4 *local_444;
  char *local_440;
  int local_43c;
  undefined4 *local_438;
  int local_434;
  undefined4 *local_430;
  char local_42c [264];
  char local_324 [264];
  char local_21c [264];
  char local_114 [268];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)auStack_458;
  local_440 = param_2;
  FUN_00425f50(param_1,param_2);
  __strlwr_s(local_324,0x104);
  FUN_00424a50(local_324);
  local_454 = FUN_004261f0(local_324);
  FUN_0042b480(&local_448);
  iVar5 = local_448;
  puVar7 = local_444;
  iVar8 = local_43c;
  puVar6 = local_438;
  do {
    local_438 = puVar6;
    local_43c = iVar8;
    puVar6 = *(undefined4 **)(unaff_EBX + 0x2b4);
    if ((iVar5 == 0) || (iVar5 != unaff_EBX + 0x2b0)) {
      FUN_00475b26();
    }
    if (puVar7 == puVar6) {
      __security_check_cookie(local_8 ^ (uint)auStack_458);
      return;
    }
    if (iVar5 == 0) {
      FUN_00475b26();
    }
    if (puVar7 == *(undefined4 **)(iVar5 + 4)) {
      FUN_00475b26();
    }
    uVar2 = puVar7[6];
    if ((*(int *)(unaff_EBX + 0x2a4) == 0) ||
       ((uint)((*(int *)(unaff_EBX + 0x2a8) - *(int *)(unaff_EBX + 0x2a4)) / 0x13c) <= uVar2)) {
      FUN_00475b26();
    }
    iVar5 = *(int *)(unaff_EBX + 0x2a4);
    iVar8 = uVar2 * 0x13c;
    local_448 = iVar8;
    if (*(int *)(iVar5 + 0x100 + iVar8) != 0) {
      if ((iVar5 == 0) || ((uint)((*(int *)(unaff_EBX + 0x2a8) - iVar5) / 0x13c) <= uVar2)) {
        FUN_00475b26();
      }
      _Src = (char *)(*(int *)(unaff_EBX + 0x2a4) + iVar8);
      if (_Src != (char *)0x0) {
        pcVar3 = _Src;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        for (pcVar4 = pcVar3 + (-1 - (int)(_Src + 1)); -1 < (int)pcVar4; pcVar4 = pcVar4 + -1) {
          if ((_Src[(int)pcVar4] == '\\') || (_Src[(int)pcVar4] == '/')) {
            _Size = (int)(pcVar3 + (-1 - (int)(_Src + 1))) - (int)pcVar4;
            _memcpy(local_21c,_Src + (int)(pcVar4 + 1),_Size);
            local_324[_Size + 0x108] = '\0';
            goto LAB_00429d81;
          }
        }
        pcVar3 = _Src;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        _strcpy_s(local_21c,(rsize_t)(pcVar3 + (1 - (int)(_Src + 1))),_Src);
      }
LAB_00429d81:
      iVar5 = __stricmp(local_324,local_21c);
      if (iVar5 == 0) {
        FUN_00425ef0();
        __strlwr_s(local_42c,0x104);
        FUN_00424a50(local_42c);
        if (local_42c[0] == '\0') {
LAB_00429ed9:
          __security_check_cookie(local_8 ^ (uint)auStack_458);
          return;
        }
        if ((*(int *)(unaff_EBX + 0x2a4) == 0) ||
           ((uint)((*(int *)(unaff_EBX + 0x2a8) - *(int *)(unaff_EBX + 0x2a4)) / 0x13c) <= uVar2)) {
          FUN_00475b26();
        }
        FUN_00425ef0();
        iVar5 = __stricmp(local_42c,local_114);
        if (iVar5 == 0) goto LAB_00429ed9;
      }
    }
    puVar7 = (undefined4 *)(*(undefined4 **)(unaff_EBX + 0x2b4))[1];
    local_454 = local_454 + 1;
    iVar9 = (int)((ulonglong)local_454 >> 0x20);
    cVar1 = *(char *)((int)puVar7 + 0x21);
    local_430 = *(undefined4 **)(unaff_EBX + 0x2b4);
    while (cVar1 == '\0') {
      if ((iVar9 < (int)puVar7[5]) ||
         ((iVar9 <= (int)puVar7[5] && ((uint)local_454 <= (uint)puVar7[4])))) {
        puVar6 = (undefined4 *)*puVar7;
      }
      else {
        puVar6 = (undefined4 *)puVar7[2];
        puVar7 = local_430;
      }
      local_430 = puVar7;
      puVar7 = puVar6;
      cVar1 = *(char *)((int)puVar6 + 0x21);
    }
    puVar7 = *(undefined4 **)(unaff_EBX + 0x2b4);
    iVar5 = unaff_EBX + 0x2b0;
    iVar8 = iVar5;
    puVar6 = puVar7;
    local_434 = iVar5;
    if (((local_430 != puVar7) && ((int)local_430[5] <= iVar9)) &&
       (((int)local_430[5] < iVar9 || ((uint)local_430[4] <= (uint)local_454)))) {
      puVar7 = local_430;
      iVar8 = local_43c;
      puVar6 = local_438;
    }
  } while( true );
}

