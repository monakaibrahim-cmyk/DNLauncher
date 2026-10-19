// Address: 0x004264a0
// Name: FUN_004264a0
// Category: Launcher


exception * __thiscall FUN_004264a0(void *this,exception *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004979d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::exception::exception(this,param_1);
  local_4 = 0;
  *(undefined ***)this = std::runtime_error::vftable;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_00402980((void *)((int)this + 0xc),param_1 + 0xc,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}

