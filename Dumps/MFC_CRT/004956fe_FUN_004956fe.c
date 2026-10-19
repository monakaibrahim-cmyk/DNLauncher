// Address: 0x004956fe
// Name: FUN_004956fe
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_004956fe(void)

{
  undefined **local_54 [10];
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x49570a;
  FUN_00402cc0(local_2c,"string too long");
  local_8 = 0;
  FUN_00402dd0(local_54,local_2c);
  local_54[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_54,&DAT_004bba20);
}

