// Address: 0x0044fb00
// Name: FUN_0044fb00
// Category: Utility


void __cdecl FUN_0044fb00(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  short *extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  ushort *extraout_EDX_02;
  ushort *puVar7;
  int extraout_EDX_03;
  uint *puVar8;
  byte *pbVar9;
  uint *local_10;
  char local_c;
  void *local_8;
  uint local_4;
  
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_00445110(param_1,"Missing IHDR before sPLT");
  }
  else if ((param_1[0x1a] & 4U) != 0) {
    FUN_004451d0((int)param_1,"Invalid sPLT after IDAT");
    FUN_0044eb90(param_1,param_3);
    return;
  }
  puVar4 = FUN_0044d960(param_1,param_3 + 1);
  FUN_0044da60(param_1,puVar4,param_3);
  iVar5 = FUN_0044eb90(param_1,0);
  if (iVar5 != 0) {
    FUN_0044d9b0((int)param_1,puVar4);
    return;
  }
  *(undefined1 *)(param_3 + (int)puVar4) = 0;
  cVar1 = (char)*puVar4;
  puVar8 = puVar4;
  while (cVar1 != '\0') {
    puVar8 = (uint *)((int)puVar8 + 1);
    cVar1 = *(char *)puVar8;
  }
  if ((char *)((param_3 - 2) + (int)puVar4) < (char *)((int)puVar8 + 1)) {
    FUN_0044d9b0((int)param_1,puVar4);
    FUN_004451d0((int)param_1,"malformed sPLT chunk");
    return;
  }
  local_c = *(char *)((int)puVar8 + 1);
  pbVar9 = (byte *)((int)puVar8 + 2);
  iVar6 = (int)puVar4 + (param_3 - (int)pbVar9);
  iVar5 = (uint)(local_c != '\b') * 4 + 6;
  local_4 = iVar6 / iVar5;
  if (iVar6 % iVar5 != 0) {
    FUN_0044d9b0((int)param_1,puVar4);
    FUN_004451d0((int)param_1,"sPLT chunk has bad length");
    return;
  }
  if (0x19999999 < local_4) {
    FUN_004451d0((int)param_1,"sPLT chunk too long");
    return;
  }
  local_8 = FUN_0044d9e0(param_1,local_4 * 10);
  if (local_8 == (void *)0x0) {
    FUN_004451d0((int)param_1,"sPLT chunk requires too much memory");
    return;
  }
  iVar5 = 0;
  if (0 < (int)local_4) {
    iVar6 = 0;
    do {
      puVar7 = (ushort *)(iVar6 + (int)local_8);
      if (local_c == '\b') {
        *puVar7 = (ushort)*pbVar9;
        puVar7[1] = (ushort)pbVar9[1];
        puVar7[2] = (ushort)pbVar9[2];
        uVar2 = (ushort)pbVar9[3];
        pbVar9 = pbVar9 + 4;
      }
      else {
        sVar3 = FUN_0044da40(pbVar9);
        *extraout_EDX = sVar3;
        sVar3 = FUN_0044da40(pbVar9 + 2);
        *(short *)(extraout_EDX_00 + 2) = sVar3;
        sVar3 = FUN_0044da40(pbVar9 + 4);
        *(short *)(extraout_EDX_01 + 4) = sVar3;
        uVar2 = FUN_0044da40(pbVar9 + 6);
        pbVar9 = pbVar9 + 8;
        puVar7 = extraout_EDX_02;
      }
      puVar7[3] = uVar2;
      sVar3 = FUN_0044da40(pbVar9);
      iVar5 = iVar5 + 1;
      *(short *)(extraout_EDX_03 + 8) = sVar3;
      pbVar9 = pbVar9 + 2;
      iVar6 = iVar6 + 10;
    } while (iVar5 < (int)local_4);
  }
  local_10 = puVar4;
  FUN_00452450(param_1,param_2,(int)&local_10,1);
  FUN_0044d9b0((int)param_1,puVar4);
  FUN_0044d9b0((int)param_1,local_8);
  return;
}

