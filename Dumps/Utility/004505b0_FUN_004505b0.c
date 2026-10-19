// Address: 0x004505b0
// Name: FUN_004505b0
// Category: Utility


void __cdecl FUN_004505b0(int *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  void *pvVar10;
  uint *puVar11;
  uint *puVar12;
  char *pcVar13;
  
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00445110(param_1,"Missing IHDR before pCAL");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004451d0((int)param_1,"Invalid pCAL after IDAT");
      FUN_0044eb90(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x400) != 0)) {
      FUN_004451d0((int)param_1,"Duplicate pCAL chunk");
      FUN_0044eb90(param_1,param_3);
      return;
    }
  }
  puVar5 = FUN_0044d9e0(param_1,param_3 + 1);
  if (puVar5 == (uint *)0x0) {
    FUN_004451d0((int)param_1,"No memory for pCAL purpose.");
    return;
  }
  FUN_0044da60(param_1,puVar5,param_3);
  iVar6 = FUN_0044eb90(param_1,0);
  if (iVar6 != 0) {
    FUN_0044d9b0((int)param_1,puVar5);
    return;
  }
  puVar1 = (uint *)((int)puVar5 + param_3);
  *(char *)puVar1 = '\0';
  cVar2 = (char)*puVar5;
  puVar11 = puVar5;
  while (cVar2 != '\0') {
    puVar11 = (uint *)((int)puVar11 + 1);
    cVar2 = *(char *)puVar11;
  }
  if (puVar11 + 3 < puVar1) {
    uVar7 = FUN_0044da10((char *)((int)puVar11 + 1));
    uVar8 = FUN_0044da10((char *)((int)puVar11 + 5));
    bVar3 = *(byte *)((int)puVar11 + 10);
    bVar4 = *(byte *)((int)puVar11 + 9);
    puVar11 = (uint *)((int)puVar11 + 0xb);
    if (bVar4 == 0) {
      if (bVar3 == 2) goto LAB_00450729;
    }
    else if ((bVar4 == 1) || (bVar4 == 2)) {
      if (bVar3 == 3) goto LAB_00450729;
    }
    else {
      if (bVar4 != 3) {
        if (3 < bVar4) {
          FUN_004451d0((int)param_1,"Unrecognized equation type for pCAL chunk");
        }
LAB_00450729:
        cVar2 = *(char *)puVar11;
        puVar12 = puVar11;
        while (cVar2 != '\0') {
          puVar12 = (uint *)((int)puVar12 + 1);
          cVar2 = *(char *)puVar12;
        }
        uVar9 = (uint)bVar3;
        pvVar10 = FUN_0044d9e0(param_1,uVar9 * 4);
        if (pvVar10 == (void *)0x0) {
          FUN_0044d9b0((int)param_1,puVar5);
          FUN_004451d0((int)param_1,"No memory for pCAL params.");
          return;
        }
        iVar6 = 0;
        if (uVar9 != 0) {
          do {
            puVar12 = (uint *)((int)puVar12 + 1);
            *(uint **)((int)pvVar10 + iVar6 * 4) = puVar12;
            while( true ) {
              if (puVar1 < puVar12) goto LAB_0045079c;
              if ((char)*puVar12 == '\0') break;
              puVar12 = (uint *)((int)puVar12 + 1);
            }
            if (puVar1 < puVar12) {
LAB_0045079c:
              FUN_004451d0((int)param_1,"Invalid pCAL data");
              FUN_0044d9b0((int)param_1,puVar5);
              FUN_0044d9b0((int)param_1,pvVar10);
              return;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar9);
        }
        FUN_00451cb0(param_1,param_2,(char *)puVar5,uVar7,uVar8,bVar4,uVar9,(char *)puVar11,
                     (int)pvVar10);
        FUN_0044d9b0((int)param_1,puVar5);
        FUN_0044d9b0((int)param_1,pvVar10);
        return;
      }
      if (bVar3 == 4) goto LAB_00450729;
    }
    pcVar13 = "Invalid pCAL parameters for equation type";
  }
  else {
    pcVar13 = "Invalid pCAL data";
  }
  FUN_004451d0((int)param_1,pcVar13);
  FUN_0044d9b0((int)param_1,puVar5);
  return;
}

