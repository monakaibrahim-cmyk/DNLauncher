// Address: 0x00459116
// Name: FUN_00459116
// Category: Utility


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00459116(undefined4 *param_1)

{
  CMFCComObject<ATL::CAccessibleProxy> *this;
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_1 = 0;
  this = FUN_00452728(0x18);
  if (this != (CMFCComObject<ATL::CAccessibleProxy> *)0x0) {
    CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(this,(void *)0x0);
    uVar1 = FUN_00459174();
    return uVar1;
  }
  uVar1 = FUN_00459174();
  return uVar1;
}

