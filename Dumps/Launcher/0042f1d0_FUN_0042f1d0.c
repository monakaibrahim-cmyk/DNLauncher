// Address: 0x0042f1d0
// Name: FUN_0042f1d0
// Category: Launcher


char * FUN_0042f1d0(void)

{
  char cVar1;
  char *in_EAX;
  int iVar2;
  void *unaff_EBX;
  char *pcVar3;
  
  FUN_00402d00(unaff_EBX,&PTR_004b2d68,0);
  if (((in_EAX == (char *)0x0) || (*in_EAX == '\0')) ||
     ((iVar2 = FUN_0042ece0(), pcVar3 = in_EAX, iVar2 == 0 && (*in_EAX != '_')))) {
    return (char *)0x0;
  }
  do {
    if ((*pcVar3 == '\0') ||
       ((((iVar2 = FUN_0042ed00(), iVar2 == 0 && (cVar1 = *pcVar3, cVar1 != '_')) && (cVar1 != '-'))
        && ((cVar1 != '.' && (cVar1 != ':')))))) break;
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != (char *)0x0);
  if (0 < (int)pcVar3 - (int)in_EAX) {
    FUN_00402d00(unaff_EBX,(undefined4 *)in_EAX,(int)pcVar3 - (int)in_EAX);
  }
  return pcVar3;
}

