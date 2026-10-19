// Address: 0x0043d880
// Name: FUN_0043d880
// Category: Utility


undefined4 __cdecl FUN_0043d880(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *local_2c;
  int *local_28;
  int iStack_24;
  int local_20;
  int aiStack_10 [4];
  
  iVar1 = *(int *)(param_1 + 0x188);
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x124)) {
    local_2c = (int *)(param_1 + 0x128);
    do {
      iVar4 = *(int *)(*local_2c + 0xc);
      iVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)(iVar1 + 0x48 + *(int *)(*local_2c + 4) * 4),
                         *(int *)(param_1 + 0x80) * iVar4,iVar4,1);
      local_2c = local_2c + 1;
      aiStack_10[iVar10] = iVar4;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x124));
  }
  iVar10 = *(int *)(iVar1 + 0x18);
  if (iVar10 < *(int *)(iVar1 + 0x1c)) {
    do {
      local_2c = *(int **)(iVar1 + 0x14);
      if (local_2c < *(uint *)(param_1 + 0x138)) {
        do {
          iVar4 = 0;
          local_20 = 0;
          if (0 < *(int *)(param_1 + 0x124)) {
            local_28 = (int *)(param_1 + 0x128);
            do {
              iVar2 = *local_28;
              iVar7 = *(int *)(iVar2 + 0x34);
              iVar5 = iVar7 * (int)local_2c;
              iStack_24 = 0;
              if (0 < *(int *)(iVar2 + 0x38)) {
                piVar9 = (int *)(aiStack_10[local_20] + iVar10 * 4);
                do {
                  iVar6 = *piVar9 + iVar5 * 0x80;
                  iVar8 = 0;
                  if (0 < iVar7) {
                    piVar11 = (int *)(iVar1 + 0x20 + iVar4 * 4);
                    do {
                      *piVar11 = iVar6;
                      iVar7 = *(int *)(iVar2 + 0x34);
                      iVar8 = iVar8 + 1;
                      iVar4 = iVar4 + 1;
                      piVar11 = piVar11 + 1;
                      iVar6 = iVar6 + 0x80;
                    } while (iVar8 < iVar7);
                  }
                  iStack_24 = iStack_24 + 1;
                  piVar9 = piVar9 + 1;
                } while (iStack_24 < *(int *)(iVar2 + 0x38));
              }
              local_28 = local_28 + 1;
              local_20 = local_20 + 1;
            } while (local_20 < *(int *)(param_1 + 0x124));
          }
          cVar3 = (**(code **)(*(int *)(param_1 + 0x198) + 4))(param_1,iVar1 + 0x20);
          if (cVar3 == '\0') {
            *(int *)(iVar1 + 0x18) = iVar10;
            *(int **)(iVar1 + 0x14) = local_2c;
            return 0;
          }
          local_2c = (int *)((int)local_2c + 1);
        } while (local_2c < *(uint *)(param_1 + 0x138));
      }
      iVar10 = iVar10 + 1;
      *(undefined4 *)(iVar1 + 0x14) = 0;
    } while (iVar10 < *(int *)(iVar1 + 0x1c));
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  if (*(uint *)(param_1 + 0x11c) <= *(uint *)(param_1 + 0x80)) {
    (**(code **)(*(int *)(param_1 + 400) + 0xc))(param_1);
    return 4;
  }
  FUN_0043d5c0(param_1);
  return 3;
}

