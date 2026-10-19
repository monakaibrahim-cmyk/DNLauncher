// Address: 0x00449770
// Name: FUN_00449770
// Category: Utility


void __cdecl FUN_00449770(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  bVar3 = *(byte *)((int)param_1 + 9);
  iVar2 = *param_1;
  if ((7 < bVar3) && (bVar1 = *(byte *)(param_1 + 2), (bVar1 & 2) == 0)) {
    if (bVar1 == 0) {
      if (bVar3 == 8) {
        puVar5 = (undefined1 *)(iVar2 + -1 + param_2);
        puVar4 = puVar5 + iVar2 * 2;
        for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = *puVar5;
          puVar4[-2] = *puVar5;
          puVar4 = puVar4 + -3;
          puVar5 = puVar5 + -1;
        }
      }
      else {
        puVar5 = (undefined1 *)(param_2 + -1 + iVar2 * 2);
        puVar4 = puVar5 + iVar2 * 4;
        for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = puVar5[-1];
          puVar4[-2] = *puVar5;
          puVar4[-3] = puVar5[-1];
          puVar4[-4] = *puVar5;
          puVar4[-5] = puVar5[-1];
          puVar4 = puVar4 + -6;
          puVar5 = puVar5 + -2;
        }
      }
    }
    else if (bVar1 == 4) {
      if (bVar3 == 8) {
        puVar5 = (undefined1 *)(param_2 + -1 + iVar2 * 2);
        puVar4 = puVar5 + iVar2 * 2;
        for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = puVar5[-1];
          puVar4[-2] = puVar5[-1];
          puVar4[-3] = puVar5[-1];
          puVar4 = puVar4 + -4;
          puVar5 = puVar5 + -2;
        }
      }
      else {
        puVar5 = (undefined1 *)(param_2 + -1 + iVar2 * 4);
        puVar4 = puVar5 + iVar2 * 4;
        for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = *puVar5;
          puVar4[-1] = puVar5[-1];
          puVar4[-2] = puVar5[-2];
          puVar4[-3] = puVar5[-3];
          puVar4[-4] = puVar5[-2];
          puVar4[-5] = puVar5[-3];
          puVar4[-6] = puVar5[-2];
          puVar4[-7] = puVar5[-3];
          puVar4 = puVar4 + -8;
          puVar5 = puVar5 + -4;
        }
      }
    }
    *(char *)((int)param_1 + 10) = *(char *)((int)param_1 + 10) + '\x02';
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
    bVar3 = *(char *)((int)param_1 + 9) * *(char *)((int)param_1 + 10);
    *(byte *)((int)param_1 + 0xb) = bVar3;
    if (7 < bVar3) {
      param_1[1] = (uint)(bVar3 >> 3) * iVar2;
      return;
    }
    param_1[1] = (uint)bVar3 * iVar2 + 7 >> 3;
  }
  return;
}

