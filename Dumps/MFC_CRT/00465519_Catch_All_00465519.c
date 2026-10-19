// Address: 0x00465519
// Name: Catch_All@00465519
// Category: MFC_CRT


undefined1 * Catch_All_00465519(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = *(undefined4 **)(iVar1 + 0x20);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  return &LAB_00465533;
}

