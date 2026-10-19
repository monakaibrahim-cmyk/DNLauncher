// Address: 0x0042d8f0
// Name: FUN_0042d8f0
// Category: Launcher


undefined4 FUN_0042d8f0(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    if (in_EAX == (int *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(*in_EAX + 0x10))();
    if (iVar1 != 0) break;
    in_EAX = (int *)in_EAX[4];
  }
                    /* WARNING: Could not recover jumptable at 0x0042d917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*in_EAX + 0x10))();
  return uVar2;
}

