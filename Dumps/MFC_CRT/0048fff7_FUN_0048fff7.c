// Address: 0x0048fff7
// Name: FUN_0048fff7
// Category: MFC_CRT


undefined4 __cdecl FUN_0048fff7(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < uNumber_004cc250)) {
    iVar3 = (param_1 & 0x1f) * 0x40;
    piVar1 = (int *)((&DAT_004cc260)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_004c3710 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_00490055;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_00490055:
      *(undefined4 *)(iVar3 + (&DAT_004cc260)[(int)param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_0047b849();
  *pDVar2 = 9;
  pDVar2 = FUN_0047b85c();
  *pDVar2 = 0;
  return 0xffffffff;
}

