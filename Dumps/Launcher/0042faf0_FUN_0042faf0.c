// Address: 0x0042faf0
// Name: FUN_0042faf0
// Category: Launcher


undefined4 * FUN_0042faf0(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  void *this;
  undefined4 extraout_ECX_01;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00498f06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pbVar1 = FUN_0042ef30(param_3);
  if (((pbVar1 == (byte *)0x0) || (*pbVar1 == 0)) || (*pbVar1 != 0x3c)) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  iVar2 = FUN_0042d8f0();
  pbVar1 = FUN_0042ef30(param_3);
  if (pbVar1 == (byte *)0x0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  if (*pbVar1 == 0) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  uVar3 = FUN_0042f4d0(pbVar1,'\x01',param_3);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_0042f4d0(pbVar1,'\0',param_3);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_0042f4d0(pbVar1,'\0',param_3);
      if ((char)uVar3 != '\0') {
        puVar5 = FUN_00452728(0x48);
        local_4 = 0;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
          local_4 = 0xffffffff;
          uRam00000044 = 1;
        }
        else {
          puVar5 = FUN_0042d1a0(this,puVar5);
          local_4 = 0xffffffff;
          *(undefined1 *)(puVar5 + 0x11) = 1;
        }
        goto LAB_0042fcb4;
      }
      uVar3 = FUN_0042f4d0(pbVar1,'\0',param_3);
      if (((char)uVar3 == '\0') && ((iVar6 = FUN_0042ece0(), iVar6 != 0 || (pbVar1[1] == 0x5f)))) {
        puVar5 = FUN_00452728(0x98);
        local_4 = 1;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = FUN_0042d920(this_00,puVar5);
        }
        local_4 = 0xffffffff;
        goto LAB_0042fcb4;
      }
      pvVar4 = FUN_00452728(0x44);
      if (pvVar4 != (void *)0x0) {
        puVar5 = (undefined4 *)FUN_0042d610(extraout_ECX_01,3);
        *puVar5 = TiXmlUnknown::vftable;
        goto LAB_0042fcb4;
      }
    }
    else {
      pvVar4 = FUN_00452728(0x44);
      if (pvVar4 != (void *)0x0) {
        puVar5 = (undefined4 *)FUN_0042d610(extraout_ECX_00,2);
        *puVar5 = TiXmlComment::vftable;
        goto LAB_0042fcb4;
      }
    }
  }
  else {
    pvVar4 = FUN_00452728(0x98);
    if (pvVar4 != (void *)0x0) {
      puVar5 = (undefined4 *)FUN_0042d260(extraout_ECX);
      goto LAB_0042fcb4;
    }
  }
  puVar5 = (undefined4 *)0x0;
LAB_0042fcb4:
  if (puVar5 == (undefined4 *)0x0) {
    if (iVar2 != 0) {
      FUN_0042fa80((void *)0x0,(byte *)0x0,0);
    }
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  puVar5[4] = param_1;
  ExceptionList = local_c;
  return puVar5;
}

