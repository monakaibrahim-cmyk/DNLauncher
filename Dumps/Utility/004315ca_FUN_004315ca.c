// Address: 0x004315ca
// Name: FUN_004315ca
// Category: Utility


void FUN_004315ca(void)

{
  int iVar1;
  uint uVar2;
  void *this;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  this = (void *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI);
  if (unaff_EDI != 0) {
    uVar2 = *(uint *)((int)this + 8) | unaff_EDI;
    if (*(int *)((int)this + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    *(uint *)((int)this + 8) = uVar2 & 0x17;
    if ((*(uint *)((int)this + 0xc) & uVar2 & 0x17) != 0) {
      FUN_0042ce70(this,'\0');
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = *(int *)(*(int *)(**(int **)(unaff_EBP + -0x24) + 4) + 0x28 +
                  (int)*(int **)(unaff_EBP + -0x24));
  if (iVar1 != 0) {
    FUN_00495810((undefined4 *)(iVar1 + 4));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

