// Address: 0x0048ff7a
// Name: FUN_0048ff7a
// Category: MFC_CRT


undefined4 __cdecl FUN_0048ff7a(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < uNumber_004cc250)) {
    iVar2 = (param_1 & 0x1f) * 0x40;
    if (*(int *)(iVar2 + (&DAT_004cc260)[(int)param_1 >> 5]) == -1) {
      if (DAT_004c3710 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0048ffd4;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_0048ffd4:
      *(HANDLE *)(iVar2 + (&DAT_004cc260)[(int)param_1 >> 5]) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_0047b849();
  *pDVar1 = 9;
  pDVar1 = FUN_0047b85c();
  *pDVar1 = 0;
  return 0xffffffff;
}

