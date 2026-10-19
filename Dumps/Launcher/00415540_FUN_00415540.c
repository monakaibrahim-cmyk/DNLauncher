// Address: 0x00415540
// Name: FUN_00415540
// Category: Launcher


void FUN_00415540(void)

{
  undefined4 *in_EAX;
  
  if (*(char *)(in_EAX + 1) != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)*in_EAX);
  }
  return;
}

