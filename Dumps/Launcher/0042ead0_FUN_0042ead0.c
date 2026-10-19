// Address: 0x0042ead0
// Name: FUN_0042ead0
// Category: Launcher


void FUN_0042ead0(void)

{
  int iVar1;
  void *this;
  int *unaff_ESI;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(byte *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 8) & 6) == 0) {
    iVar1 = (**(code **)(**(int **)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) + 0x30))();
    if (iVar1 == -1) {
      uVar2 = 4;
    }
  }
  this = (void *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI);
  if (uVar2 != 0) {
    uVar2 = *(uint *)((int)this + 8) | uVar2;
    if (*(int *)((int)this + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    *(uint *)((int)this + 8) = uVar2 & 0x17;
    if ((*(uint *)((int)this + 0xc) & uVar2 & 0x17) != 0) {
      FUN_0042ce70(this,'\0');
    }
  }
  return;
}

