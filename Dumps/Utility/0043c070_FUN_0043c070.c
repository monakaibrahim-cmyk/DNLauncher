// Address: 0x0043c070
// Name: FUN_0043c070
// Category: Utility


void FUN_0043c070(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *local_8;
  int local_4;
  
  local_4 = 0;
  if (0 < unaff_EBX[0x49]) {
    local_8 = unaff_EBX + 0x4a;
    do {
      iVar1 = *local_8;
      if (*(int *)(iVar1 + 0x4c) == 0) {
        uVar2 = *(uint *)(iVar1 + 0x10);
        if ((3 < uVar2) || (unaff_EBX[uVar2 + 0x24] == 0)) {
          *(undefined4 *)(*unaff_EBX + 0x14) = 0x34;
          *(uint *)(*unaff_EBX + 0x18) = uVar2;
          (**(code **)*unaff_EBX)();
        }
        puVar3 = (undefined4 *)(**(code **)unaff_EBX[1])();
        puVar5 = (undefined4 *)unaff_EBX[uVar2 + 0x24];
        puVar6 = puVar3;
        for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
        *(undefined4 **)(iVar1 + 0x4c) = puVar3;
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + 1;
    } while (local_4 < unaff_EBX[0x49]);
  }
  return;
}

