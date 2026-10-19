// Address: 0x00425620
// Name: FUN_00425620
// Category: Launcher


void FUN_00425620(void)

{
  void *in_EAX;
  void *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = (void *)((int)in_EAX + 0x1c)) {
    FUN_004069c0(in_EAX,0,0xffffffff);
  }
  return;
}

