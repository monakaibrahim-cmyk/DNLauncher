// Address: 0x00403200
// Name: FUN_00403200
// Category: Launcher


void FUN_00403200(undefined4 *param_1)

{
  code *pcVar1;
  
  if (param_1 == (undefined4 *)0x8007000e) {
                    /* WARNING: Subroutine does not return */
    FUN_004529b4();
  }
  FUN_00452804(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

