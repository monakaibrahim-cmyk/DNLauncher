// Address: 0x0044f740
// Name: FUN_0044f740
// Category: Utility


void __cdecl FUN_0044f740(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  char *pcVar7;
  
  piVar2 = param_1;
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    FUN_00445110(param_1,"Missing IHDR before sRGB");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_004451d0((int)param_1,"Invalid sRGB after IDAT");
      FUN_0044eb90(piVar2,param_3);
      return;
    }
    if ((uVar1 & 2) != 0) {
      FUN_004451d0((int)param_1,"Out of place sRGB chunk");
    }
  }
  uVar1 = param_3;
  iVar4 = param_2;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) {
    FUN_004451d0((int)piVar2,"Duplicate sRGB chunk");
    FUN_0044eb90(piVar2,param_3);
    return;
  }
  if (param_3 != 1) {
    FUN_004451d0((int)piVar2,"Incorrect sRGB chunk length");
    FUN_0044eb90(piVar2,uVar1);
    return;
  }
  FUN_0044da60(piVar2,(uint *)&param_1,1);
  iVar5 = FUN_0044eb90(piVar2,0);
  piVar3 = param_1;
  if (iVar5 == 0) {
    if (3 < ((uint)param_1 & 0xff)) {
      FUN_004451d0((int)piVar2,"Unknown sRGB intent");
      return;
    }
    if (iVar4 != 0) {
      if (((*(byte *)(iVar4 + 8) & 1) != 0) &&
         ((*(int *)(iVar4 + 0xfc) < 45000 || (46000 < *(int *)(iVar4 + 0xfc))))) {
        FUN_004451d0((int)piVar2,"Ignoring incorrect gAMA value when sRGB is also present");
        pcVar7 = "incorrect gamma=(%d/100000)\n";
        ppuVar6 = FUN_0047a87c();
        FUN_00477353((FILE *)(ppuVar6 + 0x10),(byte *)pcVar7);
      }
      if (((*(byte *)(iVar4 + 8) & 4) != 0) &&
         (((((*(int *)(iVar4 + 0x100) < 0x763e || (0x7e0e < *(int *)(iVar4 + 0x100))) ||
            (*(int *)(iVar4 + 0x104) < 0x7c9c)) ||
           ((((0x846c < *(int *)(iVar4 + 0x104) || (*(int *)(iVar4 + 0x108) < 63000)) ||
             ((65000 < *(int *)(iVar4 + 0x108) ||
              ((*(int *)(iVar4 + 0x10c) < 32000 || (34000 < *(int *)(iVar4 + 0x10c))))))) ||
            (*(int *)(iVar4 + 0x110) < 29000)))) ||
          (((((31000 < *(int *)(iVar4 + 0x110) || (*(int *)(iVar4 + 0x114) < 59000)) ||
             (61000 < *(int *)(iVar4 + 0x114))) ||
            ((*(int *)(iVar4 + 0x118) < 14000 || (16000 < *(int *)(iVar4 + 0x118))))) ||
           ((*(int *)(iVar4 + 0x11c) < 5000 || (7000 < *(int *)(iVar4 + 0x11c))))))))) {
        FUN_004451d0((int)piVar2,"Ignoring incorrect cHRM value when sRGB is also present");
      }
    }
    FUN_00451fd0((int)piVar2,iVar4,(char)piVar3);
  }
  return;
}

