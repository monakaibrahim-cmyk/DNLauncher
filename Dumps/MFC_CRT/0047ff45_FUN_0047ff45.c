// Address: 0x0047ff45
// Name: FUN_0047ff45
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_0047ff45(int param_1)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  __lock(0xe);
  _Memory = DAT_004cb850;
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0047ffac();
    return;
  }
  piVar1 = (int *)&DAT_004cb84c;
  do {
    piVar2 = piVar1;
    if (DAT_004cb850 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 4));
    }
    piVar1 = DAT_004cb850;
  } while (*DAT_004cb850 != *(int *)(param_1 + 4));
  piVar2[1] = DAT_004cb850[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}

