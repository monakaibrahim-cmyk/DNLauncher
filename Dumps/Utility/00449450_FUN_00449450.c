// Address: 0x00449450
// Name: FUN_00449450
// Category: Utility


void __cdecl FUN_00449450(uint *param_1,int param_2,uint param_3,byte param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  byte bVar7;
  uint *puVar8;
  undefined1 *puVar9;
  int iVar10;
  
  puVar3 = param_1;
  puVar8 = param_1 + 2;
  puVar2 = (undefined1 *)*param_1;
  bVar7 = (byte)(param_3 >> 8);
  param_1 = (uint *)(uint)bVar7;
  uVar6 = (undefined1)param_3;
  if ((char)*puVar8 == '\0') {
    if (*(char *)((int)puVar3 + 9) == '\b') {
      puVar9 = puVar2 + param_2;
      puVar4 = puVar9 + (int)puVar2;
      puVar5 = puVar2;
      if ((param_4 & 0x80) == 0) {
        for (; puVar5 != (undefined1 *)0x0; puVar5 = puVar5 + -1) {
          puVar1 = puVar9 + -1;
          puVar9 = puVar9 + -1;
          puVar4[-1] = *puVar1;
          puVar4 = puVar4 + -2;
          *puVar4 = uVar6;
        }
        *(undefined1 *)((int)puVar3 + 10) = 2;
        *(undefined1 *)((int)puVar3 + 0xb) = 0x10;
        puVar3[1] = (int)puVar2 * 2;
        return;
      }
      if (&DAT_00000001 < puVar2) {
        puVar5 = puVar2 + -1;
        do {
          puVar4[-1] = uVar6;
          puVar1 = puVar9 + -1;
          puVar9 = puVar9 + -1;
          puVar4 = puVar4 + -2;
          puVar5 = puVar5 + -1;
          *puVar4 = *puVar1;
        } while (puVar5 != (undefined1 *)0x0);
      }
      puVar4[-1] = uVar6;
      *(undefined1 *)((int)puVar3 + 10) = 2;
      *(undefined1 *)((int)puVar3 + 0xb) = 0x10;
      puVar3[1] = (int)puVar2 * 2;
      return;
    }
    if (*(char *)((int)puVar3 + 9) == '\x10') {
      iVar10 = param_2 + (int)puVar2 * 2;
      puVar9 = (undefined1 *)(iVar10 + (int)puVar2 * 2);
      puVar4 = puVar2;
      if ((param_4 & 0x80) == 0) {
        for (; puVar4 != (undefined1 *)0x0; puVar4 = puVar4 + -1) {
          puVar9[-1] = *(undefined1 *)(iVar10 + -1);
          puVar5 = (undefined1 *)(iVar10 + -2);
          iVar10 = iVar10 + -2;
          puVar9[-2] = *puVar5;
          puVar9[-3] = bVar7;
          puVar9 = puVar9 + -4;
          *puVar9 = uVar6;
        }
        *(undefined1 *)((int)puVar3 + 10) = 2;
        *(undefined1 *)((int)puVar3 + 0xb) = 0x20;
        puVar3[1] = (int)puVar2 * 4;
        return;
      }
      if (&DAT_00000001 < puVar2) {
        param_1 = (uint *)(puVar2 + -1);
        do {
          puVar9[-1] = bVar7;
          puVar9[-2] = uVar6;
          puVar9[-3] = *(undefined1 *)(iVar10 + -1);
          puVar4 = (undefined1 *)(iVar10 + -2);
          iVar10 = iVar10 + -2;
          puVar9 = puVar9 + -4;
          param_1 = (uint *)((int)param_1 + -1);
          *puVar9 = *puVar4;
        } while (param_1 != (uint *)0x0);
      }
      puVar9[-1] = bVar7;
      puVar9[-2] = uVar6;
      *(undefined1 *)((int)puVar3 + 10) = 2;
      *(undefined1 *)((int)puVar3 + 0xb) = 0x20;
      puVar3[1] = (int)puVar2 * 4;
      return;
    }
  }
  else if ((char)*puVar8 == '\x02') {
    if (*(char *)((int)puVar3 + 9) == '\b') {
      iVar10 = param_2 + (int)puVar2 * 3;
      puVar9 = puVar2 + iVar10;
      puVar4 = puVar2;
      if ((param_4 & 0x80) == 0) {
        for (; puVar4 != (undefined1 *)0x0; puVar4 = puVar4 + -1) {
          puVar9[-1] = *(undefined1 *)(iVar10 + -1);
          puVar9[-2] = *(undefined1 *)(iVar10 + -2);
          puVar5 = (undefined1 *)(iVar10 + -3);
          iVar10 = iVar10 + -3;
          puVar9[-3] = *puVar5;
          puVar9 = puVar9 + -4;
          *puVar9 = uVar6;
        }
      }
      else {
        if (&DAT_00000001 < puVar2) {
          puVar4 = puVar2 + -1;
          do {
            puVar9[-1] = uVar6;
            puVar9[-2] = *(undefined1 *)(iVar10 + -1);
            puVar9[-3] = *(undefined1 *)(iVar10 + -2);
            puVar5 = (undefined1 *)(iVar10 + -3);
            iVar10 = iVar10 + -3;
            puVar9 = puVar9 + -4;
            puVar4 = puVar4 + -1;
            *puVar9 = *puVar5;
          } while (puVar4 != (undefined1 *)0x0);
        }
        puVar9[-1] = uVar6;
      }
      *(undefined1 *)((int)puVar3 + 10) = 4;
      *(undefined1 *)((int)puVar3 + 0xb) = 0x20;
      puVar3[1] = (int)puVar2 * 4;
      return;
    }
    if (*(char *)((int)puVar3 + 9) == '\x10') {
      iVar10 = param_2 + (int)puVar2 * 6;
      puVar9 = (undefined1 *)(iVar10 + (int)puVar2 * 2);
      puVar4 = puVar2;
      if ((param_4 & 0x80) == 0) {
        for (; puVar4 != (undefined1 *)0x0; puVar4 = puVar4 + -1) {
          puVar9[-1] = *(undefined1 *)(iVar10 + -1);
          puVar9[-2] = *(undefined1 *)(iVar10 + -2);
          puVar9[-3] = *(undefined1 *)(iVar10 + -3);
          puVar9[-4] = *(undefined1 *)(iVar10 + -4);
          puVar9[-5] = *(undefined1 *)(iVar10 + -5);
          puVar5 = (undefined1 *)(iVar10 + -6);
          iVar10 = iVar10 + -6;
          puVar9[-6] = *puVar5;
          puVar9[-7] = bVar7;
          puVar9 = puVar9 + -8;
          *puVar9 = uVar6;
        }
      }
      else {
        if (&DAT_00000001 < puVar2) {
          puVar4 = puVar2 + -1;
          puVar8 = (uint *)(param_3 >> 8);
          do {
            puVar9[-1] = (char)puVar8;
            puVar9[-2] = uVar6;
            puVar9[-3] = *(undefined1 *)(iVar10 + -1);
            puVar9[-4] = *(undefined1 *)(iVar10 + -2);
            puVar9[-5] = *(undefined1 *)(iVar10 + -3);
            puVar9[-6] = *(undefined1 *)(iVar10 + -4);
            puVar9[-7] = *(undefined1 *)(iVar10 + -5);
            puVar5 = (undefined1 *)(iVar10 + -6);
            iVar10 = iVar10 + -6;
            puVar9 = puVar9 + -8;
            puVar4 = puVar4 + -1;
            *puVar9 = *puVar5;
            puVar8 = param_1;
          } while (puVar4 != (undefined1 *)0x0);
        }
        puVar9[-1] = bVar7;
        puVar9[-2] = uVar6;
      }
      *(undefined1 *)((int)puVar3 + 0xb) = 0x40;
      *(undefined1 *)((int)puVar3 + 10) = 4;
      puVar3[1] = (int)puVar2 * 8;
    }
  }
  return;
}

