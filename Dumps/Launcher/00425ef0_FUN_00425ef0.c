// Address: 0x00425ef0
// Name: FUN_00425ef0
// Category: Launcher


char * FUN_00425ef0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *unaff_ESI;
  char *unaff_EDI;
  
  if ((unaff_EDI != (char *)0x0) && (unaff_ESI != (char *)0x0)) {
    pcVar4 = unaff_ESI;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    _strcpy_s(unaff_EDI,(rsize_t)(pcVar4 + (1 - (int)(unaff_ESI + 1))),unaff_ESI);
    pcVar4 = unaff_ESI;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = (int)pcVar4 - (int)(unaff_ESI + 1);
    while (iVar3 = iVar2, iVar2 = iVar3 + -1, -1 < iVar2) {
      if ((unaff_ESI[iVar2] == '\\') || (unaff_ESI[iVar2] == '/')) {
        unaff_EDI[iVar3] = '\0';
        return unaff_EDI;
      }
    }
    *unaff_EDI = '\0';
  }
  return unaff_EDI;
}

