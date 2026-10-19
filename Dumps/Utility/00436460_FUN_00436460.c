// Address: 0x00436460
// Name: FUN_00436460
// Category: Utility


void __thiscall FUN_00436460(void *this,int param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint extraout_EDX;
  undefined1 *puVar3;
  
  if (((param_1 != 0) && (*(int *)((int)this + 4) != 0)) && (*(int *)((int)this + 0x28) != 0)) {
    iVar1 = FUN_004361f0((int)this);
    if (extraout_EDX <= param_2) {
      param_2 = extraout_EDX;
    }
    if (param_2 != 0) {
      puVar3 = (undefined1 *)(param_1 + 2);
      puVar2 = (undefined1 *)(iVar1 + 1);
      do {
        puVar2[1] = puVar3[-2];
        *puVar2 = puVar3[-1];
        puVar2[-1] = *puVar3;
        puVar3 = puVar3 + 3;
        puVar2 = puVar2 + 4;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    *(undefined1 *)((int)this + 0x19d) = 0;
  }
  return;
}

