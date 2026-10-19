// Address: 0x00404990
// Name: FUN_00404990
// Category: Launcher


void __thiscall FUN_00404990(void *this,int param_1)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  
  if (param_1 == -1) {
    psVar3 = *(short **)this;
    param_1 = 0;
    if (psVar3 != (short *)0x0) {
      psVar1 = psVar3 + 1;
      do {
        sVar2 = *psVar3;
        psVar3 = psVar3 + 1;
      } while (sVar2 != 0);
      param_1 = (int)psVar3 - (int)psVar1 >> 1;
      goto LAB_004049b3;
    }
  }
  else {
LAB_004049b3:
    if (param_1 < 0) goto LAB_004049cc;
  }
  if (param_1 <= *(int *)(*(int *)this + -8)) {
    *(int *)(*(int *)this + -0xc) = param_1;
    *(undefined2 *)(*(int *)this + param_1 * 2) = 0;
    return;
  }
LAB_004049cc:
                    /* WARNING: Subroutine does not return */
  FUN_00403200((undefined4 *)0x80070057);
}

