// Address: 0x0043c4c0
// Name: FUN_0043c4c0
// Category: Utility


int __cdecl FUN_0043c4c0(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_EDI;
  
  uVar1 = (uint)(0x3b9ac9f0 / (ulonglong)param_3);
  iVar2 = param_1[1];
  if (uVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    (**(code **)*param_1)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar2 + 0x50) = uVar1;
  iVar2 = FUN_0043c2f0(param_1,param_2,param_4 * 4,unaff_EDI);
  uVar5 = 0;
  if (param_4 != 0) {
    do {
      if (param_4 - uVar5 <= uVar1) {
        uVar1 = param_4 - uVar5;
      }
      puVar3 = FUN_0043c420(param_1,param_2,uVar1 * param_3);
      for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 **)(iVar2 + uVar5 * 4) = puVar3;
        uVar5 = uVar5 + 1;
        puVar3 = (undefined4 *)((int)puVar3 + param_3);
      }
    } while (uVar5 < param_4);
  }
  return iVar2;
}

