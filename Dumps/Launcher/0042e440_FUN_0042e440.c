// Address: 0x0042e440
// Name: FUN_0042e440
// Category: Launcher


void __thiscall FUN_0042e440(void *this,FILE *param_1,int param_2)

{
  undefined1 local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498138;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)local_2c;
  ExceptionList = &local_c;
  if (*(char *)((int)this + 0x44) == '\0') {
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    local_4 = 0;
    FUN_0042d400(local_2c,(int)this + 0x20);
    FUN_00477353(param_1,&DAT_004b0650);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  else {
    FUN_00477353(param_1,&DAT_004b4174);
    if (0 < param_2) {
      do {
        FUN_00477353(param_1,&DAT_004b416c);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    if (*(uint *)((int)this + 0x38) < 0x10) {
      FUN_00477353(param_1,(byte *)"<![CDATA[%s]]>\n");
    }
    else {
      FUN_00477353(param_1,(byte *)"<![CDATA[%s]]>\n");
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_2c);
  return;
}

