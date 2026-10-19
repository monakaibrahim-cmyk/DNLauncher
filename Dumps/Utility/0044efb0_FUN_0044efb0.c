// Address: 0x0044efb0
// Name: FUN_0044efb0
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0044efb0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  char *pcVar7;
  
  piVar3 = param_1;
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    FUN_00445110(param_1,"Missing IHDR before gAMA");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_004451d0((int)param_1,"Invalid gAMA after IDAT");
      FUN_0044eb90(piVar3,param_3);
      return;
    }
    if ((uVar1 & 2) != 0) {
      FUN_004451d0((int)param_1,"Out of place gAMA chunk");
    }
  }
  uVar1 = param_3;
  iVar4 = param_2;
  if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
     ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
    FUN_004451d0((int)piVar3,"Duplicate gAMA chunk");
    FUN_0044eb90(piVar3,param_3);
    return;
  }
  if (param_3 != 4) {
    FUN_004451d0((int)piVar3,"Incorrect gAMA chunk length");
    FUN_0044eb90(piVar3,uVar1);
    return;
  }
  FUN_0044da60(piVar3,(uint *)&param_1,4);
  iVar5 = FUN_0044eb90(piVar3,0);
  if (iVar5 == 0) {
    iVar5 = FUN_0044da10((undefined1 *)&param_1);
    if (iVar5 == 0) {
      FUN_004451d0((int)piVar3,"Ignoring gAMA chunk with gamma=0");
      return;
    }
    if (((iVar4 != 0) && ((*(uint *)(iVar4 + 8) & 0x800) != 0)) &&
       ((iVar5 < 45000 || (46000 < iVar5)))) {
      FUN_004451d0((int)piVar3,"Ignoring incorrect gAMA value when sRGB is also present");
      pcVar7 = "gamma = (%d/100000)\n";
      ppuVar6 = FUN_0047a87c();
      FUN_00477353((FILE *)(ppuVar6 + 0x10),(byte *)pcVar7);
      return;
    }
    fVar2 = (float)_DAT_0049ebd8;
    piVar3[0x57] = (int)((float)iVar5 / fVar2);
    FUN_00451890(extraout_ECX,extraout_EDX,(int)piVar3,iVar4,(double)((float)iVar5 / fVar2));
    FUN_00451910((int)piVar3,iVar4,iVar5);
  }
  return;
}

