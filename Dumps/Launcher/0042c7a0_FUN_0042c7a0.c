// Address: 0x0042c7a0
// Name: FUN_0042c7a0
// Category: Launcher


undefined4 FUN_0042c7a0(void)

{
  int *piVar1;
  uint in_EAX;
  undefined4 uVar2;
  int unaff_ESI;
  int local_c [3];
  
  if (*(int *)(unaff_ESI + 0x10) == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar2 = FUN_0042c950(local_c,unaff_ESI + 8,(int *)**(undefined4 **)(unaff_ESI + 0xc));
  if (*(int *)(unaff_ESI + 0x10) != 0) {
    piVar1 = (int *)**(int **)(unaff_ESI + 0xc);
    if (piVar1 == *(int **)(unaff_ESI + 0xc)) {
      FUN_00475b26();
    }
    uVar2 = piVar1[2];
    *(undefined4 *)(unaff_ESI + 4) = uVar2;
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  *(undefined4 *)(unaff_ESI + 4) = 0;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}

