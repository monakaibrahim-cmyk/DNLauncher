// Address: 0x0043faa0
// Name: FUN_0043faa0
// Category: Utility


void __cdecl FUN_0043faa0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int local_c;
  int *local_8;
  
  bVar8 = param_1[0x5b] != 0;
  iVar2 = param_1[0x66];
  bVar4 = false;
  if (bVar8) {
    if ((param_1[0x5c] < param_1[0x5b]) || (0x3f < param_1[0x5c])) {
      bVar4 = true;
    }
    bVar9 = param_1[0x49] == 1;
  }
  else {
    bVar9 = param_1[0x5c] == 0;
  }
  if (!bVar9) {
    bVar4 = true;
  }
  if ((param_1[0x5d] != 0) && (param_1[0x5e] != param_1[0x5d] + -1)) {
    bVar4 = true;
  }
  if ((0xd < param_1[0x5e]) || (bVar4)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[0x5b];
    *(int *)(*param_1 + 0x1c) = param_1[0x5c];
    *(int *)(*param_1 + 0x20) = param_1[0x5d];
    *(int *)(*param_1 + 0x24) = param_1[0x5e];
    (**(code **)*param_1)(param_1);
  }
  local_c = 0;
  if (0 < param_1[0x49]) {
    local_8 = param_1 + 0x4a;
    do {
      iVar3 = *(int *)(*local_8 + 4);
      piVar5 = (int *)(iVar3 * 0x100 + param_1[0x23]);
      if ((bVar8) && (*piVar5 < 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x73;
        *(int *)(*param_1 + 0x18) = iVar3;
        *(undefined4 *)(*param_1 + 0x1c) = 0;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
      }
      iVar7 = param_1[0x5b];
      if (iVar7 <= param_1[0x5c]) {
        do {
          if (param_1[0x5d] != (piVar5[iVar7] & (piVar5[iVar7] < 0) - 1)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x73;
            *(int *)(*param_1 + 0x18) = iVar3;
            *(int *)(*param_1 + 0x1c) = iVar7;
            (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          }
          piVar5[iVar7] = param_1[0x5e];
          iVar7 = iVar7 + 1;
        } while (iVar7 <= param_1[0x5c]);
      }
      local_8 = local_8 + 1;
      local_c = local_c + 1;
    } while (local_c < param_1[0x49]);
  }
  if (param_1[0x5d] == 0) {
    if (bVar8) {
      *(code **)(iVar2 + 4) = FUN_0043f360;
    }
    else {
      *(code **)(iVar2 + 4) = FUN_0043f120;
    }
  }
  else if (bVar8) {
    *(undefined1 **)(iVar2 + 4) = &LAB_0043f6a0;
  }
  else {
    *(code **)(iVar2 + 4) = FUN_0043f5b0;
  }
  local_c = 0;
  if (0 < param_1[0x49]) {
    puVar6 = (undefined4 *)(iVar2 + 0x18);
    piVar5 = param_1 + 0x4a;
    do {
      if (bVar8) {
        iVar3 = *(int *)(*piVar5 + 0x18);
        piVar1 = (int *)(iVar2 + 0x2c + iVar3 * 4);
        FUN_0043e550(param_1,'\0',iVar3,piVar1);
        *(int *)(iVar2 + 0x3c) = *piVar1;
      }
      else if (param_1[0x5d] == 0) {
        iVar3 = *(int *)(*piVar5 + 0x14);
        FUN_0043e550(param_1,'\x01',iVar3,(int *)(iVar2 + 0x2c + iVar3 * 4));
      }
      *puVar6 = 0;
      local_c = local_c + 1;
      piVar5 = piVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (local_c < param_1[0x49]);
  }
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined1 *)(iVar2 + 8) = 0;
  *(int *)(iVar2 + 0x28) = param_1[0x3f];
  return;
}

