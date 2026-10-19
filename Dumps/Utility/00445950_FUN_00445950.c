// Address: 0x00445950
// Name: FUN_00445950
// Category: Utility


byte __cdecl FUN_00445950(int param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  if (((param_1 == 0) || (param_2 == (byte *)0x0)) || (*(int *)(param_1 + 0x220) < 1)) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0x220);
  pbVar7 = (byte *)(iVar5 * 5 + -5 + *(int *)(param_1 + 0x224));
  do {
    if (iVar5 == 0) {
      return 0;
    }
    uVar1 = 4;
    pbVar3 = pbVar7;
    pbVar4 = param_2;
    do {
      if (*(int *)pbVar4 != *(int *)pbVar3) goto LAB_004459b8;
      uVar1 = uVar1 - 4;
      pbVar3 = pbVar3 + 4;
      pbVar4 = pbVar4 + 4;
    } while (3 < uVar1);
    if (uVar1 == 0) {
LAB_00445a15:
      iVar2 = 0;
    }
    else {
LAB_004459b8:
      iVar6 = (uint)*pbVar4 - (uint)*pbVar3;
      if (iVar6 == 0) {
        if (uVar1 == 1) goto LAB_00445a15;
        iVar6 = (uint)pbVar4[1] - (uint)pbVar3[1];
        if (iVar6 == 0) {
          if (uVar1 == 2) goto LAB_00445a15;
          iVar6 = (uint)pbVar4[2] - (uint)pbVar3[2];
          if (iVar6 == 0) {
            if ((uVar1 == 3) || (iVar6 = (uint)pbVar4[3] - (uint)pbVar3[3], iVar6 == 0))
            goto LAB_00445a15;
          }
        }
      }
      iVar2 = 1;
      if (iVar6 < 1) {
        iVar2 = -1;
      }
    }
    if (iVar2 == 0) {
      return pbVar7[4];
    }
    iVar5 = iVar5 + -1;
    pbVar7 = pbVar7 + -5;
  } while( true );
}

