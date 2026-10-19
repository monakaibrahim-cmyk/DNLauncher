// Address: 0x00469cce
// Name: FUN_00469cce
// Category: MFC_CRT


undefined4 __thiscall FUN_00469cce(void *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < *(uint *)((int)this + 4)) {
    uVar1 = *(undefined4 *)(*(int *)this + param_1 * 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

