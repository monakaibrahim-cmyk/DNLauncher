// Address: 0x0041e780
// Name: FUN_0041e780
// Category: Launcher


void __thiscall FUN_0041e780(void *this,void *param_1)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x44) + in_EAX * 8;
  uVar1 = *(uint *)((int)this + 0x44) >> 3 & 0x3f;
  *(uint *)((int)this + 0x44) = uVar2;
  if (uVar2 < in_EAX * 8) {
    *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 1;
  }
  *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + (in_EAX >> 0x1d);
  uVar2 = -uVar1 + 0x40;
  if (in_EAX < uVar2) {
    uVar2 = 0;
  }
  else {
    _memcpy((void *)(uVar1 + 4 + (int)this),param_1,uVar2);
    FUN_0041deb0();
    for (uVar1 = -uVar1 + 0x7f; uVar1 < in_EAX; uVar1 = uVar1 + 0x40) {
      FUN_0041deb0();
      uVar2 = uVar2 + 0x40;
    }
    uVar1 = 0;
  }
  _memcpy((void *)(uVar1 + 4 + (int)this),(void *)(uVar2 + (int)param_1),in_EAX - uVar2);
  return;
}

