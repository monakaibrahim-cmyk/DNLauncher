// Address: 0x0047ef0b
// Name: __mtinitlocks
// Category: MFC_CRT


/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION p_Var3;
  
  iVar2 = 0;
  p_Var3 = (LPCRITICAL_SECTION)&DAT_004cb6f0;
  do {
    if ((&DAT_004c3dc4)[iVar2 * 2] == 1) {
      (&lpCriticalSection_004c3dc0)[iVar2 * 2] = p_Var3;
      p_Var3 = p_Var3 + 1;
      iVar1 = ___crtInitCritSecAndSpinCount((&lpCriticalSection_004c3dc0)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&lpCriticalSection_004c3dc0)[iVar2 * 2] = (LPCRITICAL_SECTION)0x0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}

