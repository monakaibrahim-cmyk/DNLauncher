// Address: 0x0041c6c0
// Name: FUN_0041c6c0
// Category: Launcher


undefined4 FUN_0041c6c0(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_0046419a();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x74))();
    return uVar2;
  }
  return 0;
}

