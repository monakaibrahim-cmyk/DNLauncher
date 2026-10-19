// Address: 0x00415eb0
// Name: FUN_00415eb0
// Category: Launcher


void __fastcall FUN_00415eb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; in_EAX != param_2; in_EAX = in_EAX + 3) {
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
  }
  return;
}

