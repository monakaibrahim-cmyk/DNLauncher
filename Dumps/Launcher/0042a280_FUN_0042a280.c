// Address: 0x0042a280
// Name: FUN_0042a280
// Category: Launcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0042a280(uint param_1)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_8;
  
  uVar5 = 0xffffffff;
  uVar6 = 0;
  local_8 = 0xffffffff;
  iVar4 = 0;
  do {
    iVar3 = 0;
    if (*(int *)(in_EAX + 0x2a4) != 0) {
      iVar3 = (*(int *)(in_EAX + 0x2a8) - *(int *)(in_EAX + 0x2a4)) / 0x13c;
    }
    if (iVar3 <= (int)uVar6) {
      return local_8;
    }
    if ((*(int *)(in_EAX + 0x2a4) == 0) ||
       ((uint)((*(int *)(in_EAX + 0x2a8) - *(int *)(in_EAX + 0x2a4)) / 0x13c) <= uVar6)) {
      FUN_00475b26();
    }
    iVar3 = *(int *)(in_EAX + 0x2a4);
    if (*(int *)(iVar3 + 0x100 + iVar4) == 0) {
      if ((iVar3 == 0) || ((uint)((*(int *)(in_EAX + 0x2a8) - iVar3) / 0x13c) <= uVar6)) {
        FUN_00475b26();
      }
      iVar3 = *(int *)(in_EAX + 0x2a4);
      if (param_1 <= *(uint *)(iVar3 + 0x108 + iVar4)) {
        if ((iVar3 == 0) || ((uint)((*(int *)(in_EAX + 0x2a8) - iVar3) / 0x13c) <= uVar6)) {
          FUN_00475b26();
        }
        iVar3 = *(int *)(in_EAX + 0x2a4);
        if (*(uint *)(iVar3 + 0x108 + iVar4) == param_1) {
          return uVar6;
        }
        if ((iVar3 == 0) || ((uint)((*(int *)(in_EAX + 0x2a8) - iVar3) / 0x13c) <= uVar6)) {
          FUN_00475b26();
        }
        iVar3 = *(int *)(in_EAX + 0x2a4);
        fVar1 = (float)*(int *)(iVar4 + 0x108 + iVar3);
        if (*(int *)(iVar4 + 0x108 + iVar3) < 0) {
          fVar1 = fVar1 + _DAT_004b4720;
        }
        fVar2 = (float)(int)param_1;
        if ((int)param_1 < 0) {
          fVar2 = fVar2 + _DAT_004b4720;
        }
        if (fVar1 * (float)_DAT_004b4718 <= fVar2) {
          if ((iVar3 == 0) || ((uint)((*(int *)(in_EAX + 0x2a8) - iVar3) / 0x13c) <= uVar6)) {
            FUN_00475b26();
          }
          if (*(uint *)(iVar4 + 0x108 + *(int *)(in_EAX + 0x2a4)) < uVar5) {
            iVar3 = FUN_00415420();
            uVar5 = *(uint *)(iVar3 + 0x108);
            local_8 = uVar6;
          }
        }
      }
    }
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 0x13c;
  } while( true );
}

