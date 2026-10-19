// Address: 0x0042ba90
// Name: FUN_0042ba90
// Category: Launcher


void __thiscall FUN_0042ba90(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)this;
  *(undefined4 *)this = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x21) == '\0') {
    *(void **)(*(int *)(iVar1 + 8) + 4) = this;
  }
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  if (this == *(void **)(*(int *)(param_1 + 4) + 4)) {
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
    *(void **)(iVar1 + 8) = this;
    *(int *)((int)this + 4) = iVar1;
    return;
  }
  piVar2 = *(int **)((int)this + 4);
  if (this == (void *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(void **)(iVar1 + 8) = this;
    *(int *)((int)this + 4) = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(void **)(iVar1 + 8) = this;
  *(int *)((int)this + 4) = iVar1;
  return;
}

