// Address: 0x00424a50
// Name: FUN_00424a50
// Category: Launcher


void __cdecl FUN_00424a50(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *_Dst;
  char *pcVar4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(param_1 + 1);
  if ((0 < iVar3) && ((*param_1 == ' ' || (param_1[iVar3 + -1] == ' ')))) {
    _Dst = thunk_FUN_00452728(iVar3 + 1U);
    _strcpy_s(_Dst,iVar3 + 1U,param_1);
    cVar1 = *_Dst;
    pcVar2 = _Dst;
    while (cVar1 == ' ') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    pcVar4 = _Dst + iVar3 + -1;
    cVar1 = _Dst[iVar3 + -1];
    while (cVar1 == ' ') {
      pcVar4 = pcVar4 + -1;
      cVar1 = *pcVar4;
    }
    pcVar4[1] = '\0';
    iVar3 = (int)param_1 - (int)pcVar2;
    do {
      cVar1 = *pcVar2;
      pcVar2[iVar3] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
                    /* WARNING: Subroutine does not return */
    _free(_Dst);
  }
  return;
}

