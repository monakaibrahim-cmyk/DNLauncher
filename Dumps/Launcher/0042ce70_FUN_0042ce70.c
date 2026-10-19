// Address: 0x0042ce70
// Name: FUN_0042ce70
// Category: Launcher


void __thiscall FUN_0042ce70(void *this,char param_1)

{
  uint uVar1;
  undefined1 local_98 [4];
  undefined1 local_94;
  undefined4 local_84;
  undefined4 local_80;
  undefined **local_7c [10];
  undefined **local_54 [10];
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049822e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != '\0') {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,(byte *)0x0);
  }
  uVar1 = *(uint *)((int)this + 0xc) & *(uint *)((int)this + 8);
  if ((uVar1 & 4) != 0) {
    local_80 = 0xf;
    local_84 = 0;
    local_94 = 0;
    FUN_00402d00(local_98,(undefined4 *)"ios_base::badbit set",0x14);
    local_4 = 0;
    FUN_00426570(local_7c,local_98);
    local_7c[0] = std::ios_base::failure::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_7c,&DAT_004bbb80);
  }
  if ((uVar1 & 2) != 0) {
    FUN_00402cc0(local_98,"ios_base::failbit set");
    local_4 = 1;
    FUN_00426570(local_7c,local_98);
    local_7c[0] = std::ios_base::failure::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_7c,&DAT_004bbb80);
  }
  FUN_00402cc0(local_2c,"ios_base::eofbit set");
  local_4 = 2;
  FUN_00426570(local_54,local_2c);
  local_54[0] = std::ios_base::failure::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_54,&DAT_004bbb80);
}

