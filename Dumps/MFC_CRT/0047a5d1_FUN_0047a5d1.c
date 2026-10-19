// Address: 0x0047a5d1
// Name: FUN_0047a5d1
// Category: MFC_CRT


void __cdecl FUN_0047a5d1(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}

