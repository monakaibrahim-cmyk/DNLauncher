// Address: 0x0046cc6f
// Name: FUN_0046cc6f
// Category: MFC_CRT


uint __thiscall FUN_0046cc6f(void *this,ulong param_1,undefined4 *param_2)

{
  bool bVar1;
  uint in_EAX;
  undefined3 extraout_var;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    bVar1 = ATL::CDynamicAccessor::TranslateColumnNo(this,&param_1);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1) {
      puVar2 = (undefined4 *)
               (*(int *)(param_1 * 0x30 + 4 + *(int *)((int)this + 0x14)) + *(int *)((int)this + 8))
      ;
      *param_2 = *puVar2;
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(puVar2 + 1);
      return CONCAT31((int3)(param_1 * 0x30 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

