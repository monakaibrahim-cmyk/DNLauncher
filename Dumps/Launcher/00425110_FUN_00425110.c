// Address: 0x00425110
// Name: FUN_00425110
// Category: Launcher


void __fastcall FUN_00425110(size_t param_1,char param_2)

{
  int in_EAX;
  int unaff_ESI;
  
  if (param_1 != 1) {
    if (0xf < *(uint *)(in_EAX + 0x18)) {
      _memset((void *)(*(int *)(in_EAX + 4) + unaff_ESI),(int)param_2,param_1);
      return;
    }
    _memset((void *)(in_EAX + 4 + unaff_ESI),(int)param_2,param_1);
    return;
  }
  if (0xf < *(uint *)(in_EAX + 0x18)) {
    *(char *)(*(int *)(in_EAX + 4) + unaff_ESI) = param_2;
    return;
  }
  *(char *)(in_EAX + 4 + unaff_ESI) = param_2;
  return;
}

