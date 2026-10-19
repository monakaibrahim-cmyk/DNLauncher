// Address: 0x004027b0
// Name: FUN_004027b0
// Category: Launcher


void __fastcall FUN_004027b0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != unaff_EBX; param_2 = param_2 + 8) {
    if (in_EAX != (undefined4 *)0x0) {
      puVar2 = param_2;
      puVar3 = in_EAX;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    in_EAX = in_EAX + 8;
  }
  return;
}

