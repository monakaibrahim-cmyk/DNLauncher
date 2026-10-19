// Address: 0x0047a44c
// Name: FUN_0047a44c
// Category: MFC_CRT


void __fastcall FUN_0047a44c(undefined4 param_1)

{
  ushort in_FPUControlWord;
  
  if ((DAT_004cc228 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_0048a8e0();
    return;
  }
  __cintrindisp1(param_1,0x4c47aa);
  return;
}

