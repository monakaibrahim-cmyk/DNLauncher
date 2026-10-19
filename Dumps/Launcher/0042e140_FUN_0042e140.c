// Address: 0x0042e140
// Name: FUN_0042e140
// Category: Launcher


void __thiscall FUN_0042e140(void *this,int *param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 8))(this);
  if (cVar2 != '\0') {
    piVar1 = *(int **)((int)this + 0x18);
    while ((piVar1 != (int *)0x0 && (cVar2 = (**(code **)(*piVar1 + 0x40))(param_1), cVar2 != '\0'))
          ) {
      piVar1 = (int *)piVar1[0x10];
    }
  }
  (**(code **)(*param_1 + 0x10))(this);
  return;
}

