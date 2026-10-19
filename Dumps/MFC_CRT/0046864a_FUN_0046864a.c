// Address: 0x0046864a
// Name: FUN_0046864a
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_0046864a(undefined4 param_1,short *param_2)

{
  void *this;
  undefined4 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x468656;
  this = FUN_00452728(0x10);
  local_14[0] = (undefined4 *)0x0;
  local_8 = 0;
  if (this != (void *)0x0) {
    local_14[0] = CArchiveException(this,param_1,param_2);
  }
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_004b9e24);
}

