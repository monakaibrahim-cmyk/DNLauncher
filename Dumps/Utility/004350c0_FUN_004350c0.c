// Address: 0x004350c0
// Name: FUN_004350c0
// Category: Utility


void __thiscall FUN_004350c0(void *this,int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined **local_a14 [111];
  undefined **appuStack_858 [111];
  undefined4 local_69c [419];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00495f3c;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)local_a14;
  ExceptionList = &local_c;
  if (param_1 == (int *)0x0) {
    *(undefined4 *)((int)this + 0x44) = s_null_file_handler_0049c964._0_4_;
    *(undefined4 *)((int)this + 0x48) = s_null_file_handler_0049c964._4_4_;
    *(undefined4 *)((int)this + 0x4c) = s_null_file_handler_0049c964._8_4_;
    *(undefined4 *)((int)this + 0x50) = s_null_file_handler_0049c964._12_4_;
    *(undefined2 *)((int)this + 0x54) = s_null_file_handler_0049c964._16_2_;
    goto LAB_004352aa;
  }
  if (param_2 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x14))(DAT_004c3750 ^ (uint)&stack0xfffff5e0);
    FUN_00437070(local_69c);
    local_4 = 0;
    FUN_00434b00(local_69c,(int)this);
    cVar1 = FUN_00437260(local_69c,param_1);
    if (cVar1 != '\0') {
LAB_0043518f:
      FUN_00434b90(this,(int)local_69c,'\x01');
      local_4 = 0xffffffff;
      FUN_004371e0(local_69c);
      goto LAB_004352aa;
    }
    (**(code **)(*param_1 + 0x10))(uVar2,0);
    local_4 = 0xffffffff;
    FUN_004371e0(local_69c);
    FUN_004349c0(appuStack_858,4);
    appuStack_858[0] = CxImagePNG::vftable;
    local_4 = 1;
    FUN_00434b00(appuStack_858,(int)this);
    uVar3 = FUN_00436770(appuStack_858,param_1);
    if ((char)uVar3 != '\0') {
      FUN_00434b90(this,(int)appuStack_858,'\x01');
      local_4 = 0xffffffff;
      appuStack_858[0] = CxImage::vftable;
      FUN_00434a90((int)appuStack_858);
      FUN_004349e0((int)appuStack_858);
      goto LAB_004352aa;
    }
    (**(code **)(*param_1 + 0x10))(uVar2,0);
    local_4 = 0xffffffff;
    appuStack_858[0] = CxImage::vftable;
    FUN_00434a90((int)appuStack_858);
    FUN_004349e0((int)appuStack_858);
  }
  else {
    if (param_2 == 3) {
      FUN_00437070(local_69c);
      local_4 = 2;
      FUN_00434b00(local_69c,(int)this);
      cVar1 = FUN_00437260(local_69c,param_1);
      if (cVar1 == '\0') {
        pcVar4 = (char *)FUN_00434fe0((int)local_69c);
        pcVar6 = (char *)((int)this + 0x44);
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          pcVar4 = pcVar4 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        local_4 = 0xffffffff;
        FUN_004371e0(local_69c);
        goto LAB_004352aa;
      }
      goto LAB_0043518f;
    }
    if (param_2 == 4) {
      FUN_004349c0(local_a14,4);
      local_a14[0] = CxImagePNG::vftable;
      local_4 = 3;
      FUN_00434b00(local_a14,(int)this);
      uVar2 = FUN_00436770(local_a14,param_1);
      if ((char)uVar2 == '\0') {
        pcVar4 = (char *)FUN_00434fe0((int)local_a14);
        pcVar6 = (char *)((int)this + 0x44);
        do {
          cVar1 = *pcVar4;
          *pcVar6 = cVar1;
          pcVar4 = pcVar4 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        local_4 = 0xffffffff;
        local_a14[0] = CxImage::vftable;
        FUN_00434a90((int)local_a14);
        FUN_004349e0((int)local_a14);
      }
      else {
        FUN_00434b90(this,(int)local_a14,'\x01');
        local_4 = 0xffffffff;
        local_a14[0] = CxImage::vftable;
        FUN_00434a90((int)local_a14);
        FUN_004349e0((int)local_a14);
      }
      goto LAB_004352aa;
    }
  }
  pcVar6 = "Decode: Unknown or wrong format";
  puVar7 = (undefined4 *)((int)this + 0x44);
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    puVar7 = puVar7 + 1;
  }
LAB_004352aa:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_a14);
  return;
}

