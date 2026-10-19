// Address: 0x00413870
// Name: FUN_00413870
// Category: Launcher


undefined4 FUN_00413870(undefined4 param_1,undefined4 param_2,char *param_3)

{
  bool bVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  undefined4 *this;
  int extraout_ECX;
  int iVar5;
  uint uVar6;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_3 == (char *)0x0) {
    return 0;
  }
  uVar6 = 0;
  while( true ) {
    iVar5 = *(int *)(in_EAX + 0x50);
    if (iVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(in_EAX + 0x54) - iVar5 >> 2;
    }
    if (iVar3 <= (int)uVar6) {
      return 1;
    }
    if ((iVar5 == 0) || ((uint)(*(int *)(in_EAX + 0x54) - iVar5 >> 2) <= uVar6)) {
      FUN_00475b26();
      iVar5 = extraout_ECX;
    }
    uVar4 = FUN_00429c00(iVar5,param_3);
    if (uVar4 != 0xffffffff) break;
    uVar6 = uVar6 + 1;
  }
  if ((*(int *)(in_EAX + 0x50) == 0) ||
     ((uint)(*(int *)(in_EAX + 0x54) - *(int *)(in_EAX + 0x50) >> 2) <= uVar6)) {
    FUN_00475b26();
  }
  iVar5 = *(int *)(*(int *)(in_EAX + 0x50) + uVar6 * 4);
  if ((*(int *)(iVar5 + 0x2a4) == 0) ||
     ((uint)((*(int *)(iVar5 + 0x2a8) - *(int *)(iVar5 + 0x2a4)) / 0x13c) <= uVar4)) {
    FUN_00475b26();
  }
  uVar4 = *(uint *)(uVar4 * 0x13c + 0x108 + *(int *)(iVar5 + 0x2a4));
  if (uVar4 < *(uint *)(param_3 + 0x100)) {
    bVar1 = false;
    uVar6 = 0;
    while( true ) {
      iVar5 = *(int *)(in_EAX + 0x50);
      if (iVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(in_EAX + 0x54) - iVar5 >> 2;
      }
      if (iVar3 <= (int)uVar6) break;
      if ((iVar5 == 0) || ((uint)(*(int *)(in_EAX + 0x54) - iVar5 >> 2) <= uVar6)) {
        FUN_00475b26();
      }
      cVar2 = FUN_0042acf0(*(void **)(*(int *)(in_EAX + 0x50) + uVar6 * 4),param_3);
      if (cVar2 != '\0') {
        bVar1 = true;
      }
      uVar6 = uVar6 + 1;
    }
    if (!bVar1) {
      FUN_00418f70(L"Remove File Failed!");
      return 0;
    }
  }
  else {
    this = FUN_00429b00(uVar4,param_3);
    if (this == (undefined4 *)0x0) {
      return 0;
    }
    if ((*(int *)(in_EAX + 0x50) == 0) ||
       ((uint)(*(int *)(in_EAX + 0x54) - *(int *)(in_EAX + 0x50) >> 2) <= uVar6)) {
      FUN_00475b26();
    }
    FUN_0042a900();
    if ((*(int *)(in_EAX + 0x50) == 0) ||
       ((uint)(*(int *)(in_EAX + 0x54) - *(int *)(in_EAX + 0x50) >> 2) <= uVar6)) {
      FUN_00475b26();
    }
    uVar4 = FUN_0042a280(*(uint *)(param_3 + 0x100));
    iVar5 = *(int *)(in_EAX + 0x50);
    if (uVar4 == 0xffffffff) {
      local_8 = param_1;
      local_c = uVar6;
      if ((iVar5 == 0) || ((uint)(*(int *)(in_EAX + 0x54) - iVar5 >> 2) <= uVar6)) {
        FUN_00475b26();
      }
      local_4 = FUN_0042aa40((undefined4 *)param_3);
      FUN_00415460(&local_c);
    }
    else {
      if ((iVar5 == 0) || ((uint)(*(int *)(in_EAX + 0x54) - iVar5 >> 2) <= uVar6)) {
        FUN_00475b26();
      }
      cVar2 = FUN_0042ab00(this,*(int *)(*(int *)(in_EAX + 0x50) + uVar6 * 4),uVar4,1);
      if (cVar2 == '\0') {
        FUN_00418f70(L"Patch File Failed!");
        (**(code **)*this)(1);
        return 0;
      }
    }
    (**(code **)*this)(1);
    param_3[0] = '\x01';
    param_3[1] = '\0';
    param_3[2] = '\0';
    param_3[3] = '\0';
  }
  return 1;
}

