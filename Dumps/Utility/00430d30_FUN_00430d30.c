// Address: 0x00430d30
// Name: FUN_00430d30
// Category: Utility


void __thiscall FUN_00430d30(void *this,byte *param_1,undefined4 *param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  byte *this_00;
  undefined4 local_34;
  void *local_30;
  undefined1 local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004987d8;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&local_34;
  ExceptionList = &local_c;
  local_30 = (void *)((int)this + 0x20);
  FUN_00402d00(local_30,&PTR_004b2d68,0);
  local_34 = FUN_0042d8f0();
  if (param_2 != (undefined4 *)0x0) {
    FUN_0042ed20(param_1,param_3);
    *(undefined4 *)((int)this + 4) = *param_2;
    *(undefined4 *)((int)this + 8) = param_2[1];
  }
  if ((*(char *)((int)this + 0x44) == '\0') &&
     (uVar2 = FUN_0042f4d0(param_1,'\0',param_3), (char)uVar2 == '\0')) {
    FUN_0042f570(local_30,1,"<",param_3);
  }
  else {
    *(undefined1 *)((int)this + 0x44) = 1;
    uVar2 = FUN_0042f4d0(param_1,'\0',param_3);
    if ((char)uVar2 == '\0') {
      FUN_0042fa80(param_2,param_1,param_3);
    }
    else {
      pcVar1 = "<![CDATA[";
      do {
        pcVar3 = pcVar1;
        pcVar1 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      this_00 = param_1 + (int)(pcVar3 + -0x4b4250);
      while (((this_00 != (byte *)0x0 && (*this_00 != 0)) &&
             (uVar2 = FUN_0042f4d0(this_00,'\0',param_3), (char)uVar2 == '\0'))) {
        local_34 = CONCAT31(local_34._1_3_,*this_00);
        FUN_00424db0();
        this_00 = this_00 + 1;
      }
      local_14 = 0xf;
      local_18 = 0;
      local_28 = (void *)((uint)local_28 & 0xffffff00);
      local_4 = 0;
      FUN_0042f570(local_2c,0,"]]>",param_3);
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
    }
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_34);
  return;
}

