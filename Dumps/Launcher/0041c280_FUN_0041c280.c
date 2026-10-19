// Address: 0x0041c280
// Name: FUN_0041c280
// Category: Launcher


undefined4 __thiscall
FUN_0041c280(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  AFX_MODULE_STATE *pAVar2;
  undefined4 uVar3;
  ulong *puVar4;
  undefined4 local_2c;
  eActCtxResult local_28;
  ulong local_24;
  undefined4 local_20;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_004c3750 ^ 0x4bbc08;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_14;
  local_24 = 0;
  puVar4 = &local_24;
  pAVar2 = AfxGetModuleState();
  local_28 = AfxActivateActCtxWrapper(*(void **)(pAVar2 + 0x80),puVar4);
  local_20 = 0;
  if (local_28 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  local_8 = 0;
  FUN_0041c390(this,&local_2c);
  if (*(code **)((int)this + 0x3c) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  uVar3 = (**(code **)((int)this + 0x3c))(param_1,param_2,param_3,param_4,param_5,param_6,uVar1);
  local_8 = 0xfffffffe;
  local_20 = uVar3;
  FUN_0041c356();
  ExceptionList = local_14;
  return uVar3;
}

