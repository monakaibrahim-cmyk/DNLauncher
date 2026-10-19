// Address: 0x0042c240
// Name: FUN_0042c240
// Category: Launcher


int __cdecl FUN_0042c240(int param_1)

{
  undefined4 *in_EAX;
  int iVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = (int)in_EAX - (int)unaff_EBX;
  if (unaff_EBX != in_EAX) {
    iVar3 = param_1 - (int)in_EAX;
    do {
      in_EAX = in_EAX + -0x4f;
      puVar4 = in_EAX;
      puVar5 = (undefined4 *)((int)in_EAX + iVar3);
      for (iVar2 = 0x4f; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    } while (in_EAX != unaff_EBX);
  }
  return param_1 + (iVar1 / 0x13c) * -0x13c;
}

