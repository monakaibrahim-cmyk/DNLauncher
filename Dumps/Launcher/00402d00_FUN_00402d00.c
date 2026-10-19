// Address: 0x00402d00
// Name: FUN_00402d00
// Category: Launcher


void * __thiscall FUN_00402d00(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)((int)this + 0x18);
  puVar4 = (undefined4 *)((int)this + 4);
  puVar3 = puVar4;
  if (0xf < uVar1) {
    puVar3 = (undefined4 *)*puVar4;
  }
  if (puVar3 <= param_1) {
    puVar3 = puVar4;
    if (0xf < uVar1) {
      puVar3 = (undefined4 *)*puVar4;
    }
    if (param_1 < (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar3)) {
      if (0xf < uVar1) {
        puVar4 = (undefined4 *)*puVar4;
      }
      pvVar2 = FUN_00402980(this,this,(int)param_1 - (int)puVar4,param_2);
      return pvVar2;
    }
  }
  if (param_2 == 0xffffffff) {
    FUN_004956fe();
  }
  if (*(uint *)((int)this + 0x18) < param_2) {
    FUN_00402af0(this,param_2);
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
    return this;
  }
  if (param_2 != 0) {
    puVar3 = puVar4;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar3 = (undefined4 *)*puVar4;
    }
    _memcpy_s(puVar3,*(uint *)((int)this + 0x18),param_1,param_2);
    *(uint *)((int)this + 0x14) = param_2;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    *(undefined1 *)((int)puVar4 + param_2) = 0;
  }
  return this;
}

