// Address: 0x00443550
// Name: FUN_00443550
// Category: Utility


void FUN_00443550(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(unaff_ESI + 100)) {
    puVar2 = (undefined4 *)(*(int *)(unaff_ESI + 0x1a8) + 0x44);
    do {
      uVar1 = (**(code **)(*(int *)(unaff_ESI + 4) + 4))();
      *puVar2 = uVar1;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)(unaff_ESI + 100));
  }
  return;
}

