// Address: 0x00469ce3
// Name: FUN_00469ce3
// Category: MFC_CRT


uint __thiscall FUN_00469ce3(void *this,uint param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  
  if ((param_1 < *(uint *)((int)this + 4)) && (iVar1 = *(int *)this, in_EAX = 0, iVar1 != 0)) {
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar1 + 4 + param_1 * 8));
  }
  else {
    uVar2 = in_EAX & 0xffffff00;
  }
  return uVar2;
}

