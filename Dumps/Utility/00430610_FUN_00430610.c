// Address: 0x00430610
// Name: FUN_00430610
// Category: Utility


void FUN_00430610(int *param_1,void *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 uStack_10;
  
  if (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0) {
    while (iVar1 = FUN_004313b0(param_1), 0 < iVar1) {
      if (-*(int *)((int)param_2 + 0x14) - 1U < 2) {
        FUN_004956fe();
      }
      uVar4 = *(int *)((int)param_2 + 0x14) + 1;
      if (uVar4 == 0xffffffff) {
        FUN_004956fe();
      }
      if (*(uint *)((int)param_2 + 0x18) < uVar4) {
        FUN_00402af0(param_2,uVar4);
LAB_0043067d:
        if (uVar4 != 0) {
          puVar2 = (undefined4 *)((int)param_2 + 4);
          puVar3 = puVar2;
          if (0xf < *(uint *)((int)param_2 + 0x18)) {
            puVar3 = (undefined4 *)*puVar2;
          }
          uStack_10 = (undefined1)iVar1;
          *(undefined1 *)((int)puVar3 + *(int *)((int)param_2 + 0x14)) = uStack_10;
          *(uint *)((int)param_2 + 0x14) = uVar4;
          if (0xf < *(uint *)((int)param_2 + 0x18)) {
            puVar2 = (undefined4 *)*puVar2;
          }
          *(undefined1 *)((int)puVar2 + uVar4) = 0;
        }
      }
      else {
        if (uVar4 != 0) goto LAB_0043067d;
        *(undefined4 *)((int)param_2 + 0x14) = 0;
        if (*(uint *)((int)param_2 + 0x18) < 0x10) {
          *(undefined1 *)((int)param_2 + 4) = 0;
        }
        else {
          **(undefined1 **)((int)param_2 + 4) = 0;
        }
      }
      if (iVar1 == 0x3e) {
        return;
      }
      if (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) != 0) {
        return;
      }
    }
    iVar1 = FUN_0042d8f0();
    if (iVar1 != 0) {
      FUN_0042fa80((void *)0x0,(byte *)0x0,0);
    }
  }
  return;
}

