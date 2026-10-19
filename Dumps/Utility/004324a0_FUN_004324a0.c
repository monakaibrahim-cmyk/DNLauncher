// Address: 0x004324a0
// Name: FUN_004324a0
// Category: Utility


uint __thiscall FUN_004324a0(void *this,void *param_1)

{
  void *pvVar1;
  uint uVar2;
  int *unaff_ESI;
  void *_Size;
  
  pvVar1 = (void *)unaff_ESI[1];
  _Size = pvVar1;
  if (this < pvVar1) {
    _Size = this;
  }
  if (_Size == (void *)0x0) {
    return 0;
  }
  unaff_ESI[1] = (int)pvVar1 - (int)_Size;
  if (*(int *)(unaff_ESI[7] + 0x18) == 1) {
    uVar2 = FUN_00428100(unaff_ESI[0xc],(byte *)*unaff_ESI);
  }
  else {
    if (*(int *)(unaff_ESI[7] + 0x18) != 2) goto LAB_004324ea;
    uVar2 = FUN_004265e0(unaff_ESI[0xc],(uint *)*unaff_ESI,(uint)_Size);
  }
  unaff_ESI[0xc] = uVar2;
LAB_004324ea:
  _memcpy(param_1,(void *)*unaff_ESI,(size_t)_Size);
  *unaff_ESI = *unaff_ESI + (int)_Size;
  unaff_ESI[2] = unaff_ESI[2] + (int)_Size;
  return (uint)_Size;
}

