// Address: 0x00402680
// Name: FUN_00402680
// Category: Launcher


void __fastcall FUN_00402680(size_t param_1)

{
  int *piVar1;
  int *unaff_ESI;
  int *unaff_EDI;
  
  if (unaff_ESI == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80070057);
  }
  if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80070057);
  }
  if (unaff_EDI == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x80070057);
  }
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 == unaff_EDI) {
    if ((int)param_1 < 0x81) {
      *unaff_ESI = (int)unaff_EDI;
      goto LAB_004026dd;
    }
    piVar1 = _calloc(param_1,1);
  }
  else {
    if ((int)param_1 < 0x81) {
                    /* WARNING: Subroutine does not return */
      _free(piVar1);
    }
    piVar1 = FUN_00475f5f(piVar1,param_1,1);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403200((undefined4 *)0x8007000e);
    }
  }
  *unaff_ESI = (int)piVar1;
LAB_004026dd:
  if (*unaff_ESI == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00403200((undefined4 *)0x8007000e);
  }
  return;
}

