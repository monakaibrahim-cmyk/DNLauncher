// Address: 0x00481ce1
// Name: FUN_00481ce1
// Category: MFC_CRT


void FUN_00481ce1(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((((*(undefined ***)((int)param_1 + 0xbc) == (undefined **)0x0) ||
       (*(undefined ***)((int)param_1 + 0xbc) == &PTR_DAT_004c3a84)) ||
      (*(int **)((int)param_1 + 0xb0) == (int *)0x0)) || (**(int **)((int)param_1 + 0xb0) != 0)) {
    if ((*(int **)((int)param_1 + 0xc0) != (int *)0x0) && (**(int **)((int)param_1 + 0xc0) == 0)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)(*(int *)((int)param_1 + 0xc4) + -0xfe));
    }
    ppuVar2 = *(undefined ***)((int)param_1 + 0xd4);
    if ((ppuVar2 != &PTR_DAT_004c4878) && (ppuVar2[0x2d] == (undefined *)0x0)) {
      FUN_0048e788((int)ppuVar2);
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)param_1 + 0xd4));
    }
    puVar4 = (undefined4 *)((int)param_1 + 0x50);
    iVar3 = 6;
    while ((((undefined *)puVar4[-2] == &DAT_004c4418 ||
            (piVar1 = (int *)*puVar4, piVar1 == (int *)0x0)) || (*piVar1 != 0))) {
      if (((puVar4[-1] != 0) && (piVar1 = (int *)puVar4[1], piVar1 != (int *)0x0)) && (*piVar1 == 0)
         ) {
                    /* WARNING: Subroutine does not return */
        _free(piVar1);
      }
      puVar4 = puVar4 + 4;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
    }
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  piVar1 = *(int **)((int)param_1 + 0xb8);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  piVar1 = *(int **)((int)param_1 + 0xb4);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 0xb0));
}

