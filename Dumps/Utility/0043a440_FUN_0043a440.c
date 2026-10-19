// Address: 0x0043a440
// Name: FUN_0043a440
// Category: Utility


undefined4 __cdecl FUN_0043a440(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)param_1[6];
  pbVar4 = (byte *)*puVar2;
  iVar5 = puVar2[1];
  do {
    if (iVar5 == 0) {
      uVar3 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar3 == '\0') {
LAB_0043a50d:
        return uVar3 & 0xffffff00;
      }
      pbVar4 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    bVar1 = *pbVar4;
    while( true ) {
      pbVar4 = pbVar4 + 1;
      iVar5 = iVar5 + -1;
      if (bVar1 == 0xff) break;
      *(int *)(param_1[0x65] + 0x14) = *(int *)(param_1[0x65] + 0x14) + 1;
      *puVar2 = pbVar4;
      puVar2[1] = iVar5;
      if (iVar5 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_0043a50d;
        pbVar4 = (byte *)*puVar2;
        iVar5 = puVar2[1];
      }
      bVar1 = *pbVar4;
    }
    do {
      if (iVar5 == 0) {
        uVar3 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar3 == '\0') goto LAB_0043a50d;
        pbVar4 = (byte *)*puVar2;
        iVar5 = puVar2[1];
      }
      uVar3 = (uint)*pbVar4;
      iVar5 = iVar5 + -1;
      pbVar4 = pbVar4 + 1;
    } while (uVar3 == 0xff);
    if (uVar3 != 0) {
      if (*(int *)(param_1[0x65] + 0x14) != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x74;
        *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x65] + 0x14);
        *(uint *)(*param_1 + 0x1c) = uVar3;
        (**(code **)(*param_1 + 4))(param_1,0xffffffff);
        *(undefined4 *)(param_1[0x65] + 0x14) = 0;
      }
      param_1[0x5f] = uVar3;
      puVar2[1] = iVar5;
      *puVar2 = pbVar4;
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    *(int *)(param_1[0x65] + 0x14) = *(int *)(param_1[0x65] + 0x14) + 2;
    *puVar2 = pbVar4;
    puVar2[1] = iVar5;
  } while( true );
}

