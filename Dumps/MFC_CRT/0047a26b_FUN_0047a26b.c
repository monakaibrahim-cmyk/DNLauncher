// Address: 0x0047a26b
// Name: FUN_0047a26b
// Category: MFC_CRT


uint __cdecl FUN_0047a26b(int param_1)

{
  uint uVar1;
  
  if (DAT_004cb878 == 0) {
    return (byte)PTR_DAT_004c44e8[param_1 * 2] & 0x80;
  }
  uVar1 = __isxdigit_l(param_1,(_locale_t)0x0);
  return uVar1;
}

