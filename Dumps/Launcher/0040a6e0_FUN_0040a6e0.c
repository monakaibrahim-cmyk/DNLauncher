// Address: 0x0040a6e0
// Name: FUN_0040a6e0
// Category: Launcher


/* WARNING: Removing unreachable block (ram,0x0040a712) */
/* WARNING: Removing unreachable block (ram,0x0040a765) */

void FUN_0040a6e0(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0x10) < uVar2) {
    FUN_00475b26();
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 < *(uint *)(param_1 + 0xc)) {
    FUN_00475b26();
  }
  if (uVar2 == uVar3) {
    return;
  }
  if (*(uint *)(param_1 + 0x10) <= uVar2) {
    FUN_00475b26();
  }
  puVar8 = *(undefined4 **)(uVar2 + 8);
  if (*(undefined4 **)(uVar2 + 0xc) < puVar8) {
    FUN_00475b26();
  }
  do {
    if (*(uint *)(param_1 + 0x10) <= uVar2) {
      FUN_00475b26();
    }
    puVar4 = *(undefined4 **)(uVar2 + 0xc);
    if (puVar4 < *(undefined4 **)(uVar2 + 8)) {
      FUN_00475b26();
    }
    if (puVar8 == puVar4) {
      return;
    }
    if (*(undefined4 **)(uVar2 + 0xc) <= puVar8) {
      FUN_00475b26();
    }
    puVar7 = *(ushort **)(param_1 + 0x78);
    if (puVar7 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x80004005);
    }
    puVar5 = (ushort *)puVar8[2];
    do {
      uVar1 = *puVar5;
      bVar9 = uVar1 < *puVar7;
      if (uVar1 != *puVar7) {
LAB_0040a7ab:
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0040a7b0;
      }
      if (uVar1 == 0) break;
      uVar1 = puVar5[1];
      bVar9 = uVar1 < puVar7[1];
      if (uVar1 != puVar7[1]) goto LAB_0040a7ab;
      puVar5 = puVar5 + 2;
      puVar7 = puVar7 + 2;
    } while (uVar1 != 0);
    iVar6 = 0;
LAB_0040a7b0:
    if (iVar6 == 0) {
      if (*(undefined4 **)(uVar2 + 0xc) <= puVar8) {
        FUN_00475b26();
      }
      FID_conflict_operator_((void *)(param_1 + 0x28),puVar8);
      return;
    }
    if (*(undefined4 **)(uVar2 + 0xc) <= puVar8) {
      FUN_00475b26();
    }
    puVar8 = puVar8 + 0xc;
  } while( true );
}

