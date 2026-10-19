// Address: 0x0044b3f0
// Name: FUN_0044b3f0
// Category: Utility


void __cdecl FUN_0044b3f0(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  uVar5 = *param_1;
  if ((char)param_1[2] == '\x03') {
    bVar2 = *(byte *)((int)param_1 + 9);
    if (bVar2 < 8) {
      if (bVar2 == 1) {
        pbVar6 = (byte *)((uVar5 - 1 >> 3) + param_2);
        iVar3 = 7 - (uVar5 - 1 & 7);
        pbVar7 = (byte *)((uVar5 - 1) + param_2);
        for (uVar1 = uVar5; uVar1 != 0; uVar1 = uVar1 - 1) {
          *pbVar7 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 1;
          if (iVar3 == 7) {
            iVar3 = 0;
            pbVar6 = pbVar6 + -1;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          pbVar7 = pbVar7 + -1;
        }
      }
      else if (bVar2 == 2) {
        pbVar6 = (byte *)((uVar5 - 1 >> 2) + param_2);
        iVar3 = (3 - (uVar5 - 1 & 3)) * 2;
        pbVar7 = (byte *)((uVar5 - 1) + param_2);
        for (uVar1 = uVar5; uVar1 != 0; uVar1 = uVar1 - 1) {
          *pbVar7 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 3;
          if (iVar3 == 6) {
            iVar3 = 0;
            pbVar6 = pbVar6 + -1;
          }
          else {
            iVar3 = iVar3 + 2;
          }
          pbVar7 = pbVar7 + -1;
        }
      }
      else if (bVar2 == 4) {
        pbVar6 = (byte *)((uVar5 - 1 >> 1) + param_2);
        iVar3 = (uVar5 & 1) * 4;
        pbVar7 = (byte *)((uVar5 - 1) + param_2);
        for (uVar1 = uVar5; uVar1 != 0; uVar1 = uVar1 - 1) {
          *pbVar7 = *pbVar6 >> ((byte)iVar3 & 0x1f) & 0xf;
          if (iVar3 == 4) {
            iVar3 = 0;
            pbVar6 = pbVar6 + -1;
          }
          else {
            iVar3 = iVar3 + 4;
          }
          pbVar7 = pbVar7 + -1;
        }
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
      param_1[1] = uVar5;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar7 = (byte *)((uVar5 - 1) + param_2);
      if (param_4 != 0) {
        uVar1 = uVar5 * 4;
        puVar4 = (undefined1 *)((uVar1 - 1) + param_2);
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          if ((int)(uint)*pbVar7 < param_5) {
            *puVar4 = *(undefined1 *)((uint)*pbVar7 + param_4);
          }
          else {
            *puVar4 = 0xff;
          }
          puVar4[-1] = *(undefined1 *)((uint)*pbVar7 * 3 + 2 + param_3);
          puVar4[-2] = *(undefined1 *)((uint)*pbVar7 * 3 + 1 + param_3);
          puVar4[-3] = *(undefined1 *)(param_3 + (uint)*pbVar7 * 3);
          puVar4 = puVar4 + -4;
          pbVar7 = pbVar7 + -1;
        }
        param_1[1] = uVar1;
        *(undefined1 *)((int)param_1 + 0xb) = 0x20;
        *(undefined1 *)(param_1 + 2) = 6;
        *(undefined1 *)((int)param_1 + 10) = 4;
        *(undefined1 *)((int)param_1 + 9) = 8;
        return;
      }
      uVar1 = uVar5 * 3;
      puVar4 = (undefined1 *)((uVar1 - 1) + param_2);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = *(undefined1 *)((uint)*pbVar7 * 3 + 2 + param_3);
        puVar4[-1] = *(undefined1 *)((uint)*pbVar7 * 3 + 1 + param_3);
        puVar4[-2] = *(undefined1 *)(param_3 + (uint)*pbVar7 * 3);
        puVar4 = puVar4 + -3;
        pbVar7 = pbVar7 + -1;
      }
      *(undefined1 *)((int)param_1 + 0xb) = 0x18;
      *(undefined1 *)(param_1 + 2) = 2;
      *(undefined1 *)((int)param_1 + 10) = 3;
      param_1[1] = uVar1;
      *(undefined1 *)((int)param_1 + 9) = 8;
    }
  }
  return;
}

