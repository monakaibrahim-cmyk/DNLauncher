// Address: 0x00437180
// Name: FUN_00437180
// Category: Utility


int __thiscall FUN_00437180(void *this,undefined4 param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined1 **)((int)this + 8) = &LAB_00436e80;
  *(undefined1 **)((int)this + 0xc) = &LAB_00436ea0;
  *(undefined1 **)((int)this + 0x10) = &LAB_00436ef0;
  *(undefined1 **)((int)this + 0x1c) = &LAB_00436f60;
  *(code **)((int)this + 0x20) = FUN_00436f80;
  *(code **)((int)this + 0x24) = FUN_00437000;
  *(undefined1 **)((int)this + 0x28) = &LAB_0043a980;
  *(code **)((int)this + 0x2c) = FUN_00443790;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  pvVar1 = FUN_00452728(0x1000);
  *(void **)((int)this + 0x34) = pvVar1;
  return (int)this;
}

