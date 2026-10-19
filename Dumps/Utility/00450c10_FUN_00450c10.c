// Address: 0x00450c10
// Name: FUN_00450c10
// Category: Utility


void __cdecl FUN_00450c10(int *param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  char *pcVar7;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    FUN_00445110(param_1,"Missing IHDR before zTXt");
  }
  uVar2 = param_3;
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  puVar3 = FUN_0044d9e0(param_1,param_3 + 1);
  if (puVar3 != (uint *)0x0) {
    FUN_0044da60(param_1,puVar3,uVar2);
    iVar4 = FUN_0044eb90(param_1,0);
    if (iVar4 != 0) {
      FUN_0044d9b0((int)param_1,puVar3);
      return;
    }
    *(undefined1 *)((int)puVar3 + uVar2) = 0;
    cVar1 = (char)*puVar3;
    puVar6 = puVar3;
    while (cVar1 != '\0') {
      puVar6 = (uint *)((int)puVar6 + 1);
      cVar1 = *(char *)puVar6;
    }
    if (puVar6 < (uint *)((int)puVar3 + (uVar2 - 2))) {
      if (*(char *)((int)puVar6 + 1) != '\0') {
        FUN_004451d0((int)param_1,"Unknown compression type in zTXt chunk");
      }
      pcVar7 = (char *)((int)puVar6 + (2 - (int)puVar3));
      puVar3 = (uint *)FUN_0044db00(param_1,0,puVar3,param_3,(size_t)pcVar7,&param_3);
      puVar5 = FUN_0044d9e0(param_1,0x10);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = puVar3;
        puVar5[2] = pcVar7 + (int)puVar3;
        puVar5[3] = param_3;
        iVar4 = FUN_004521b0(param_1,param_2,(int)puVar5,1);
        FUN_0044d9b0((int)param_1,puVar5);
        FUN_0044d9b0((int)param_1,puVar3);
        if (iVar4 != 0) {
          FUN_00445110(param_1,"Insufficient memory to store zTXt chunk.");
        }
        return;
      }
      pcVar7 = "Not enough memory to process zTXt chunk.";
    }
    else {
      pcVar7 = "Truncated zTXt chunk";
    }
    FUN_004451d0((int)param_1,pcVar7);
    FUN_0044d9b0((int)param_1,puVar3);
    return;
  }
  FUN_004451d0((int)param_1,"Out of memory processing zTXt chunk.");
  return;
}

