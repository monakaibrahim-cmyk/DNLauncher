// Address: 0x0042c190
// Name: FUN_0042c190
// Category: Launcher


void __fastcall FUN_0042c190(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (in_EAX != param_2) {
    puVar1 = in_EAX + 0x4f;
    puVar3 = unaff_EBX;
    puVar4 = in_EAX;
    for (iVar2 = 0x4f; in_EAX = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

