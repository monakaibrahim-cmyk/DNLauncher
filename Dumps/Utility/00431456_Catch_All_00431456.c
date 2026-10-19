// Address: 0x00431456
// Name: Catch_All@00431456
// Category: Utility


undefined * Catch_All_00431456(void)

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
  return &DAT_0043148e;
}

