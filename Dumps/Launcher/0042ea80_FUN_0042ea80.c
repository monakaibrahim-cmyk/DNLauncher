// Address: 0x0042ea80
// Name: FUN_0042ea80
// Category: Launcher


int FUN_0042ea80(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_ESI;
  int unaff_EDI;
  bool bVar6;
  
  iVar2 = *(int *)(unaff_EDI + 0x50);
  do {
    if (iVar2 == unaff_EDI) {
      return 0;
    }
    pbVar5 = unaff_ESI;
    if (*(uint *)(iVar2 + 0x2c) < 0x10) {
      pbVar3 = (byte *)(iVar2 + 0x18);
    }
    else {
      pbVar3 = *(byte **)(iVar2 + 0x18);
    }
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0042eab8:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0042eabd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0042eab8;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0042eabd:
    if (iVar4 == 0) {
      return iVar2;
    }
    iVar2 = *(int *)(iVar2 + 0x50);
  } while( true );
}

