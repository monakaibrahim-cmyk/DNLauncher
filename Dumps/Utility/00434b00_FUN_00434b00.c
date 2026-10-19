// Address: 0x00434b00
// Name: FUN_00434b00
// Category: Utility


void __thiscall FUN_00434b00(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this + 4) == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x30);
    puVar3 = (undefined4 *)((int)this + 0x30);
    for (iVar1 = 0x5f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

