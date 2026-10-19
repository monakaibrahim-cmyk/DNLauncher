// Address: 0x00482d48
// Name: FUN_00482d48
// Category: MFC_CRT


undefined4 __cdecl FUN_00482d48(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x16;
    FUN_00475b02((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_004c453c;
  return 0;
}

