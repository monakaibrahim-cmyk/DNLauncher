// Address: 0x0045dca4
// Name: FUN_0045dca4
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_0045dca4(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uStackY_28;
  
  uStackY_28 = 0x45dcc0;
  FUN_004035c0(&param_2,*(short **)(param_2 + 8));
  puVar2 = &uStackY_28;
  uStackY_28 = 0x45dcd1;
  (**(code **)(*(int *)this + 0x1c4))();
  puVar1 = (undefined4 *)(param_2 + -0x10);
  puVar2[-1] = 0x45dcdc;
  FUN_004031b0(puVar1);
  puVar2[-1] = 0x45dce1;
  return;
}

