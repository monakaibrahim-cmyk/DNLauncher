// Address: 0x0047a010
// Name: FUN_0047a010
// Category: MFC_CRT


void FUN_0047a010(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  double dVar1;
  
  if ((DAT_004cc228 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_0048a460();
    return;
  }
  dVar1 = (double)in_ST0;
  FUN_0048a1d8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_0047a068(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}

