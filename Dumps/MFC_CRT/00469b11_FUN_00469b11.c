// Address: 0x00469b11
// Name: FUN_00469b11
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_00469b11(int param_1,void *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  
  uVar1 = CArchive::Read(*(CArchive **)(param_1 + 4),param_2,param_3);
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar1;
  }
  FUN_00469b56();
  return;
}

