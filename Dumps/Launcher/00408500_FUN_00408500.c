// Address: 0x00408500
// Name: FUN_00408500
// Category: Launcher


void * __thiscall FUN_00408500(void *this,int param_1,void *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_004986c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; this != (void *)param_1; this = (void *)((int)this + 0x38)) {
    local_8 = 1;
    if (param_2 != (void *)0x0) {
      FUN_00408150(param_2);
    }
    param_2 = (void *)((int)param_2 + 0x38);
  }
  ExceptionList = local_10;
  return param_2;
}

