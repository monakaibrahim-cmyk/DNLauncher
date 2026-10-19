// Address: 0x0043158a
// Name: Catch_All@0043158a
// Category: Utility


undefined * Catch_All_0043158a(void)

{
  uint uVar1;
  void *this;
  int unaff_EBP;
  
  this = (void *)(*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8));
  uVar1 = *(uint *)((int)this + 8) & 0x17 | 4;
  *(uint *)((int)this + 8) = uVar1;
  if ((*(uint *)((int)this + 0xc) & uVar1) != 0) {
    FUN_0042ce70(this,'\x01');
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  return &DAT_004315c2;
}

