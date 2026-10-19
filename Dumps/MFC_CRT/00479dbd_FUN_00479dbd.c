// Address: 0x00479dbd
// Name: FUN_00479dbd
// Category: MFC_CRT


uint __cdecl FUN_00479dbd(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_EAX;
  bool in_ZF;
  ushort in_FPUControlWord;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar2 = FUN_0048a17c();
      goto LAB_00479e3b;
    }
    uVar2 = 0;
    uVar1 = param_2 & 0x80000000;
joined_r0x00479e2c:
    if (uVar1 == 0) {
LAB_00479dde:
      if (DAT_004cae2c != 0) {
        return uVar2;
      }
      uVar2 = __math_exit(&DAT_004c3760,5,unaff_retaddr,param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar2 = FUN_0048a165();
    }
    if ((uVar2 & 0x80000000) == 0) goto LAB_00479dde;
    if (((uVar2 & 0x7ff00000) == 0) && (uVar1 = param_1, (uVar2 & 0xfffff) == 0))
    goto joined_r0x00479e2c;
  }
  uVar2 = 1;
LAB_00479e3b:
  if (DAT_004cae2c != 0) {
    return uVar2;
  }
  __startOneArgErrorHandling(&DAT_004c3760,5,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}

