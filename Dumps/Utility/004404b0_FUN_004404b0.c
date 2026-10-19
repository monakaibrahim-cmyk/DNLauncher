// Address: 0x004404b0
// Name: FUN_004404b0
// Category: Utility


void __cdecl
FUN_004404b0(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (*(int *)(param_1 + 0x114) <= *(int *)(iVar1 + 0x5c)) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar5 = iVar1 + 0xc;
      param_1 = *(int *)(param_1 + 0xc4);
      do {
        (**(code **)(iVar5 + 0x28))
                  (iVar2,param_1,
                   *(int *)(param_2 + iVar4 * 4) + *(int *)(iVar5 + 0x58) * *param_3 * 4,iVar5);
        param_1 = param_1 + 0x54;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < *(int *)(iVar2 + 0x24));
    }
    *(undefined4 *)(iVar1 + 0x5c) = 0;
  }
  uVar6 = *(int *)(iVar2 + 0x114) - *(int *)(iVar1 + 0x5c);
  if (*(uint *)(iVar1 + 0x60) < uVar6) {
    uVar6 = *(uint *)(iVar1 + 0x60);
  }
  uVar3 = param_7 - *param_6;
  if (uVar3 < uVar6) {
    uVar6 = uVar3;
  }
  (**(code **)(*(int *)(iVar2 + 0x1a4) + 4))
            (iVar2,iVar1 + 0xc,*(undefined4 *)(iVar1 + 0x5c),param_5 + *param_6 * 4,uVar6);
  *param_6 = *param_6 + uVar6;
  *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) - uVar6;
  *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + uVar6;
  if (*(int *)(iVar2 + 0x114) <= *(int *)(iVar1 + 0x5c)) {
    *param_3 = *param_3 + 1;
  }
  return;
}

