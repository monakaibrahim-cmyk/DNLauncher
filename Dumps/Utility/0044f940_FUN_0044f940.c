// Address: 0x0044f940
// Name: FUN_0044f940
// Category: Utility


void __cdecl FUN_0044f940(int *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  
  piVar4 = param_1;
  uVar8 = param_1[0x1a];
  if ((uVar8 & 1) == 0) {
    FUN_00445110(param_1,"Missing IHDR before iCCP");
  }
  else {
    if ((uVar8 & 4) != 0) {
      FUN_004451d0((int)param_1,"Invalid iCCP after IDAT");
      FUN_0044eb90(piVar4,param_3);
      return;
    }
    if ((uVar8 & 2) != 0) {
      FUN_004451d0((int)param_1,"Out of place iCCP chunk");
    }
  }
  uVar8 = param_3;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x1000) != 0)) {
    FUN_004451d0((int)piVar4,"Duplicate iCCP chunk");
    FUN_0044eb90(piVar4,param_3);
    return;
  }
  puVar5 = FUN_0044d960(piVar4,param_3 + 1);
  FUN_0044da60(piVar4,puVar5,uVar8);
  iVar6 = FUN_0044eb90(piVar4,0);
  if (iVar6 != 0) {
    FUN_0044d9b0((int)piVar4,puVar5);
    return;
  }
  *(undefined1 *)((int)puVar5 + uVar8) = 0;
  cVar2 = (char)*puVar5;
  puVar10 = puVar5;
  while (cVar2 != '\0') {
    puVar10 = (uint *)((int)puVar10 + 1);
    cVar2 = *(char *)puVar10;
  }
  if ((char *)((int)puVar5 + (uVar8 - 1)) <= (char *)((int)puVar10 + 1)) {
    FUN_0044d9b0((int)piVar4,puVar5);
    FUN_004451d0((int)piVar4,"Malformed iCCP chunk");
    return;
  }
  if (*(char *)((int)puVar10 + 1) != '\0') {
    FUN_004451d0((int)piVar4,"Ignoring nonzero compression type in iCCP chunk");
  }
  piVar11 = (int *)((int)puVar10 + (2 - (int)puVar5));
  pcVar7 = (char *)FUN_0044db00(piVar4,0,puVar5,uVar8,(size_t)piVar11,(uint *)&param_1);
  uVar8 = (int)param_1 - (int)piVar11;
  if ((piVar11 <= param_1) && (3 < uVar8)) {
    pcVar1 = (char *)((int)piVar11 + (int)pcVar7);
    uVar9 = CONCAT31(CONCAT21(CONCAT11(*(char *)((int)piVar11 + (int)pcVar7),pcVar1[1]),pcVar1[2]),
                     pcVar1[3]);
    if ((uVar8 <= uVar9) && (bVar3 = uVar8 < uVar9, uVar9 = uVar8, bVar3)) {
      FUN_0044d9b0((int)piVar4,pcVar7);
      FUN_004451d0((int)piVar4,"Ignoring truncated iCCP profile.");
      return;
    }
    FUN_004520b0(piVar4,param_2,pcVar7,0,pcVar1,uVar9);
    FUN_0044d9b0((int)piVar4,pcVar7);
    return;
  }
  FUN_0044d9b0((int)piVar4,pcVar7);
  FUN_004451d0((int)piVar4,"Profile size field missing from iCCP chunk");
  return;
}

