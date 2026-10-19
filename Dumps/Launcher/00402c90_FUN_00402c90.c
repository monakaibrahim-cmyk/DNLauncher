// Address: 0x00402c90
// Name: FUN_00402c90
// Category: Launcher


void __fastcall FUN_00402c90(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

