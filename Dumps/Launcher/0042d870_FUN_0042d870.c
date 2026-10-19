// Address: 0x0042d870
// Name: FUN_0042d870
// Category: Launcher


undefined4 FUN_0042d870(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_0042d7d0();
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = (**(code **)(*piVar1 + 0x18))();
    if (iVar2 != 0) break;
    piVar1 = (int *)FUN_0042d820();
  }
                    /* WARNING: Could not recover jumptable at 0x0042d8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*piVar1 + 0x18))();
  return uVar3;
}

