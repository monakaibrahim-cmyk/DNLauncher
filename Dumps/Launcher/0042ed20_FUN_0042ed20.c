// Address: 0x0042ed20
// Name: FUN_0042ed20
// Category: Launcher


void FUN_0042ed20(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int *unaff_EDI;
  
  iVar3 = unaff_EDI[3];
  if (0 < iVar3) {
    iVar5 = unaff_EDI[1];
    iVar8 = *unaff_EDI;
    pbVar6 = (byte *)unaff_EDI[2];
joined_r0x0042ed3b:
    pbVar4 = pbVar6;
    if (pbVar4 < param_1) {
      switch((uint)*pbVar4) {
      case 0:
        goto switchD_0042ed57_caseD_0;
      default:
        if (param_2 == 1) {
          iVar7 = *(int *)(&DAT_004ad360 + (uint)*pbVar4 * 4);
          if (iVar7 == 0) {
            iVar7 = 1;
          }
          pbVar6 = pbVar4 + iVar7;
        }
        else {
LAB_0042edfc:
          pbVar6 = pbVar4 + 1;
        }
        goto LAB_0042edff;
      case 9:
        iVar5 = (iVar5 / iVar3 + 1) * iVar3;
        pbVar6 = pbVar4 + 1;
        goto joined_r0x0042ed3b;
      case 10:
        iVar8 = iVar8 + 1;
        iVar5 = 0;
        pbVar6 = pbVar4 + 1;
        if (pbVar4[1] == 0xd) {
          pbVar6 = pbVar4 + 2;
        }
        goto joined_r0x0042ed3b;
      case 0xd:
        iVar8 = iVar8 + 1;
        iVar5 = 0;
        pbVar6 = pbVar4 + 1;
        if (pbVar4[1] == 10) {
          pbVar6 = pbVar4 + 2;
        }
        goto joined_r0x0042ed3b;
      case 0xef:
        goto switchD_0042ed57_caseD_ef;
      }
    }
    *unaff_EDI = iVar8;
    unaff_EDI[1] = iVar5;
    unaff_EDI[2] = (int)pbVar4;
switchD_0042ed57_caseD_0:
  }
  return;
switchD_0042ed57_caseD_ef:
  if (param_2 != 1) goto LAB_0042edfc;
  bVar1 = pbVar4[1];
  pbVar6 = pbVar4;
  if ((bVar1 != 0) && (bVar2 = pbVar4[2], bVar2 != 0)) {
    if ((bVar1 == 0xbb) && (bVar2 == 0xbf)) {
      pbVar6 = pbVar4 + 3;
      goto joined_r0x0042ed3b;
    }
    if (bVar1 == 0xbf) {
      if (bVar2 == 0xbe) {
        pbVar6 = pbVar4 + 3;
        goto joined_r0x0042ed3b;
      }
      if (bVar2 == 0xbf) {
        pbVar6 = pbVar4 + 3;
        goto joined_r0x0042ed3b;
      }
    }
    pbVar6 = pbVar4 + 3;
LAB_0042edff:
    iVar5 = iVar5 + 1;
  }
  goto joined_r0x0042ed3b;
}

