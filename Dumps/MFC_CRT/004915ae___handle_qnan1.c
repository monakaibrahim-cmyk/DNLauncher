// Address: 0x004915ae
// Name: __handle_qnan1
// Category: MFC_CRT


/* Library Function - Single Match
    __handle_qnan1
   
   Library: Visual Studio 2005 Release */

float10 __cdecl __handle_qnan1(int param_1,double param_2)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_004c4970 == 0) {
    fVar2 = __umatherr(1,param_1);
    return fVar2;
  }
  pDVar1 = FUN_0047b849();
  *pDVar1 = 0x21;
  __ctrlfp();
  return (float10)param_2;
}

