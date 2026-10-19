// Address: 0x0042f0f0
// Name: FUN_0042f0f0
// Category: Launcher


uint __cdecl FUN_0042f0f0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *unaff_ESI;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(((undefined4 *)*param_1)[1] + 8 + (int)param_1);
  puVar2 = (undefined4 *)*param_1;
  while (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_00431500(param_1);
    if (puVar2 == (undefined4 *)0x3c) {
      return 1;
    }
    if ((int)puVar2 < 1) break;
    FUN_004313b0(param_1);
    if (-*(int *)((int)unaff_ESI + 0x14) - 1U < 2) {
      FUN_004956fe();
    }
    puVar5 = (undefined4 *)(*(int *)((int)unaff_ESI + 0x14) + 1);
    if (puVar5 == (undefined4 *)0xffffffff) {
      FUN_004956fe();
    }
    puVar3 = *(undefined4 **)((int)unaff_ESI + 0x18);
    if (puVar3 < puVar5) {
      puVar3 = (undefined4 *)FUN_00402af0(unaff_ESI,(uint)puVar5);
LAB_0042f15d:
      if (puVar5 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)((int)unaff_ESI + 4);
        puVar4 = puVar3;
        if (0xf < *(uint *)((int)unaff_ESI + 0x18)) {
          puVar4 = (undefined4 *)*puVar3;
        }
        *(char *)((int)puVar4 + *(int *)((int)unaff_ESI + 0x14)) = (char)puVar2;
        *(undefined4 **)((int)unaff_ESI + 0x14) = puVar5;
        if (0xf < *(uint *)((int)unaff_ESI + 0x18)) {
          puVar3 = (undefined4 *)*puVar3;
        }
        *(undefined1 *)((int)puVar3 + (int)puVar5) = 0;
      }
    }
    else {
      if (puVar5 != (undefined4 *)0x0) goto LAB_0042f15d;
      *(undefined4 *)((int)unaff_ESI + 0x14) = 0;
      if (puVar3 < (undefined4 *)0x10) {
        puVar3 = (undefined4 *)((int)unaff_ESI + 4);
        *(undefined1 *)puVar3 = 0;
      }
      else {
        puVar3 = *(undefined4 **)((int)unaff_ESI + 4);
        *(undefined1 *)puVar3 = 0;
      }
    }
    puVar2 = puVar3;
    iVar1 = *(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1);
  }
  return (uint)puVar2 & 0xffffff00;
}

