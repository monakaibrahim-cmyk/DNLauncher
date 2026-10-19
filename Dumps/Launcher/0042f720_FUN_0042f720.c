// Address: 0x0042f720
// Name: FUN_0042f720
// Category: Launcher


void __thiscall FUN_0042f720(void *this,int *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 uStack_10;
  
  uVar1 = FUN_0042f0f0(param_1);
  if ((char)uVar1 != '\0') {
    iVar5 = *(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1);
    while (iVar5 == 0) {
      iVar5 = *(int *)((int)param_2 + 0x14);
      do {
        iVar2 = FUN_00431500(param_1);
        if (iVar2 == 0x3e) break;
        iVar2 = FUN_004313b0(param_1);
        if (iVar2 < 1) {
          FUN_0042fa80((void *)0x0,(byte *)0x0,0);
          break;
        }
        if (-*(int *)((int)param_2 + 0x14) - 1U < 2) {
          FUN_004956fe();
        }
        uVar1 = *(int *)((int)param_2 + 0x14) + 1;
        if (uVar1 == 0xffffffff) {
          FUN_004956fe();
        }
        if (*(uint *)((int)param_2 + 0x18) < uVar1) {
          FUN_00402af0(param_2,uVar1);
LAB_0042f7c5:
          if (uVar1 != 0) {
            puVar3 = (undefined4 *)((int)param_2 + 4);
            puVar6 = puVar3;
            if (0xf < *(uint *)((int)param_2 + 0x18)) {
              puVar6 = (undefined4 *)*puVar3;
            }
            uStack_10 = (undefined1)iVar2;
            *(undefined1 *)((int)puVar6 + *(int *)((int)param_2 + 0x14)) = uStack_10;
            *(uint *)((int)param_2 + 0x14) = uVar1;
            if (0xf < *(uint *)((int)param_2 + 0x18)) {
              puVar3 = (undefined4 *)*puVar3;
            }
            *(undefined1 *)((int)puVar3 + uVar1) = 0;
          }
        }
        else {
          if (uVar1 != 0) goto LAB_0042f7c5;
          *(undefined4 *)((int)param_2 + 0x14) = 0;
          if (*(uint *)((int)param_2 + 0x18) < 0x10) {
            *(undefined1 *)((int)param_2 + 4) = 0;
          }
          else {
            **(undefined1 **)((int)param_2 + 4) = 0;
          }
        }
      } while (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0);
      if (*(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1) == 0) {
        iVar7 = 0;
        iVar2 = FUN_004028d0((int)param_2);
        piVar4 = FUN_0042faf0(this,iVar2 + iVar5,iVar7);
        if (piVar4 == (int *)0x0) break;
        (**(code **)(*piVar4 + 0x44))(param_1,param_2);
        iVar5 = (**(code **)(*piVar4 + 0x14))();
        (**(code **)*piVar4)(1);
        if (iVar5 != 0) {
          return;
        }
      }
      iVar5 = *(int *)(*(int *)(*param_1 + 4) + 8 + (int)param_1);
    }
  }
  FUN_0042fa80((void *)0x0,(byte *)0x0,0);
  return;
}

