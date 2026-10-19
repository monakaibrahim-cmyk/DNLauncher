// Address: 0x00442c50
// Name: FUN_00442c50
// Category: Utility


void __cdecl FUN_00442c50(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  int iStack_c;
  
  iVar1 = param_1[0x6a];
  piStack_18 = (int *)(iVar1 + 0x20);
  iVar3 = FUN_00442b20(param_1,piStack_18);
  if (param_1[0x19] == 3) {
    iVar2 = *param_1;
    *(int *)(iVar2 + 0x18) = iVar3;
    *(int *)(iVar2 + 0x1c) = *piStack_18;
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(*param_1 + 0x14) = 0x5e;
    (**(code **)(*param_1 + 4))();
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x5f;
    *(int *)(*param_1 + 0x18) = iVar3;
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  piVar4 = (int *)(**(code **)(param_1[1] + 8))(param_1,1,iVar3,param_1[0x19]);
  iStack_c = 0;
  piVar9 = piVar4;
  iStack_1c = iVar3;
  if (0 < param_1[0x19]) {
    do {
      iVar2 = *piStack_18;
      iVar5 = iStack_1c / iVar2;
      iStack_20 = 0;
      if (0 < iVar2) {
        iVar10 = 0;
        do {
          iVar6 = FUN_00442c10(iStack_20);
          for (iVar8 = iVar10; iVar8 < iVar3; iVar8 = iVar8 + iStack_1c) {
            iVar7 = 0;
            if (0 < iVar5) {
              do {
                iVar11 = *piVar9 + iVar7;
                iVar7 = iVar7 + 1;
                *(char *)(iVar11 + iVar8) = (char)iVar6;
              } while (iVar7 < iVar5);
            }
          }
          iStack_20 = iStack_20 + 1;
          iVar10 = iVar10 + iVar5;
        } while (iStack_20 < iVar2);
      }
      piStack_18 = piStack_18 + 1;
      iStack_c = iStack_c + 1;
      piVar9 = piVar9 + 1;
      iStack_1c = iVar5;
    } while (iStack_c < param_1[0x19]);
    *(int **)(iVar1 + 0x10) = piVar4;
    *(int *)(iVar1 + 0x14) = iVar3;
    return;
  }
  *(int *)(iVar1 + 0x14) = iVar3;
  *(int **)(iVar1 + 0x10) = piVar4;
  return;
}

