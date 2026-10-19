// Address: 0x00402dd0
// Name: FUN_00402dd0
// Category: Launcher


undefined4 * __thiscall FUN_00402dd0(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00497cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00475b45(this);
  local_4 = 0;
  *(undefined ***)this = std::logic_error::vftable;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_00402980((void *)((int)this + 0xc),param_1,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}

