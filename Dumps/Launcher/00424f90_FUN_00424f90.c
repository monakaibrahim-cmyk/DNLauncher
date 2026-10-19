// Address: 0x00424f90
// Name: FUN_00424f90
// Category: Launcher


int __fastcall FUN_00424f90(undefined4 param_1,uint param_2,short *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int in_EAX;
  int *piVar3;
  int *piVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  
  if (param_2 < *(uint *)(in_EAX + 0x14)) {
    uVar2 = *(uint *)(in_EAX + 0x18);
    piVar1 = (int *)(in_EAX + 4);
    piVar3 = piVar1;
    if (7 < uVar2) {
      piVar3 = (int *)*piVar1;
    }
    piVar4 = piVar1;
    if (7 < uVar2) {
      piVar4 = (int *)*piVar1;
    }
    for (psVar5 = (short *)((int)piVar4 + param_2 * 2);
        psVar5 < (short *)((int)piVar3 + *(uint *)(in_EAX + 0x14) * 2); psVar5 = psVar5 + 1) {
      if (param_4 == 0) {
LAB_00424fed:
        if (7 < uVar2) {
          return (int)psVar5 - *piVar1 >> 1;
        }
        return (int)psVar5 - (int)piVar1 >> 1;
      }
      psVar6 = param_3;
      iVar7 = param_4;
      while (*psVar6 != *psVar5) {
        psVar6 = psVar6 + 1;
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) goto LAB_00424fed;
      }
    }
  }
  return -1;
}

