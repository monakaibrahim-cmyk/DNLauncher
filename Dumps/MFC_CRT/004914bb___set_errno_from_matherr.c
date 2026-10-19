// Address: 0x004914bb
// Name: __set_errno_from_matherr
// Category: MFC_CRT


/* Library Function - Single Match
    __set_errno_from_matherr
   
   Library: Visual Studio 2005 Release */

void __cdecl __set_errno_from_matherr(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_0047b849();
    *pDVar1 = 0x22;
    return;
  }
  return;
}

