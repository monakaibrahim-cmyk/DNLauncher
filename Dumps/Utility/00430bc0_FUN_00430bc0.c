// Address: 0x00430bc0
// Name: FUN_00430bc0
// Category: Utility


void __thiscall FUN_00430bc0(void *this,int *param_1,void *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 uStack_c;
  
  if (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0) {
    while( true ) {
      iVar1 = FUN_00431500(param_1);
      if ((*(char *)((int)this + 0x44) == '\0') && (iVar1 == 0x3c)) {
        return;
      }
      if (iVar1 < 1) break;
      if (-*(int *)((int)param_2 + 0x14) - 1U < 2) {
        FUN_004956fe();
      }
      uVar4 = *(int *)((int)param_2 + 0x14) + 1;
      if (uVar4 == 0xffffffff) {
        FUN_004956fe();
      }
      if (*(uint *)((int)param_2 + 0x18) < uVar4) {
        FUN_00402af0(param_2,uVar4);
LAB_00430c4a:
        if (uVar4 != 0) {
          puVar2 = (undefined4 *)((int)param_2 + 4);
          puVar3 = puVar2;
          if (0xf < *(uint *)((int)param_2 + 0x18)) {
            puVar3 = (undefined4 *)*puVar2;
          }
          uStack_c = (undefined1)iVar1;
          *(undefined1 *)((int)puVar3 + *(int *)((int)param_2 + 0x14)) = uStack_c;
          *(uint *)((int)param_2 + 0x14) = uVar4;
          if (0xf < *(uint *)((int)param_2 + 0x18)) {
            puVar2 = (undefined4 *)*puVar2;
          }
          *(undefined1 *)((int)puVar2 + uVar4) = 0;
        }
      }
      else {
        if (uVar4 != 0) goto LAB_00430c4a;
        *(undefined4 *)((int)param_2 + 0x14) = 0;
        if (*(uint *)((int)param_2 + 0x18) < 0x10) {
          *(undefined1 *)((int)param_2 + 4) = 0;
        }
        else {
          **(undefined1 **)((int)param_2 + 4) = 0;
        }
      }
      FUN_004313b0(param_1);
      if (((*(char *)((int)this + 0x44) != '\0') && (iVar1 == 0x3e)) &&
         (uVar4 = *(uint *)((int)param_2 + 0x14), 2 < uVar4)) {
        if (uVar4 < uVar4 - 2) {
          FUN_00475b26();
        }
        puVar2 = (undefined4 *)((int)param_2 + 4);
        puVar3 = puVar2;
        if (0xf < *(uint *)((int)param_2 + 0x18)) {
          puVar3 = (undefined4 *)*puVar2;
        }
        if (*(char *)((int)puVar3 + (uVar4 - 2)) == ']') {
          if (*(uint *)((int)param_2 + 0x14) < uVar4 - 3) {
            FUN_00475b26();
          }
          if (0xf < *(uint *)((int)param_2 + 0x18)) {
            puVar2 = (undefined4 *)*puVar2;
          }
          if (*(char *)((int)puVar2 + (uVar4 - 3)) == ']') {
            return;
          }
        }
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

