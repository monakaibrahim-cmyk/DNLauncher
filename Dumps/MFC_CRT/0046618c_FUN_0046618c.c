// Address: 0x0046618c
// Name: FUN_0046618c
// Category: MFC_CRT


CObject * __cdecl FUN_0046618c(CRuntimeClass *param_1,CObject *param_2)

{
  int iVar1;
  
  if (param_2 != (CObject *)0x0) {
    iVar1 = CObject::IsKindOf(param_2,param_1);
    if (iVar1 != 0) {
      return param_2;
    }
  }
  return (CObject *)0x0;
}

