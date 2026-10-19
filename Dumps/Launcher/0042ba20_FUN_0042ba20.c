// Address: 0x0042ba20
// Name: FUN_0042ba20
// Category: Launcher


void __thiscall FUN_0042ba20(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)((int)this + 8);
  *(int *)((int)this + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x21) == '\0') {
    *(void **)(*piVar1 + 4) = this;
  }
  piVar1[1] = *(int *)((int)this + 4);
  if (this == *(void **)(*(int *)(param_1 + 4) + 4)) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar1;
    *piVar1 = (int)this;
    *(int **)((int)this + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)((int)this + 4);
  if (this == (void *)*piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = (int)this;
    *(int **)((int)this + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = (int)this;
  *(int **)((int)this + 4) = piVar1;
  return;
}

