// Address: 0x0042dac0
// Name: FUN_0042dac0
// Category: Launcher


void __thiscall FUN_0042dac0(void *this,int param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char *unaff_EDI;
  int local_50;
  undefined4 *local_4c;
  undefined1 local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049884b;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)&local_50;
  ExceptionList = &local_c;
  local_50 = param_1;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  pcVar4 = unaff_EDI;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402d00(local_2c,(undefined4 *)unaff_EDI,(int)pcVar4 - (int)(unaff_EDI + 1));
  local_4 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  pcVar4 = this;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00402d00(local_48,this,(int)pcVar4 - ((int)this + 1));
  iVar7 = local_50 + 0x44;
  local_4._0_1_ = 1;
  iVar5 = FUN_0042ea00(iVar7,(int)local_2c);
  if (iVar5 == 0) {
    local_4c = FUN_00452728(0x54);
    local_4._0_1_ = 2;
    if (local_4c == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = FUN_0042cff0(local_4c,unaff_EDI,this);
    }
    local_4._0_1_ = 1;
    if (puVar6 == (undefined4 *)0x0) {
      iVar5 = FUN_0042d8f0();
      if (iVar5 != 0) {
        FUN_0042fa80((void *)0x0,(byte *)0x0,0);
      }
    }
    else {
      FUN_0042e9b0(iVar7);
    }
    pvVar2 = ExceptionList;
    pvVar3 = local_c;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
  }
  else {
    FUN_00402980((void *)(iVar5 + 0x30),local_48,0,0xffffffff);
    pvVar2 = ExceptionList;
    pvVar3 = local_c;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
  }
  ExceptionList = pvVar3;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  local_c = ExceptionList;
  if (local_14 < 0x10) {
    local_30 = 0xf;
    local_34 = 0;
    __security_check_cookie(local_10 ^ (uint)&local_50);
    return;
  }
  local_30 = 0xf;
  local_34 = 0;
  ExceptionList = pvVar2;
                    /* WARNING: Subroutine does not return */
  _free(local_28);
}

