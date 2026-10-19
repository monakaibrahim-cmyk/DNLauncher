// Address: 0x00409c50
// Name: FUN_00409c50
// Category: Launcher


int FUN_00409c50(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 3;
}

