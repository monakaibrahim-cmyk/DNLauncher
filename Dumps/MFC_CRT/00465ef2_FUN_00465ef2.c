// Address: 0x00465ef2
// Name: FUN_00465ef2
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_00465ef2(undefined4 param_1,undefined4 param_2,short *param_3)

{
  void *this;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x465efe;
  this = FUN_00452728(0x14);
  local_14[0] = (undefined4 *)0x0;
  local_8 = 0;
  if (this != (void *)0x0) {
    local_14[0] = FUN_00416290(this,param_1,param_2,param_3);
  }
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_004bbaec);
}

