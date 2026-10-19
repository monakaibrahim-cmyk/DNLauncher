// Address: 0x0046cd52
// Name: FUN_0046cd52
// Category: MFC_CRT


uint __thiscall FUN_0046cd52(void *this,ulong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint in_EAX;
  undefined3 extraout_var;
  
  puVar2 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    bVar3 = ATL::CDynamicAccessor::TranslateColumnNo(this,&param_1);
    in_EAX = CONCAT31(extraout_var,bVar3);
    if (bVar3) {
      uVar1 = *(undefined4 *)
               (*(int *)(param_1 * 0x30 + 4 + *(int *)((int)this + 0x14)) + *(int *)((int)this + 8))
      ;
      *puVar2 = uVar1;
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

