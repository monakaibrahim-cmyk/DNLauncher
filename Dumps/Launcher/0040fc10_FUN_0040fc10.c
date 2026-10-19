// Address: 0x0040fc10
// Name: FUN_0040fc10
// Category: Launcher


void FUN_0040fc10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  int local_10 [3];
  
  puVar1 = *(undefined4 **)(unaff_ESI + 8);
  if (puVar1 < *(undefined4 **)(unaff_ESI + 4)) {
    FUN_00475b26();
  }
  puVar2 = *(undefined4 **)(unaff_ESI + 4);
  if (*(undefined4 **)(unaff_ESI + 8) < puVar2) {
    FUN_00475b26();
  }
  FUN_0040fc50(unaff_ESI,local_10,unaff_ESI,puVar2,unaff_ESI,puVar1);
  return;
}

