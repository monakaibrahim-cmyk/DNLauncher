// Address: 0x0042e190
// Name: FUN_0042e190
// Category: Launcher


int FUN_0042e190(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = *(int *)(in_EAX + 0x50);
  if ((*(int *)(iVar1 + 0x44) == 0) && (*(int *)(iVar1 + 0x28) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

