// Address: 0x0042fa80
// Name: FUN_0042fa80
// Category: Launcher


void __thiscall FUN_0042fa80(void *this,byte *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int in_EAX;
  char *pcVar3;
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 0x44) == '\0') {
    *(int *)(unaff_ESI + 0x48) = in_EAX;
    *(undefined1 *)(unaff_ESI + 0x44) = 1;
    pcVar2 = (&PTR_s_No_error_004c5300)[in_EAX];
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00402d00((void *)(unaff_ESI + 0x4c),(undefined4 *)pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    *(undefined4 *)(unaff_ESI + 0x70) = 0xffffffff;
    *(undefined4 *)(unaff_ESI + 0x6c) = 0xffffffff;
    if ((param_1 != (byte *)0x0) && (this != (void *)0x0)) {
      FUN_0042ed20(param_1,param_2);
      *(undefined4 *)(unaff_ESI + 0x6c) = *(undefined4 *)this;
      *(undefined4 *)(unaff_ESI + 0x70) = *(undefined4 *)((int)this + 4);
    }
  }
  return;
}

