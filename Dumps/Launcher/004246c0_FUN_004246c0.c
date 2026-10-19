// Address: 0x004246c0
// Name: FUN_004246c0
// Category: Launcher


void FUN_004246c0(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  void *pvVar4;
  char *unaff_EBX;
  char *unaff_ESI;
  
  pcVar2 = unaff_EBX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)(unaff_EBX + 1);
  if (uVar3 < 0x33) {
    if (uVar3 == 0) {
      unaff_ESI[0x38] = '\0';
      unaff_ESI[0x39] = '\0';
      unaff_ESI[0x3a] = '\0';
      unaff_ESI[0x3b] = '\0';
      *unaff_ESI = '\0';
      return;
    }
    _strcpy_s(unaff_ESI,0x33,unaff_EBX);
    *(uint *)(unaff_ESI + 0x38) = uVar3;
    return;
  }
  *unaff_ESI = '\0';
  if (*(uint *)(unaff_ESI + 0x3c) < uVar3) {
    if (*(uint *)(unaff_ESI + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(unaff_ESI + 0x34));
    }
    pvVar4 = thunk_FUN_00452728(uVar3 + 1);
    *(void **)(unaff_ESI + 0x34) = pvVar4;
    *(uint *)(unaff_ESI + 0x3c) = uVar3;
  }
  _strcpy_s(*(char **)(unaff_ESI + 0x34),uVar3 + 1,unaff_EBX);
  *(uint *)(unaff_ESI + 0x38) = uVar3;
  return;
}

