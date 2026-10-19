// Address: 0x00404570
// Name: FUN_00404570
// Category: Launcher


void FUN_00404570(void)

{
  int in_EAX;
  int unaff_EDI;
  
  while( true ) {
    if (in_EAX == unaff_EDI) {
      return;
    }
    if (0xf < *(uint *)(in_EAX + 0x18)) break;
    *(undefined4 *)(in_EAX + 0x18) = 0xf;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined1 *)(in_EAX + 4) = 0;
    in_EAX = in_EAX + 0x1c;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(in_EAX + 4));
}

