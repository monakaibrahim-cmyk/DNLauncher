// Address: 0x0042d820
// Name: FUN_0042d820
// Category: Launcher


int FUN_0042d820(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_ESI;
  bool bVar6;
  
  iVar2 = *(int *)(in_EAX + 0x40);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    pbVar5 = unaff_ESI;
    if (*(uint *)(iVar2 + 0x38) < 0x10) {
      pbVar3 = (byte *)(iVar2 + 0x24);
    }
    else {
      pbVar3 = *(byte **)(iVar2 + 0x24);
    }
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0042d858:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0042d85d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0042d858;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0042d85d:
    if (iVar4 == 0) {
      return iVar2;
    }
    iVar2 = *(int *)(iVar2 + 0x40);
  } while( true );
}

