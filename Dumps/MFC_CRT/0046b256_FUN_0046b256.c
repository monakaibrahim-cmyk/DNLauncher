// Address: 0x0046b256
// Name: FUN_0046b256
// Category: MFC_CRT


uint __thiscall FUN_0046b256(void *this,ulong param_1,undefined2 *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  bVar1 = ATL::CDynamicAccessor::TranslateColumnNo(this,&param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1) && (uVar2 = 0, param_2 != (undefined2 *)0x0)) {
    *param_2 = *(undefined2 *)(param_1 * 0x30 + 0x14 + *(int *)((int)this + 0x14));
    uVar2 = CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  else {
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}

