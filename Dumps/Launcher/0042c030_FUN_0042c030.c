// Address: 0x0042c030
// Name: FUN_0042c030
// Category: Launcher


void FUN_0042c030(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  
  if (*unaff_ESI == 0) {
    FUN_00475b26();
  }
  piVar2 = (int *)unaff_ESI[1];
  if (*(char *)((int)piVar2 + 0x21) == '\0') {
    iVar3 = *piVar2;
    if (*(char *)(iVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x21);
      iVar4 = *(int *)(iVar3 + 8);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x21);
        iVar3 = iVar4;
        iVar4 = *(int *)(iVar4 + 8);
      }
      unaff_ESI[1] = iVar3;
      return;
    }
    piVar2 = (int *)piVar2[1];
    cVar1 = *(char *)((int)piVar2 + 0x21);
    while ((cVar1 == '\0' && (unaff_ESI[1] == *piVar2))) {
      unaff_ESI[1] = (int)piVar2;
      piVar2 = (int *)piVar2[1];
      cVar1 = *(char *)((int)piVar2 + 0x21);
    }
    if (*(char *)(unaff_ESI[1] + 0x21) != '\0') {
      FUN_00475b26();
      return;
    }
    unaff_ESI[1] = (int)piVar2;
  }
  else {
    iVar3 = piVar2[2];
    unaff_ESI[1] = iVar3;
    if (*(char *)(iVar3 + 0x21) != '\0') {
      FUN_00475b26();
      return;
    }
  }
  return;
}

