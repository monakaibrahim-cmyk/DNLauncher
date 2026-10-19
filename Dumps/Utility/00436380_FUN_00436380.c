// Address: 0x00436380
// Name: FUN_00436380
// Category: Utility


void __thiscall FUN_00436380(void *this,int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if ((param_1 != 0) && (*(int *)((int)this + 0x28) == 0)) {
    if (*(int *)((int)this + 0x30) <= param_2) {
      param_2 = *(int *)((int)this + 0x30);
    }
    iVar3 = *(int *)((int)this + 0xc) * 3;
    if (iVar3 <= param_2) {
      param_2 = iVar3;
    }
    if (0 < param_2) {
      puVar2 = (undefined1 *)(param_1 + 2);
      iVar3 = (param_2 - 1U) / 3 + 1;
      do {
        uVar1 = puVar2[-2];
        puVar2[-2] = *puVar2;
        *puVar2 = uVar1;
        puVar2 = puVar2 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

