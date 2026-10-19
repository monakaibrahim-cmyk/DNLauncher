// Address: 0x0042c0b0
// Name: FUN_0042c0b0
// Category: Launcher


void FUN_0042c0b0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    FUN_00475b26();
  }
  iVar2 = unaff_ESI[1];
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) != '\0') {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
      while ((cVar1 == '\0' && (unaff_ESI[1] == *(int *)(iVar2 + 8)))) {
        unaff_ESI[1] = iVar2;
        iVar2 = *(int *)(iVar2 + 4);
        cVar1 = *(char *)(iVar2 + 0x21);
      }
      unaff_ESI[1] = iVar2;
      return;
    }
    cVar1 = *(char *)(*piVar3 + 0x21);
    piVar4 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar4 + 0x21);
      piVar3 = piVar4;
      piVar4 = (int *)*piVar4;
    }
    unaff_ESI[1] = (int)piVar3;
    return;
  }
  FUN_00475b26();
  return;
}

