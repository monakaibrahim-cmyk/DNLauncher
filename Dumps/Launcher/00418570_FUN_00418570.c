// Address: 0x00418570
// Name: FUN_00418570
// Category: Launcher


void __fastcall FUN_00418570(int param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_2;
      in_EAX[1] = param_2[1];
    }
    in_EAX = in_EAX + 2;
  }
  return;
}

