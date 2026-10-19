// Address: 0x0045de05
// Name: FUN_0045de05
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_0045de05(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uStackY_28;
  
  uStackY_28 = 0x45de21;
  FUN_004035c0(&param_2,*(short **)(param_2 + 8));
  puVar2 = &uStackY_28;
  uStackY_28 = 0x45de32;
  (**(code **)(*(int *)this + 0x1ec))();
  puVar1 = (undefined4 *)(param_2 + -0x10);
  puVar2[-1] = 0x45de3d;
  FUN_004031b0(puVar1);
  puVar2[-1] = 0x45de42;
  return;
}

