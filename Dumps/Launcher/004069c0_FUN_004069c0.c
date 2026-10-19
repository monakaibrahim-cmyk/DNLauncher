// Address: 0x004069c0
// Name: FUN_004069c0
// Category: Launcher


int __thiscall FUN_004069c0(void *this,uint param_1,uint param_2)

{
  bool bVar1;
  void *in_EAX;
  undefined4 *_Dst;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (*(uint *)((int)in_EAX + 0x14) < param_1) {
    FUN_0049573d();
  }
  uVar4 = *(int *)((int)in_EAX + 0x14) - param_1;
  if (param_2 < uVar4) {
    uVar4 = param_2;
  }
  if (this != in_EAX) {
    bVar1 = FUN_00406a70();
    if (bVar1) {
      if (*(uint *)((int)in_EAX + 0x18) < 8) {
        iVar2 = (int)in_EAX + 4;
      }
      else {
        iVar2 = *(int *)((int)in_EAX + 4);
      }
      puVar3 = (undefined4 *)((int)this + 4);
      _Dst = puVar3;
      if (7 < *(uint *)((int)this + 0x18)) {
        _Dst = (undefined4 *)*puVar3;
      }
      _memcpy_s(_Dst,*(int *)((int)this + 0x18) * 2,(void *)(iVar2 + param_1 * 2),uVar4 * 2);
      *(uint *)((int)this + 0x14) = uVar4;
      if (7 < *(uint *)((int)this + 0x18)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      *(undefined2 *)(uVar4 * 2 + (int)puVar3) = 0;
    }
    return (int)this;
  }
  FUN_00406100();
  FUN_00406100();
  return (int)this;
}

