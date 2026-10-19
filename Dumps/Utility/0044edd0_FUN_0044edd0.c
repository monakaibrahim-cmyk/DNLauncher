// Address: 0x0044edd0
// Name: FUN_0044edd0
// Category: Utility


void __cdecl FUN_0044edd0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 local_304;
  undefined1 local_303;
  undefined1 local_302;
  undefined1 local_300 [2];
  undefined1 local_2fe [766];
  
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    pcVar6 = "Missing IHDR before PLTE";
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_004451d0((int)param_1,"Invalid PLTE after IDAT");
      FUN_0044eb90(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) goto LAB_0044ee26;
    pcVar6 = "Duplicate PLTE chunk";
  }
  FUN_00445110(param_1,pcVar6);
LAB_0044ee26:
  param_1[0x1a] = param_1[0x1a] | 2;
  if ((*(byte *)((int)param_1 + 0x126) & 2) == 0) {
    FUN_004451d0((int)param_1,"Ignoring PLTE chunk in grayscale PNG");
    FUN_0044eb90(param_1,param_3);
    return;
  }
  if ((0x300 < param_3) || (param_3 != (param_3 / 3) * 3)) {
    if (*(byte *)((int)param_1 + 0x126) != 3) {
      FUN_004451d0((int)param_1,"Invalid palette chunk");
      FUN_0044eb90(param_1,param_3);
      return;
    }
    FUN_00445110(param_1,"Invalid palette chunk");
  }
  iVar2 = (int)param_3 / 3;
  if (0 < iVar2) {
    puVar5 = local_2fe;
    iVar4 = iVar2;
    do {
      FUN_0044da60(param_1,(uint *)&local_304,3);
      puVar5[-2] = local_304;
      puVar5[-1] = local_303;
      *puVar5 = local_302;
      puVar5 = puVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0044eb90(param_1,0);
  FUN_00451ec0(param_1,param_2,local_300,iVar2);
  if (((*(char *)((int)param_1 + 0x126) == '\x03') && (param_2 != 0)) &&
     ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
    uVar3 = (ushort)iVar2;
    if (uVar3 < *(ushort *)((int)param_1 + 0x11a)) {
      FUN_004451d0((int)param_1,"Truncating incorrect tRNS chunk length");
      *(ushort *)((int)param_1 + 0x11a) = uVar3;
    }
    if (uVar3 < *(ushort *)(param_2 + 0x16)) {
      FUN_004451d0((int)param_1,"Truncating incorrect info tRNS chunk length");
      *(ushort *)(param_2 + 0x16) = uVar3;
    }
  }
  return;
}

