// Address: 0x0043a390
// Name: FUN_0043a390
// Category: Utility


uint __cdecl FUN_0043a390(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  puVar3 = (undefined4 *)param_1[6];
  iVar7 = puVar3[1];
  pbVar6 = (byte *)*puVar3;
  if (iVar7 == 0) {
    uVar4 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar4 == '\0') goto LAB_0043a3b1;
    pbVar6 = (byte *)*puVar3;
    iVar7 = puVar3[1];
  }
  bVar1 = *pbVar6;
  iVar7 = iVar7 + -1;
  pbVar6 = pbVar6 + 1;
  if (iVar7 == 0) {
    uVar4 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar4 == '\0') {
LAB_0043a3b1:
      return uVar4 & 0xffffff00;
    }
    pbVar6 = (byte *)*puVar3;
    iVar7 = puVar3[1];
  }
  bVar2 = *pbVar6;
  *(undefined4 *)(*param_1 + 0x14) = 0x5b;
  iVar5 = (uint)bVar1 * 0x100 + -2 + (uint)bVar2;
  *(int *)(*param_1 + 0x18) = param_1[0x5f];
  *(int *)(*param_1 + 0x1c) = iVar5;
  (**(code **)(*param_1 + 4))(param_1,1);
  *puVar3 = pbVar6 + 1;
  puVar3[1] = iVar7 + -1;
  if (0 < iVar5) {
    iVar5 = (**(code **)(param_1[6] + 0x10))(param_1,iVar5);
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}

