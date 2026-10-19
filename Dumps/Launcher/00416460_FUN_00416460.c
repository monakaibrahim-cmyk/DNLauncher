// Address: 0x00416460
// Name: FUN_00416460
// Category: Launcher


void FUN_00416460(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  short *unaff_ESI;
  
  iVar3 = 0x200;
  iVar1 = 0;
  psVar2 = unaff_ESI;
  do {
    if (*psVar2 == 0) {
      if (iVar3 == 0) {
        iVar1 = -0x7ff8ffa9;
      }
      else {
        param_1 = 0x200 - iVar3;
      }
      goto LAB_0041649e;
    }
    psVar2 = psVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar1 = -0x7ff8ffa9;
LAB_0041649e:
  if (-1 < iVar1) {
    FUN_00416410(unaff_ESI + param_1,0x200 - param_1);
  }
  return;
}

