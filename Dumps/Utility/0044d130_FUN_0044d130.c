// Address: 0x0044d130
// Name: FUN_0044d130
// Category: Utility


void __cdecl FUN_0044d130(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char local_38 [52];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)local_38;
  if (param_1[0x3b] == 0) {
    __snprintf(local_38,0x32,"NULL row buffer for row %ld, pass %d",param_1[0x39],
               (uint)*(byte *)(param_1 + 0x49));
    FUN_00445110(param_1,local_38);
  }
  if ((*(byte *)(param_1 + 0x1b) & 0x40) == 0) {
    FUN_00445110(param_1,"Uninitialized row");
  }
  if ((param_1[0x1c] & 0x1000U) != 0) {
    if ((char)param_1[0x42] == '\x03') {
      FUN_0044b3f0((uint *)(param_1 + 0x40),param_1[0x3b] + 1,param_1[0x45],param_1[0x62],
                   (uint)*(ushort *)((int)param_1 + 0x11a));
    }
    else {
      if ((*(short *)((int)param_1 + 0x11a) == 0) || ((param_1[0x1c] & 0x2000000U) == 0)) {
        iVar2 = param_1[0x3b];
        piVar4 = (int *)0x0;
      }
      else {
        iVar2 = param_1[0x3b];
        piVar4 = param_1 + 99;
      }
      FUN_0044b640(param_1 + 0x40,iVar2 + 1,(int)piVar4);
    }
  }
  if ((param_1[0x1b] & 0x400000U) != 0) {
    FUN_00448ad0((uint *)(param_1 + 0x40),(undefined1 *)(param_1[0x3b] + 1),
                 param_1[0x1b] & 0x400000U | 0x80);
  }
  if ((param_1[0x1c] & 0x600000U) != 0) {
    iVar2 = FUN_00449930((int)param_1,param_1 + 0x40,(byte *)(param_1[0x3b] + 1));
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x8a) = 1;
      if ((param_1[0x1c] & 0x600000U) == 0x400000) {
        FUN_004451d0((int)param_1,"png_do_rgb_to_gray found nongray pixel");
      }
      if ((param_1[0x1c] & 0x600000U) == 0x200000) {
        FUN_00445110(param_1,"png_do_rgb_to_gray found nongray pixel");
      }
    }
  }
  if (((param_1[0x1c] & 0x4000U) != 0) && ((param_1[0x1a] & 0x800U) == 0)) {
    FUN_00449770(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if (((*(byte *)(param_1 + 0x1c) & 0x80) != 0) &&
     ((*(short *)((int)param_1 + 0x11a) != 0 || ((*(byte *)((int)param_1 + 0x126) & 4) != 0)))) {
    FUN_0044a030(param_1 + 0x40,(byte *)(param_1[0x3b] + 1),(int)(param_1 + 99),
                 (int)(param_1 + 0x4e),(int)param_1 + 0x142,param_1[0x59],param_1[0x5a],
                 param_1[0x5b],param_1[0x5c],param_1[0x5d],param_1[0x5e],(byte)param_1[0x56]);
  }
  if (((param_1[0x1c] & 0x2000U) != 0) &&
     (((-1 < (char)param_1[0x1c] ||
       ((*(short *)((int)param_1 + 0x11a) == 0 && ((*(byte *)((int)param_1 + 0x126) & 4) == 0)))) &&
      (*(char *)((int)param_1 + 0x126) != '\x03')))) {
    FUN_0044b030(param_1 + 0x40,(byte *)(param_1[0x3b] + 1),param_1[0x59],param_1[0x5c],
                 (byte)param_1[0x56]);
  }
  if ((param_1[0x1c] & 0x400U) != 0) {
    FUN_004491a0(param_1 + 0x40,(undefined1 *)(param_1[0x3b] + 1));
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x40) != 0) {
    FUN_0044bab0(param_1 + 0x40,(byte *)(param_1[0x3b] + 1),param_1[0x7b],param_1[0x7c]);
    if (param_1[0x41] == 0) {
      FUN_00445110(param_1,"png_do_dither returned rowbytes=0");
    }
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x20) != 0) {
    FUN_004489a0((int)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1));
  }
  if ((*(byte *)(param_1 + 0x1c) & 8) != 0) {
    FUN_00448fc0(param_1 + 0x40,(byte *)(param_1[0x3b] + 1),(byte *)((int)param_1 + 0x181));
  }
  if ((*(byte *)(param_1 + 0x1c) & 4) != 0) {
    FUN_00448e80(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    FUN_00448d80(param_1 + 0x40,(undefined1 *)(param_1[0x3b] + 1));
  }
  if ((param_1[0x1c] & 0x10000U) != 0) {
    FUN_00448a70((int)(param_1 + 0x40),(byte *)(param_1[0x3b] + 1));
  }
  if (((param_1[0x1c] & 0x4000U) != 0) && ((param_1[0x1a] & 0x800U) != 0)) {
    FUN_00449770(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((param_1[0x1c] & 0x8000U) != 0) {
    FUN_00449450((uint *)(param_1 + 0x40),param_1[0x3b] + 1,(uint)*(ushort *)((int)param_1 + 0x12e),
                 (byte)param_1[0x1b]);
  }
  if ((param_1[0x1c] & 0x80000U) != 0) {
    FUN_00449370(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((param_1[0x1c] & 0x20000U) != 0) {
    FUN_004491f0(param_1 + 0x40,param_1[0x3b] + 1);
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
    FUN_00448a30(param_1 + 0x40,(undefined1 *)(param_1[0x3b] + 1));
  }
  if ((param_1[0x1c] & 0x100000U) != 0) {
    if ((code *)param_1[0x16] != (code *)0x0) {
      (*(code *)param_1[0x16])(param_1,param_1 + 0x40,param_1[0x3b] + 1);
    }
    if ((char)param_1[0x19] != '\0') {
      *(char *)((int)param_1 + 0x109) = (char)param_1[0x19];
    }
    if (*(char *)((int)param_1 + 0x65) != '\0') {
      *(char *)((int)param_1 + 0x10a) = *(char *)((int)param_1 + 0x65);
    }
    bVar1 = *(char *)((int)param_1 + 0x10a) * *(char *)((int)param_1 + 0x109);
    *(byte *)((int)param_1 + 0x10b) = bVar1;
    if (bVar1 < 8) {
      uVar3 = (uint)bVar1 * param_1[0x40] + 7 >> 3;
    }
    else {
      uVar3 = (uint)(bVar1 >> 3) * param_1[0x40];
    }
    param_1[0x41] = uVar3;
  }
  __security_check_cookie(local_4 ^ (uint)local_38);
  return;
}

