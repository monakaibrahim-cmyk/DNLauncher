// Address: 0x0046cc3e
// Name: FUN_0046cc3e
// Category: MFC_CRT


uint __thiscall FUN_0046cc3e(void *this,ulong param_1,tagDB_NUMERIC *param_2)

{
  bool bVar1;
  uint in_EAX;
  undefined3 extraout_var;
  undefined4 extraout_EAX;
  
  if (param_2 != (tagDB_NUMERIC *)0x0) {
    bVar1 = ATL::CDynamicAccessor::TranslateColumnNo(this,&param_1);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1) {
      ATL::CDynamicAccessor::_GetValue<tagDB_NUMERIC>(this,param_1,param_2);
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

