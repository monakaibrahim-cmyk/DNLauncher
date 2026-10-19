// Address: 0x00469b5e
// Name: FUN_00469b5e
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_00469b5e(int param_1,void *param_2,uint param_3,uint *param_4)

{
  CArchive::Write(*(CArchive **)(param_1 + 4),param_2,param_3);
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
  FUN_00469ba4();
  return;
}

