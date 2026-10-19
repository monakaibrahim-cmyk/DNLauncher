// Address: 0x0042ea00
// Name: FUN_0042ea00
// Category: Launcher


int FUN_0042ea00(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x50);
  if (iVar6 != param_1) {
    uVar1 = *(uint *)(param_2 + 0x14);
    do {
      if (*(uint *)(param_2 + 0x18) < 0x10) {
        pbVar4 = (byte *)(param_2 + 4);
      }
      else {
        pbVar4 = *(byte **)(param_2 + 4);
      }
      uVar2 = *(uint *)(iVar6 + 0x28);
      if (*(uint *)(iVar6 + 0x2c) < 0x10) {
        pbVar5 = (byte *)(iVar6 + 0x18);
      }
      else {
        pbVar5 = *(byte **)(iVar6 + 0x18);
      }
      iVar3 = FUN_00425a70(pbVar4,pbVar5);
      if (((iVar3 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) {
        return iVar6;
      }
      iVar6 = *(int *)(iVar6 + 0x50);
    } while (iVar6 != param_1);
  }
  return 0;
}

