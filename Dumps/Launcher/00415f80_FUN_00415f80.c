// Address: 0x00415f80
// Name: FUN_00415f80
// Category: Launcher


void __fastcall FUN_00415f80(int param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_2;
      in_EAX[1] = param_2[1];
      in_EAX[2] = param_2[2];
    }
    in_EAX = in_EAX + 3;
  }
  return;
}

