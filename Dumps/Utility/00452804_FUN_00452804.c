// Address: 0x00452804
// Name: FUN_00452804
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_00452804(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_00452728(0xc);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004527ee(puVar1);
  }
  puVar2[2] = param_1;
  param_1 = puVar2;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&param_1,&DAT_004b85a8);
}

