// Address: 0x00402980
// Name: FUN_00402980
// Category: Launcher


void * __thiscall FUN_00402980(void *this,void *param_1,uint param_2,uint param_3)

{
  undefined4 *_Dst;
  int iVar1;
  undefined4 *puVar2;
  uint _MaxCount;
  
  if (*(uint *)((int)param_1 + 0x14) < param_2) {
    FUN_0049573d();
  }
  _MaxCount = *(int *)((int)param_1 + 0x14) - param_2;
  if (param_3 < _MaxCount) {
    _MaxCount = param_3;
  }
  if (this != param_1) {
    if (_MaxCount == 0xffffffff) {
      FUN_004956fe();
    }
    if (*(uint *)((int)this + 0x18) < _MaxCount) {
      FUN_00402af0(this,_MaxCount);
    }
    else if (_MaxCount == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        *(undefined1 *)((int)this + 4) = 0;
        return this;
      }
      **(undefined1 **)((int)this + 4) = 0;
      return this;
    }
    if (_MaxCount != 0) {
      if (*(uint *)((int)param_1 + 0x18) < 0x10) {
        iVar1 = (int)param_1 + 4;
      }
      else {
        iVar1 = *(int *)((int)param_1 + 4);
      }
      puVar2 = (undefined4 *)((int)this + 4);
      _Dst = puVar2;
      if (0xf < *(uint *)((int)this + 0x18)) {
        _Dst = (undefined4 *)*puVar2;
      }
      _memcpy_s(_Dst,*(uint *)((int)this + 0x18),(void *)(iVar1 + param_2),_MaxCount);
      *(uint *)((int)this + 0x14) = _MaxCount;
      if (0xf < *(uint *)((int)this + 0x18)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      *(undefined1 *)((int)puVar2 + _MaxCount) = 0;
    }
    return this;
  }
  FUN_00402a60(this,(undefined4 *)(_MaxCount + param_2),0xffffffff);
  FUN_00402a60(this,(undefined4 *)0x0,param_2);
  return this;
}

