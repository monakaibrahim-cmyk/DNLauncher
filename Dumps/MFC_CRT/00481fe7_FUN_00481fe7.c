// Address: 0x00481fe7
// Name: FUN_00481fe7
// Category: MFC_CRT


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_00481fe7(int *param_1)

{
  int *piVar1;
  LONG LVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((LONG *)param_1[1] != (LONG *)0x0) {
    LVar2 = InterlockedDecrement((LONG *)param_1[1]);
    if ((LVar2 == 0) && ((undefined *)param_1[1] != &DAT_004c3ef0)) {
                    /* WARNING: Subroutine does not return */
      _free((undefined *)param_1[1]);
    }
  }
  if (*param_1 != 0) {
    __lock(0xc);
    ___removelocaleref((LONG *)*param_1);
    piVar1 = (int *)*param_1;
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != (int *)&DAT_004c4420)) {
      FUN_00481ce1(piVar1);
    }
    FUN_00482074();
  }
  *param_1 = -0x45520ff3;
  param_1[1] = -0x45520ff3;
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}

