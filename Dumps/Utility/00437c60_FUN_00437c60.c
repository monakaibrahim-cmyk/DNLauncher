// Address: 0x00437c60
// Name: FUN_00437c60
// Category: Utility


void __fastcall FUN_00437c60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x43;
  iVar2 = 0x14;
  do {
    if ((void *)*puVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*puVar1);
    }
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(char *)(param_1 + 0x80) != '\0') {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}

