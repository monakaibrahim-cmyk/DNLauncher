// Address: 0x0047ad20
// Name: FUN_0047ad20
// Category: MFC_CRT


void FUN_0047ad20(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  
  if ((DAT_004cc228 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_0048b490();
    return;
  }
  FUN_0047ad7d(SUB84((double)in_ST1,0),(uint)((ulonglong)(double)in_ST1 >> 0x20),
               SUB84((double)in_ST0,0),(uint)((ulonglong)(double)in_ST0 >> 0x20));
  return;
}

