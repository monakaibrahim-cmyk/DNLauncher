// Address: 0x00490078
// Name: FUN_00490078
// Category: MFC_CRT


undefined4 __cdecl FUN_00490078(uint param_1)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0xfffffffe) {
    pDVar1 = FUN_0047b85c();
    *pDVar1 = 0;
    pDVar1 = FUN_0047b849();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  if (((-1 < (int)param_1) && (param_1 < uNumber_004cc250)) &&
     (puVar2 = (undefined4 *)((param_1 & 0x1f) * 0x40 + (&DAT_004cc260)[(int)param_1 >> 5]),
     (*(byte *)(puVar2 + 1) & 1) != 0)) {
    return *puVar2;
  }
  pDVar1 = FUN_0047b85c();
  *pDVar1 = 0;
  pDVar1 = FUN_0047b849();
  *pDVar1 = 9;
  FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0xffffffff;
}

