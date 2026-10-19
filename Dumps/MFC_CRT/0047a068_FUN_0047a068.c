// Address: 0x0047a068
// Name: FUN_0047a068
// Category: MFC_CRT


uint __cdecl FUN_0047a068(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  unkbyte10 in_ST0;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_0048a17c();
      goto LAB_0047a101;
    }
    uVar1 = 0;
    if ((in_EAX & 0x80000000) == 0) goto LAB_0047a095;
  }
  else {
    if ((((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) && (param_1 == 0)) {
      uVar1 = 2;
      goto LAB_0047a101;
    }
    if ((param_2 & 0x80000000) == 0) {
      log2(in_ST0);
      uVar1 = param_2;
LAB_0047a095:
      if (DAT_004cae2c != 0) {
        return uVar1;
      }
      uVar1 = __math_exit(&DAT_004c3770,0x1a,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  uVar1 = 1;
LAB_0047a101:
  if (DAT_004cae2c != 0) {
    return uVar1;
  }
  __startOneArgErrorHandling(&DAT_004c3770,0x1a,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}

