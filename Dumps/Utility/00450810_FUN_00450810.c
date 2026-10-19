// Address: 0x00450810
// Name: FUN_00450810
// Category: Utility


void __cdecl FUN_00450810(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  float10 fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  char *pcVar13;
  
  iVar4 = param_2;
  piVar3 = param_1;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00445110(param_1,"Missing IHDR before sCAL");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_004451d0((int)param_1,"Invalid sCAL after IDAT");
      FUN_0044eb90(piVar3,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x4000) != 0)) {
      FUN_004451d0((int)param_1,"Duplicate sCAL chunk");
      FUN_0044eb90(piVar3,param_3);
      return;
    }
  }
  uVar5 = param_3;
  puVar6 = FUN_0044d9e0(piVar3,param_3 + 1);
  if (puVar6 == (uint *)0x0) {
    FUN_004451d0((int)piVar3,"Out of memory while processing sCAL chunk");
    return;
  }
  FUN_0044da60(piVar3,puVar6,uVar5);
  iVar7 = FUN_0044eb90(piVar3,0);
  if (iVar7 != 0) {
    FUN_0044d9b0((int)piVar3,puVar6);
    return;
  }
  pbVar9 = (byte *)(uVar5 + (int)puVar6);
  *pbVar9 = 0;
  fVar10 = (float10)FUN_0047b085((byte *)((int)puVar6 + 1),&param_1);
  if ((char)*param_1 != '\0') {
    FUN_004451d0((int)piVar3,"malformed width string in sCAL chunk");
    return;
  }
  cVar1 = (char)*puVar6;
  puVar8 = puVar6;
  while (cVar1 != '\0') {
    puVar8 = (uint *)((int)puVar8 + 1);
    cVar1 = *(char *)puVar8;
  }
  if (pbVar9 < (byte *)((int)puVar8 + 1)) {
    pcVar13 = "Truncated sCAL chunk";
  }
  else {
    fVar11 = (float10)FUN_0047b085((byte *)((int)puVar8 + 1),&param_1);
    if ((char)*param_1 != '\0') {
      FUN_004451d0((int)piVar3,"malformed height string in sCAL chunk");
      return;
    }
    fVar2 = (float10)0;
    fVar12 = (float10)(double)fVar10;
    if ((fVar12 < fVar2 == (fVar12 == fVar2)) && (fVar2 < fVar11)) {
      FUN_00451e50((int)piVar3,iVar4,(char)*puVar6,(double)fVar10,(double)fVar11);
      FUN_0044d9b0((int)piVar3,puVar6);
      return;
    }
    pcVar13 = "Invalid sCAL data";
  }
  FUN_004451d0((int)piVar3,pcVar13);
  FUN_0044d9b0((int)piVar3,puVar6);
  return;
}

