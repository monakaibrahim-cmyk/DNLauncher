// Address: 0x0042aec0
// Name: FUN_0042aec0
// Category: Launcher


uint __fastcall FUN_0042aec0(int param_1)

{
  char cVar1;
  char *in_EAX;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (*(int *)(param_1 + 8) == -1) {
LAB_0042aecc:
    return (uint)in_EAX & 0xffffff00;
  }
  if (*in_EAX == '\\') {
    eVar2 = _strcpy_s((char *)(param_1 + 0x11c),0x104,in_EAX);
    return CONCAT31((int3)((uint)eVar2 >> 8),1);
  }
  iVar3 = __stricmp(in_EAX,".");
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = __stricmp(in_EAX,"..");
    if (iVar4 == 0) {
      pcVar5 = (char *)(param_1 + 0x11c);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar5 - (param_1 + 0x11d);
      in_EAX = (char *)0x0;
      if (iVar4 == 1) goto LAB_0042aecc;
      *(undefined1 *)(iVar4 + 0x11b + param_1) = 0;
      pcVar5 = _strrchr((char *)(param_1 + 0x11c),0x5c);
      iVar4 = 0;
      if (pcVar5 != (char *)0x0) {
        pcVar5[1] = '\0';
        return CONCAT31((int3)((uint)pcVar5 >> 8),1);
      }
    }
    else {
      _strcat_s((char *)(param_1 + 0x11c),0x104,in_EAX);
      pcVar5 = in_EAX;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar5 - (int)(in_EAX + 1);
      if (in_EAX[iVar4 + -1] != '\\') {
        iVar4 = _strcat_s((char *)(param_1 + 0x11c),0x104,"\\");
      }
    }
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}

