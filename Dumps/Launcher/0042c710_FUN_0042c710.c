// Address: 0x0042c710
// Name: FUN_0042c710
// Category: Launcher


undefined4 FUN_0042c710(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x10) == 0) {
    param_1 = FUN_0042d7d0();
  }
  else {
    piVar1 = (int *)**(int **)(param_1 + 0xc);
    if (piVar1 == *(int **)(param_1 + 0xc)) {
      FUN_00475b26();
    }
    (**(code **)(*(int *)piVar1[2] + 0x14))();
    param_1 = FUN_0042d870();
  }
  if (param_1 != 0) {
    if (param_2 == '\x01') {
      iVar2 = **(int **)(iVar3 + 0xc);
      iVar4 = FUN_0042cb10(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
      FUN_0042cb50(iVar3 + 8);
      *(int *)(iVar2 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
    }
    *(int *)(iVar3 + 4) = param_1;
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}

