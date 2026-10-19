// Address: 0x0045392b
// Name: FUN_0045392b
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void __fastcall FUN_0045392b(undefined4 *param_1)

{
  *param_1 = AFX_MODULE_STATE::vftable;
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
  }
  if ((int *)param_1[0x1c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1c] + 0xc))(param_1 + 0x13);
    if ((int *)param_1[0x1c] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1c] + 4))(1);
    }
  }
  if (*(undefined4 **)param_1[0x1e] != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)param_1[0x1e])(1);
  }
  if (*(undefined4 **)(param_1[0x1e] + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1[0x1e] + 4))(1);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1e]);
}

