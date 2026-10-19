// Address: 0x0048e22a
// Name: FUN_0048e22a
// Category: MFC_CRT


byte __cdecl FUN_0048e22a(uint param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 9;
    return 0;
  }
  if ((-1 < (int)param_1) && (param_1 < uNumber_004cc250)) {
    return *(byte *)((&DAT_004cc260)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x40) & 0x40;
  }
  pDVar1 = FUN_0047b849();
  *pDVar1 = 9;
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}

