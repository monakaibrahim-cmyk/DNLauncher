// Address: 0x00408380
// Name: FUN_00408380
// Category: Launcher


void __cdecl FUN_00408380(int param_1)

{
  int in_EAX;
  uint *puVar1;
  
  if (in_EAX != param_1) {
    puVar1 = (uint *)(in_EAX + 0x34);
    do {
      if (0xf < *puVar1) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar1[-5]);
      }
      *puVar1 = 0xf;
      puVar1[-1] = 0;
      *(undefined1 *)(puVar1 + -5) = 0;
      if (0xf < puVar1[-7]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar1[-0xc]);
      }
      puVar1[-7] = 0xf;
      puVar1[-8] = 0;
      *(undefined1 *)(puVar1 + -0xc) = 0;
      in_EAX = in_EAX + 0x38;
      puVar1 = puVar1 + 0xe;
    } while (in_EAX != param_1);
  }
  return;
}

