// Address: 0x0041c490
// Name: FUN_0041c490
// Category: Launcher


undefined4 __thiscall FUN_0041c490(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  AFX_MODULE_STATE *pAVar2;
  eActCtxResult eVar3;
  undefined4 uVar4;
  ulong *puVar5;
  ulong local_24;
  undefined4 local_20;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_004c3750 ^ 0x4bbc80;
  uVar1 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_14;
  local_24 = 0;
  puVar5 = &local_24;
  pAVar2 = AfxGetModuleState();
  eVar3 = AfxActivateActCtxWrapper(*(void **)(pAVar2 + 0x80),puVar5);
  uVar4 = 0xffffffff;
  local_20 = 0xffffffff;
  if (eVar3 != 0) {
    local_8 = 0;
    FUN_0041c580();
    if (*(code **)((int)this + 0x44) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004529e8();
    }
    uVar4 = (**(code **)((int)this + 0x44))(param_1,param_2,0xffff00,uVar1);
    local_8 = 0xfffffffe;
    local_20 = uVar4;
    FUN_0041c545();
  }
  ExceptionList = local_14;
  return uVar4;
}

