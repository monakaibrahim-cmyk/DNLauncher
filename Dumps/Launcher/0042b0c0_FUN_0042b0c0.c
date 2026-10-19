// Address: 0x0042b0c0
// Name: FUN_0042b0c0
// Category: Launcher


int * FUN_0042b0c0(int *param_1,uint *param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int unaff_EBX;
  undefined4 *puVar6;
  
  piVar3 = param_1;
  puVar6 = *(undefined4 **)(unaff_EBX + 4);
  bVar2 = true;
  param_1._0_1_ = '\x01';
  if (*(char *)((int)puVar6[1] + 0x21) == '\0') {
    puVar4 = (undefined4 *)puVar6[1];
    do {
      puVar6 = puVar4;
      if (((int)puVar6[5] < (int)param_2[1]) ||
         (((int)puVar6[5] <= (int)param_2[1] && ((uint)puVar6[4] <= *param_2)))) {
        puVar4 = (undefined4 *)puVar6[2];
        bVar2 = false;
        param_1._0_1_ = '\0';
      }
      else {
        puVar4 = (undefined4 *)*puVar6;
        bVar2 = true;
        param_1._0_1_ = '\x01';
      }
    } while (*(char *)((int)puVar4 + 0x21) == '\0');
  }
  if (bVar2) {
    if (puVar6 == (undefined4 *)**(int **)(unaff_EBX + 4)) {
      piVar5 = (int *)FUN_0042b7d0(unaff_EBX,(int *)&stack0xfffffff4,'\x01');
      iVar1 = *piVar5;
      piVar3[1] = piVar5[1];
      *piVar3 = iVar1;
      *(undefined1 *)(piVar3 + 2) = 1;
      return piVar3;
    }
    FUN_0042c030();
  }
  if (((int)puVar6[5] <= (int)param_2[1]) &&
     (((int)puVar6[5] < (int)param_2[1] || ((uint)puVar6[4] < *param_2)))) {
    piVar5 = (int *)FUN_0042b7d0(unaff_EBX,(int *)&stack0xfffffff4,(char)param_1);
    iVar1 = piVar5[1];
    *piVar3 = *piVar5;
    piVar3[1] = iVar1;
    *(undefined1 *)(piVar3 + 2) = 1;
    return piVar3;
  }
  piVar3[1] = (int)puVar6;
  *piVar3 = unaff_EBX;
  *(undefined1 *)(piVar3 + 2) = 0;
  return piVar3;
}

