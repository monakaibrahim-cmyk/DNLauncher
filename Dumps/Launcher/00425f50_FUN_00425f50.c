// Address: 0x00425f50
// Name: FUN_00425f50
// Category: Launcher


void __fastcall FUN_00425f50(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  size_t _Size;
  char *unaff_EDI;
  
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    for (pcVar3 = pcVar2 + (-1 - (int)(param_2 + 1)); -1 < (int)pcVar3; pcVar3 = pcVar3 + -1) {
      if ((param_2[(int)pcVar3] == '\\') || (param_2[(int)pcVar3] == '/')) {
        _Size = (int)(pcVar2 + (-1 - (int)(param_2 + 1))) - (int)pcVar3;
        _memcpy(unaff_EDI,param_2 + (int)(pcVar3 + 1),_Size);
        unaff_EDI[_Size] = '\0';
        return;
      }
    }
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _strcpy_s(unaff_EDI,(rsize_t)(pcVar2 + (1 - (int)(param_2 + 1))),param_2);
  }
  return;
}

