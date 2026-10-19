// Address: 0x00406e30
// Name: FUN_00406e30
// Category: Launcher


void FUN_00406e30(void)

{
  int in_EAX;
  int unaff_EDI;
  
  while( true ) {
    if (in_EAX == unaff_EDI) {
      return;
    }
    if (7 < *(uint *)(in_EAX + 0x18)) break;
    *(undefined4 *)(in_EAX + 0x18) = 7;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined2 *)(in_EAX + 4) = 0;
    in_EAX = in_EAX + 0x1c;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(in_EAX + 4));
}

