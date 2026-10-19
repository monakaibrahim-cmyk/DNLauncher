// Address: 0x00432720
// Name: FUN_00432720
// Category: Utility


char * __cdecl FUN_00432720(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x38);
  pcVar2 = (char *)(*(int *)(unaff_ESI + 0x6c) + iVar1);
  if ((*(char *)(iVar1 + param_1) == *pcVar2) && (*(char *)(iVar1 + param_1 + 1) == pcVar2[1])) {
    pcVar5 = (char *)(iVar1 + param_1 + 2);
    pcVar3 = pcVar2 + 2;
    while (((((pcVar4 = pcVar3 + 1, pcVar3[1] == pcVar5[1] &&
              (pcVar4 = pcVar3 + 2, pcVar3[2] == pcVar5[2])) &&
             (pcVar4 = pcVar3 + 3, pcVar3[3] == pcVar5[3])) &&
            ((pcVar4 = pcVar3 + 4, pcVar3[4] == pcVar5[4] &&
             (pcVar4 = pcVar3 + 5, pcVar3[5] == pcVar5[5])))) &&
           ((pcVar4 = pcVar3 + 6, pcVar3[6] == pcVar5[6] &&
            (pcVar4 = pcVar3 + 7, pcVar3[7] == pcVar5[7]))))) {
      pcVar4 = pcVar3 + 8;
      pcVar5 = pcVar5 + 8;
      if ((pcVar3[8] != *pcVar5) || (pcVar3 = pcVar4, pcVar2 + 0x102 <= pcVar4)) break;
    }
    pcVar4 = pcVar4 + (0x102 - (int)(pcVar2 + 0x102));
    if (2 < (int)pcVar4) {
      *(int *)(unaff_ESI + 0x70) = param_1;
      if (pcVar4 <= *(char **)(unaff_ESI + 0x74)) {
        return pcVar4;
      }
      return *(char **)(unaff_ESI + 0x74);
    }
  }
  return (char *)0x2;
}

