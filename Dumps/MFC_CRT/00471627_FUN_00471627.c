// Address: 0x00471627
// Name: FUN_00471627
// Category: MFC_CRT


void FUN_00471627(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    puVar1 = FUN_00452728(param_2 * param_3 + 4);
    *puVar1 = *param_1;
    *param_1 = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004529e8();
}

