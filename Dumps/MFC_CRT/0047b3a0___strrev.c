// Address: 0x0047b3a0
// Name: __strrev
// Category: MFC_CRT


/* Library Function - Single Match
    __strrev
   
   Library: Visual Studio */

char * __cdecl __strrev(char *_Str)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  pcVar3 = _Str;
  do {
    pcVar4 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    pcVar4 = pcVar4 + -2;
    for (pcVar3 = _Str; pcVar3 < pcVar4; pcVar3 = pcVar3 + 1) {
      cVar1 = *pcVar3;
      *pcVar3 = *pcVar4;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + -1;
    }
  }
  return _Str;
}

