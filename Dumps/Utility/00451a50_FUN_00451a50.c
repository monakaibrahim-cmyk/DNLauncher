// Address: 0x00451a50
// Name: FUN_00451a50
// Category: Utility


void __cdecl
FUN_00451a50(int *param_1,uint *param_2,uint param_3,uint param_4,int param_5,uint param_6,
            int param_7,int param_8,int param_9)

{
  byte bVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == (uint *)0x0) {
    return;
  }
  if ((param_3 == 0) || (param_4 == 0)) {
    FUN_00445110(param_1,"Image width or height is zero in IHDR");
  }
  if (((uint)param_1[0x99] < param_3) || ((uint)param_1[0x9a] < param_4)) {
    FUN_00445110(param_1,"image size exceeds user limits in IHDR");
  }
  if ((0x7fffffff < param_3) || (0x7fffffff < param_4)) {
    FUN_00445110(param_1,"Invalid image size in IHDR");
  }
  if (0x1fffff7e < param_3) {
    FUN_004451d0((int)param_1,"Width is too large for libpng to process pixels");
  }
  if ((((param_5 != 1) && (param_5 != 2)) && (param_5 != 4)) &&
     ((param_5 != 8 && (param_5 != 0x10)))) {
    FUN_00445110(param_1,"Invalid bit depth in IHDR");
  }
  if ((((int)param_6 < 0) || (param_6 == 1)) || ((param_6 == 5 || (6 < (int)param_6)))) {
    FUN_00445110(param_1,"Invalid color type in IHDR");
  }
  if (param_6 == 3) {
    if (param_5 < 9) goto LAB_00451b5e;
  }
  else if ((((param_6 != 2) && (param_6 != 4)) && (param_6 != 6)) || (7 < param_5))
  goto LAB_00451b5e;
  FUN_00445110(param_1,"Invalid color type/bit depth combination in IHDR");
LAB_00451b5e:
  if (1 < param_7) {
    FUN_00445110(param_1,"Unknown interlace method in IHDR");
  }
  if (param_8 != 0) {
    FUN_00445110(param_1,"Unknown compression method in IHDR");
  }
  if (((param_1[0x1a] & 0x1000U) != 0) && (param_1[0x8c] != 0)) {
    FUN_004451d0((int)param_1,"MNG features are not allowed in a PNG datastream");
  }
  if (param_9 != 0) {
    if ((((*(byte *)(param_1 + 0x8c) & 4) == 0) || (param_9 != 0x40)) ||
       (((param_1[0x1a] & 0x1000U) != 0 || ((param_6 != 2 && (param_6 != 6)))))) {
      FUN_00445110(param_1,"Unknown filter method in IHDR");
    }
    if ((param_1[0x1a] & 0x1000U) != 0) {
      FUN_004451d0((int)param_1,"Invalid filter method in IHDR");
    }
  }
  param_2[1] = param_4;
  *(undefined1 *)((int)param_2 + 0x1a) = (undefined1)param_8;
  *(undefined1 *)((int)param_2 + 0x1b) = (undefined1)param_9;
  *param_2 = param_3;
  *(char *)(param_2 + 6) = (char)param_5;
  *(char *)((int)param_2 + 0x19) = (char)param_6;
  *(undefined1 *)(param_2 + 7) = (undefined1)param_7;
  if (((char)param_6 == '\x03') || ((param_6 & 2) == 0)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  else {
    *(undefined1 *)((int)param_2 + 0x1d) = 3;
  }
  if ((param_6 & 4) != 0) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  bVar1 = *(char *)((int)param_2 + 0x1d) * (char)param_5;
  *(byte *)((int)param_2 + 0x1e) = bVar1;
  if (param_3 < 0x1fffff7f) {
    if (bVar1 < 8) {
      param_2[3] = bVar1 * param_3 + 7 >> 3;
      return;
    }
    param_2[3] = (bVar1 >> 3) * param_3;
    return;
  }
  param_2[3] = 0;
  return;
}

