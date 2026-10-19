// Address: 0x0040e7a0
// Name: FUN_0040e7a0
// Category: Launcher


void FUN_0040e7a0(void)

{
  undefined1 local_5c [4];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined **local_40 [11];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00497ff8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_44 = 0xf;
  local_48 = 0;
  local_58 = 0;
  FUN_00402d00(local_5c,(undefined4 *)"vector<T> too long",0x12);
  local_c = 0;
  FUN_00402dd0(local_40,local_5c);
  local_40[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_40,&DAT_004bba20);
}

