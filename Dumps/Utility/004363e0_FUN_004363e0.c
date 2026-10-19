// Address: 0x004363e0
// Name: FUN_004363e0
// Category: Utility


void __thiscall FUN_004363e0(void *this,uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int extraout_ECX;
  undefined1 *extraout_EDX;
  undefined1 *puVar4;
  
  if (((param_2 != 0) && (*(int *)((int)this + 4) != 0)) &&
     (uVar1 = *(uint *)((int)this + 0x28), uVar1 != 0)) {
    if (param_3 == 0) {
      param_3 = param_2;
    }
    if (param_4 == 0) {
      param_4 = param_3;
    }
    iVar2 = FUN_004361f0((int)this);
    if (uVar1 <= param_1) {
      param_1 = uVar1;
    }
    if (param_1 != 0) {
      puVar3 = (undefined1 *)(iVar2 + 1);
      puVar4 = extraout_EDX;
      do {
        puVar3[1] = puVar4[param_2 - (int)extraout_EDX];
        *puVar3 = *puVar4;
        puVar3[-1] = puVar4[param_4 - (int)extraout_EDX];
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 4;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    *(undefined1 *)(extraout_ECX + 0x19d) = 0;
  }
  return;
}

