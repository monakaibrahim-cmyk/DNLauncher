// Address: 0x0042a210
// Name: FUN_0042a210
// Category: Launcher


void FUN_0042a210(void)

{
  int iVar1;
  uint uVar2;
  void *unaff_EDI;
  
  FUN_0042b790(*(void **)(*(int *)((int)unaff_EDI + 0x2b4) + 4));
  *(int *)(*(int *)((int)unaff_EDI + 0x2b4) + 4) = *(int *)((int)unaff_EDI + 0x2b4);
  *(undefined4 *)((int)unaff_EDI + 0x2b8) = 0;
  *(undefined4 *)*(undefined4 *)((int)unaff_EDI + 0x2b4) = *(undefined4 *)((int)unaff_EDI + 0x2b4);
  *(int *)(*(int *)((int)unaff_EDI + 0x2b4) + 8) = *(int *)((int)unaff_EDI + 0x2b4);
  uVar2 = 0;
  while( true ) {
    iVar1 = 0;
    if (*(int *)((int)unaff_EDI + 0x2a4) != 0) {
      iVar1 = (*(int *)((int)unaff_EDI + 0x2a8) - *(int *)((int)unaff_EDI + 0x2a4)) / 0x13c;
    }
    if (iVar1 <= (int)uVar2) break;
    FUN_00429f10(unaff_EDI,uVar2);
    uVar2 = uVar2 + 1;
  }
  return;
}

