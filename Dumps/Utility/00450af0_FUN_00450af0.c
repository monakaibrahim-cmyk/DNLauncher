// Address: 0x00450af0
// Name: FUN_00450af0
// Category: Utility


void __cdecl FUN_00450af0(int *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_00445110(param_1,"Missing IHDR before tEXt");
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  puVar4 = FUN_0044d9e0(param_1,param_3 + 1);
  if (puVar4 == (uint *)0x0) {
    FUN_004451d0((int)param_1,"No memory to process text chunk.");
    return;
  }
  FUN_0044da60(param_1,puVar4,param_3);
  iVar5 = FUN_0044eb90(param_1,0);
  if (iVar5 != 0) {
    FUN_0044d9b0((int)param_1,puVar4);
    return;
  }
  *(char *)((int)puVar4 + param_3) = '\0';
  cVar2 = (char)*puVar4;
  puVar7 = puVar4;
  while (cVar2 != '\0') {
    puVar7 = (uint *)((int)puVar7 + 1);
    cVar2 = *(char *)puVar7;
  }
  if (puVar7 != (uint *)((int)puVar4 + param_3)) {
    puVar7 = (uint *)((int)puVar7 + 1);
  }
  puVar6 = FUN_0044d9e0(param_1,0x10);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0xffffffff;
    puVar6[1] = puVar4;
    puVar6[2] = puVar7;
    pcVar1 = (char *)((int)puVar7 + 1);
    do {
      uVar3 = *puVar7;
      puVar7 = (uint *)((int)puVar7 + 1);
    } while ((char)uVar3 != '\0');
    puVar6[3] = (int)puVar7 - (int)pcVar1;
    iVar5 = FUN_004521b0(param_1,param_2,(int)puVar6,1);
    FUN_0044d9b0((int)param_1,puVar4);
    FUN_0044d9b0((int)param_1,puVar6);
    if (iVar5 != 0) {
      FUN_004451d0((int)param_1,"Insufficient memory to process text chunk.");
    }
    return;
  }
  FUN_004451d0((int)param_1,"Not enough memory to process text chunk.");
  FUN_0044d9b0((int)param_1,puVar4);
  return;
}

