// Address: 0x0042b750
// Name: FUN_0042b750
// Category: Launcher


void __fastcall FUN_0042b750(uint *param_1)

{
  int *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  
  puVar3 = *(undefined4 **)(unaff_EBX + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (((int)param_1[1] < (int)puVar1[5]) ||
         (((int)param_1[1] <= (int)puVar1[5] && (*param_1 <= (uint)puVar1[4])))) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  in_EAX[1] = (int)puVar3;
  *in_EAX = unaff_EBX;
  return;
}

