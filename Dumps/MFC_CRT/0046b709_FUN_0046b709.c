// Address: 0x0046b709
// Name: FUN_0046b709
// Category: MFC_CRT


undefined4 __fastcall FUN_0046b709(__POSITION *param_1)

{
  void *_Memory;
  __POSITION *p_Var1;
  void **ppvVar2;
  __POSITION *local_8;
  
  local_8 = param_1;
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
    CMapPtrToPtr::RemoveKey
              ((CMapPtrToPtr *)(*(int *)(param_1 + 0x20) + 0x24),*(void **)(param_1 + 0x24));
  }
  (**(code **)(*(int *)param_1 + 0xa0))(0);
  local_8 = *(__POSITION **)(*(int *)(param_1 + 0x20) + 0x44);
  do {
    p_Var1 = local_8;
    if (local_8 == (__POSITION *)0x0) goto LAB_0046b759;
    ppvVar2 = CPtrList::GetNext((CPtrList *)(*(int *)(param_1 + 0x20) + 0x40),&local_8);
    _Memory = *ppvVar2;
  } while (*(__POSITION **)((int)_Memory + 4) != param_1);
  if (p_Var1 != (__POSITION *)0x0) {
    CPtrList::RemoveAt((CPtrList *)(*(int *)(param_1 + 0x20) + 0x40),p_Var1);
    FUN_0046fed9((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
LAB_0046b759:
  (**(code **)(*(int *)param_1 + 4))(1);
  return 1;
}

