// Address: 0x0042e3d0
// Name: thunk_FUN_0042d700
// Category: Launcher


void thunk_FUN_0042d700(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int unaff_EBX;
  int unaff_ESI;
  
  if (*(uint *)(unaff_ESI + 0x38) < 0x10) {
    pcVar3 = (char *)(unaff_ESI + 0x24);
  }
  else {
    pcVar3 = *(char **)(unaff_ESI + 0x24);
  }
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00402d00((void *)(unaff_EBX + 0x20),(undefined4 *)pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  *(undefined4 *)(unaff_EBX + 0xc) = *(undefined4 *)(unaff_ESI + 0xc);
  return;
}

