// Address: 0x00482a7c
// Name: ___tzset
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tzset
   
   Library: Visual Studio 2005 Release */

void __cdecl ___tzset(void)

{
  if (DAT_004cb95c == 0) {
    __lock(6);
    if (DAT_004cb95c == 0) {
      FUN_00482368();
      DAT_004cb95c = DAT_004cb95c + 1;
    }
    FUN_00482ac2();
  }
  return;
}

