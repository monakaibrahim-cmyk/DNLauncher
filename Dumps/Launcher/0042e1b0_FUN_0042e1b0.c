// Address: 0x0042e1b0
// Name: FUN_0042e1b0
// Category: Launcher


void __fastcall FUN_0042e1b0(int param_1,int param_2,FILE *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  byte local_4c [4];
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
  
  puStack_8 = &LAB_00498170;
  local_c = ExceptionList;
  local_10 = DAT_004c3750 ^ (uint)local_4c;
  ExceptionList = &local_c;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  local_4 = 1;
  FUN_0042d400(local_2c,param_1 + 0x14);
  FUN_0042d400(local_48,param_1 + 0x30);
  local_4c[0] = 0x22;
  iVar1 = FUN_00424e50(param_1 + 0x30,local_4c);
  if (iVar1 == -1) {
    if (param_3 != (FILE *)0x0) {
      FUN_00477353(param_3,(byte *)"%s=\"%s\"");
    }
    if (param_2 == 0) goto LAB_0042e31e;
    FUN_004263a0((int)local_2c,0);
    FUN_004262b0((undefined4 *)&DAT_004b41a0,2);
    FUN_004263a0((int)local_48,0);
    puVar2 = (undefined4 *)&DAT_004b41a4;
  }
  else {
    if (param_3 != (FILE *)0x0) {
      FUN_00477353(param_3,(byte *)"%s=\'%s\'");
    }
    if (param_2 == 0) goto LAB_0042e31e;
    FUN_004263a0((int)local_2c,0);
    FUN_004262b0((undefined4 *)&DAT_004b41b0,2);
    FUN_004263a0((int)local_48,0);
    puVar2 = (undefined4 *)&DAT_004b41b4;
  }
  FUN_004262b0(puVar2,1);
LAB_0042e31e:
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)local_4c);
  return;
}

