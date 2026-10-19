// Address: 0x0047b80e
// Name: FUN_0047b80e
// Category: MFC_CRT


int __cdecl FUN_0047b80e(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_004c3ab8)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x4c3abc);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}

