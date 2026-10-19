// Address: 0x0043c2d0
// Name: FUN_0043c2d0
// Category: Utility


void FUN_0043c2d0(undefined4 param_1)

{
  int *in_EAX;
  
  *(undefined4 *)(*in_EAX + 0x14) = 0x36;
  *(undefined4 *)(*in_EAX + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0043c2ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*in_EAX)();
  return;
}

