// Address: 0x00418590
// Name: FUN_00418590
// Category: Launcher


void __fastcall FUN_00418590(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_1;
      in_EAX[1] = param_1[1];
    }
    in_EAX = in_EAX + 2;
  }
  return;
}

