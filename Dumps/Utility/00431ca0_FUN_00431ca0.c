// Address: 0x00431ca0
// Name: FUN_00431ca0
// Category: Utility


uint FUN_00431ca0(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *unaff_EDI;
  
  if ((unaff_EDI == (int *)0x0) ||
     (puVar2 = (undefined4 *)unaff_EDI[7], puVar2 == (undefined4 *)0x0)) {
    return 0xfffffffe;
  }
  if ((unaff_EDI[3] == 0) || ((*unaff_EDI == 0 && (unaff_EDI[1] != 0)))) {
    unaff_EDI[6] = (int)"stream error";
    return 0xfffffffe;
  }
  if (unaff_EDI[4] == 0) {
    unaff_EDI[6] = (int)"buffer error";
    return 0xfffffffb;
  }
  *puVar2 = unaff_EDI;
  puVar2[10] = 4;
  if (puVar2[1] == 0x2a) {
    if (puVar2[6] == 2) {
      uVar6 = FUN_004265e0(0,(uint *)0x0,0);
      unaff_EDI[0xc] = uVar6;
      *(undefined1 *)(puVar2[2] + puVar2[5]) = 0x1f;
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = 0x8b;
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = 8;
      puVar2[5] = puVar2[5] + 1;
      piVar3 = (int *)puVar2[7];
      if (piVar3 == (int *)0x0) {
        *(undefined1 *)(puVar2[2] + puVar2[5]) = 0;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0;
        puVar2[5] = puVar2[5] + 1;
        if (puVar2[0x21] == 9) {
          uVar5 = 2;
        }
        else if (((int)puVar2[0x22] < 2) && (1 < (int)puVar2[0x21])) {
          uVar5 = 0;
        }
        else {
          uVar5 = 4;
        }
        *(undefined1 *)(puVar2[5] + puVar2[2]) = uVar5;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = 0xb;
        puVar2[5] = puVar2[5] + 1;
        puVar2[1] = 0x71;
      }
      else {
        *(byte *)(puVar2[2] + puVar2[5]) =
             (-(piVar3[9] != 0) & 0x10U) + (-(piVar3[0xb] != 0) & 2U) + (-(piVar3[7] != 0) & 8U) +
             (-(piVar3[4] != 0) & 4U) + (*piVar3 != 0);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 4);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 5);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 6);
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 7);
        puVar2[5] = puVar2[5] + 1;
        if (puVar2[0x21] == 9) {
          uVar5 = 2;
        }
        else if (((int)puVar2[0x22] < 2) && (1 < (int)puVar2[0x21])) {
          uVar5 = 0;
        }
        else {
          uVar5 = 4;
        }
        *(undefined1 *)(puVar2[5] + puVar2[2]) = uVar5;
        puVar2[5] = puVar2[5] + 1;
        *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 0xc);
        puVar2[5] = puVar2[5] + 1;
        uVar6 = puVar2[5];
        if (*(int *)(puVar2[7] + 0x10) != 0) {
          *(undefined1 *)(uVar6 + puVar2[2]) = *(undefined1 *)(puVar2[7] + 0x14);
          puVar2[5] = puVar2[5] + 1;
          *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)(puVar2[7] + 0x15);
          puVar2[5] = puVar2[5] + 1;
          uVar6 = puVar2[5];
        }
        if (*(int *)(puVar2[7] + 0x2c) != 0) {
          uVar6 = FUN_004265e0(unaff_EDI[0xc],(uint *)puVar2[2],uVar6);
          unaff_EDI[0xc] = uVar6;
        }
        puVar2[8] = 0;
        puVar2[1] = 0x45;
      }
    }
    else {
      if (((int)puVar2[0x22] < 2) && (iVar8 = puVar2[0x21], 1 < iVar8)) {
        if (iVar8 < 6) {
          iVar8 = 1;
        }
        else {
          iVar8 = (iVar8 != 6) + 2;
        }
      }
      else {
        iVar8 = 0;
      }
      uVar6 = (puVar2[0xc] + -8) * 0x1000 + 0x800U | iVar8 << 6;
      if (puVar2[0x1b] != 0) {
        uVar6 = uVar6 | 0x20;
      }
      puVar2[1] = 0x71;
      FUN_00431c20((uVar6 / 0x1f + 1) * 0x1f);
      if (puVar2[0x1b] != 0) {
        FUN_00431c20((uint)*(ushort *)((int)unaff_EDI + 0x32));
        FUN_00431c20((uint)*(ushort *)(unaff_EDI + 0xc));
      }
      uVar6 = FUN_00428100(0,(byte *)0x0);
      unaff_EDI[0xc] = uVar6;
    }
  }
  if (puVar2[1] == 0x45) {
    if (*(int *)(puVar2[7] + 0x10) != 0) {
      uVar6 = puVar2[5];
      if ((uint)puVar2[8] < (uint)*(ushort *)(puVar2[7] + 0x14)) {
        do {
          uVar7 = puVar2[5];
          if (uVar7 == puVar2[3]) {
            if ((*(int *)(puVar2[7] + 0x2c) != 0) && (uVar6 < uVar7)) {
              uVar6 = FUN_004265e0(unaff_EDI[0xc],(uint *)(puVar2[2] + uVar6),uVar7 - uVar6);
              unaff_EDI[0xc] = uVar6;
            }
            FUN_00431c50();
            uVar7 = puVar2[5];
            uVar6 = uVar7;
            if (uVar7 == puVar2[3]) break;
          }
          *(undefined1 *)(uVar7 + puVar2[2]) =
               *(undefined1 *)(*(int *)(puVar2[7] + 0x10) + puVar2[8]);
          puVar2[5] = puVar2[5] + 1;
          puVar2[8] = puVar2[8] + 1;
        } while ((uint)puVar2[8] < (uint)*(ushort *)(puVar2[7] + 0x14));
      }
      if ((*(int *)(puVar2[7] + 0x2c) != 0) && (uVar6 < (uint)puVar2[5])) {
        uVar6 = FUN_004265e0(unaff_EDI[0xc],(uint *)(puVar2[2] + uVar6),puVar2[5] - uVar6);
        unaff_EDI[0xc] = uVar6;
      }
      if (puVar2[8] != *(int *)(puVar2[7] + 0x14)) goto LAB_00432068;
      puVar2[8] = 0;
    }
    puVar2[1] = 0x49;
  }
LAB_00432068:
  if (puVar2[1] == 0x49) {
    if (*(int *)(puVar2[7] + 0x1c) != 0) {
      uVar6 = puVar2[5];
      do {
        uVar7 = puVar2[5];
        if (uVar7 == puVar2[3]) {
          if ((*(int *)(puVar2[7] + 0x2c) != 0) && (uVar6 < uVar7)) {
            uVar6 = FUN_004265e0(unaff_EDI[0xc],(uint *)(puVar2[2] + uVar6),uVar7 - uVar6);
            unaff_EDI[0xc] = uVar6;
          }
          FUN_00431c50();
          uVar7 = puVar2[5];
          uVar6 = uVar7;
          if (uVar7 == puVar2[3]) {
            bVar4 = true;
            goto LAB_004320e8;
          }
        }
        cVar1 = *(char *)(*(int *)(puVar2[7] + 0x1c) + puVar2[8]);
        puVar2[8] = puVar2[8] + 1;
        *(char *)(uVar7 + puVar2[2]) = cVar1;
        puVar2[5] = puVar2[5] + 1;
      } while (cVar1 != '\0');
      bVar4 = false;
      uVar7 = uVar6;
LAB_004320e8:
      if ((*(int *)(puVar2[7] + 0x2c) != 0) && (uVar7 < (uint)puVar2[5])) {
        uVar6 = FUN_004265e0(unaff_EDI[0xc],(uint *)(puVar2[2] + uVar7),puVar2[5] - uVar7);
        unaff_EDI[0xc] = uVar6;
      }
      if (bVar4) goto LAB_0043211e;
      puVar2[8] = 0;
    }
    puVar2[1] = 0x5b;
  }
LAB_0043211e:
  if (puVar2[1] == 0x5b) {
    if (*(int *)(puVar2[7] + 0x24) != 0) {
      uVar6 = puVar2[5];
      do {
        uVar7 = puVar2[5];
        if (uVar7 == puVar2[3]) {
          if ((*(int *)(puVar2[7] + 0x2c) != 0) && (uVar6 < uVar7)) {
            uVar6 = FUN_004265e0(unaff_EDI[0xc],(uint *)(puVar2[2] + uVar6),uVar7 - uVar6);
            unaff_EDI[0xc] = uVar6;
          }
          FUN_00431c50();
          uVar7 = puVar2[5];
          uVar6 = uVar7;
          if (uVar7 == puVar2[3]) {
            bVar4 = true;
            goto LAB_0043219a;
          }
        }
        cVar1 = *(char *)(*(int *)(puVar2[7] + 0x24) + puVar2[8]);
        puVar2[8] = puVar2[8] + 1;
        *(char *)(uVar7 + puVar2[2]) = cVar1;
        puVar2[5] = puVar2[5] + 1;
      } while (cVar1 != '\0');
      bVar4 = false;
      uVar7 = uVar6;
LAB_0043219a:
      if ((*(int *)(puVar2[7] + 0x2c) != 0) && (uVar7 < (uint)puVar2[5])) {
        uVar6 = FUN_004265e0(unaff_EDI[0xc],(uint *)(puVar2[2] + uVar7),puVar2[5] - uVar7);
        unaff_EDI[0xc] = uVar6;
      }
      if (bVar4) goto LAB_004321cd;
    }
    puVar2[1] = 0x67;
  }
LAB_004321cd:
  if (puVar2[1] == 0x67) {
    if (*(int *)(puVar2[7] + 0x2c) != 0) {
      if ((uint)puVar2[3] < puVar2[5] + 2) {
        FUN_00431c50();
      }
      if ((uint)puVar2[3] < puVar2[5] + 2) goto LAB_0043222e;
      *(char *)(puVar2[5] + puVar2[2]) = (char)unaff_EDI[0xc];
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 0x31);
      puVar2[5] = puVar2[5] + 1;
      uVar6 = FUN_004265e0(0,(uint *)0x0,0);
      unaff_EDI[0xc] = uVar6;
    }
    puVar2[1] = 0x71;
  }
LAB_0043222e:
  if ((puVar2[5] != 0) && (FUN_00431c50(), unaff_EDI[4] == 0)) goto LAB_004323a8;
  if (puVar2[1] == 0x29a) {
    if (unaff_EDI[1] != 0) {
      unaff_EDI[6] = (int)"buffer error";
      return 0xfffffffb;
    }
LAB_0043226b:
    if ((puVar2[0x1d] == 0) && (puVar2[1] == 0x29a)) goto LAB_004322d7;
  }
  else if (unaff_EDI[1] == 0) goto LAB_0043226b;
  iVar8 = (*(code *)(&PTR_LAB_004ad2e8)[puVar2[0x21] * 3])(puVar2,4);
  if ((iVar8 == 2) || (iVar8 == 3)) {
    puVar2[1] = 0x29a;
  }
  if ((iVar8 != 0) && (iVar8 != 2)) {
    if (iVar8 == 1) {
      FUN_00434090((void *)0x0,(undefined1 *)0x0,0);
      FUN_00431c50();
      if (unaff_EDI[4] == 0) goto LAB_004323a8;
    }
LAB_004322d7:
    if ((int)puVar2[6] < 1) {
      return 1;
    }
    if (puVar2[6] == 2) {
      *(char *)(puVar2[2] + puVar2[5]) = (char)unaff_EDI[0xc];
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 0x31);
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 0x32);
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 0x33);
      puVar2[5] = puVar2[5] + 1;
      *(char *)(puVar2[5] + puVar2[2]) = (char)unaff_EDI[2];
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 9);
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 10);
      puVar2[5] = puVar2[5] + 1;
      *(undefined1 *)(puVar2[5] + puVar2[2]) = *(undefined1 *)((int)unaff_EDI + 0xb);
      puVar2[5] = puVar2[5] + 1;
    }
    else {
      FUN_00431c20((uint)*(ushort *)((int)unaff_EDI + 0x32));
      FUN_00431c20((uint)*(ushort *)(unaff_EDI + 0xc));
    }
    FUN_00431c50();
    if (0 < (int)puVar2[6]) {
      puVar2[6] = -puVar2[6];
    }
    return (uint)(puVar2[5] == 0);
  }
  if (unaff_EDI[4] != 0) {
    return 0;
  }
LAB_004323a8:
  puVar2[10] = 0xffffffff;
  return 0;
}

