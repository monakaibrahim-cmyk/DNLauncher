// Address: 0x00419680
// Name: FUN_00419680
// Category: Launcher


undefined4 __thiscall FUN_00419680(void *this,int *param_1)

{
  undefined4 uVar1;
  
  if (this == (void *)0xffffffac) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)this + 0x58);
  }
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)((int)this + 0x5c));
  (**(code **)(*param_1 + 0x30))(*(undefined4 *)((int)this + 0x60));
  return uVar1;
}

