// Address: 0x0042c140
// Name: FUN_0042c140
// Category: Launcher


int __cdecl FUN_0042c140(int param_1)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EBX;
  undefined4 *puVar4;
  
  if (in_EAX != unaff_EBX) {
    puVar2 = in_EAX;
    do {
      puVar3 = puVar2 + 0x4f;
      puVar4 = (undefined4 *)((int)puVar2 + (param_1 - (int)in_EAX));
      for (iVar1 = 0x4f; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar2 = puVar3;
    } while (puVar3 != unaff_EBX);
  }
  return (((int)unaff_EBX - (int)in_EAX) / 0x13c) * 0x13c + param_1;
}

