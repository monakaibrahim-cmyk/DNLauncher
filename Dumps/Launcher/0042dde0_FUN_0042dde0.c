// Address: 0x0042dde0
// Name: FUN_0042dde0
// Category: Launcher


void __fastcall FUN_0042dde0(int param_1)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  void *this;
  
  FUN_0042d700();
  iVar2 = *(int *)(param_1 + 0x94);
  if (iVar2 != param_1 + 0x44) {
    while (iVar2 != 0) {
      if (*(uint *)(iVar2 + 0x48) < 0x10) {
        this = (void *)(iVar2 + 0x34);
      }
      else {
        this = *(void **)(iVar2 + 0x34);
      }
      FUN_0042dac0(this,in_EAX);
      iVar2 = FUN_0042e190();
    }
  }
  for (piVar1 = *(int **)(param_1 + 0x18); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x10]) {
    (**(code **)(*piVar1 + 0x3c))();
    FUN_0042d770(in_EAX);
  }
  return;
}

