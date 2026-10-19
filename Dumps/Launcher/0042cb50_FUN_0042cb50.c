// Address: 0x0042cb50
// Name: FUN_0042cb50
// Category: Launcher


void __fastcall FUN_0042cb50(int param_1)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00497da8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 8) == 0x3fffffff) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_00402d00(local_50,(undefined4 *)"list<T> too long",0x10);
    local_4 = 0;
    FUN_00402dd0(local_34,local_50);
    local_34[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_004bba20);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

