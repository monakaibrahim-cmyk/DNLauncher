// Address: 0x0043b280
// Name: FUN_0043b280
// Category: Utility


uint __fastcall FUN_0043b280(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  
  if (((((*(char *)(param_2 + 0x48) != '\0') || (*(char *)(param_2 + 0x10a) != '\0')) ||
       (in_EAX = 0, *(int *)(param_2 + 0x28) != 3)) ||
      (((*(int *)(param_2 + 0x24) != 3 || (*(int *)(param_2 + 0x2c) != 2)) ||
       ((*(int *)(param_2 + 100) != 3 ||
        ((iVar1 = *(int *)(param_2 + 0xc4), *(int *)(iVar1 + 8) != 2 ||
         (in_EAX = 1, *(int *)(iVar1 + 0x5c) != 1)))))))) ||
     ((*(int *)(iVar1 + 0xb0) != 1 ||
      (((((2 < *(int *)(iVar1 + 0xc) || (*(int *)(iVar1 + 0x60) != 1)) ||
         (*(int *)(iVar1 + 0xb4) != 1)) ||
        ((iVar2 = *(int *)(param_2 + 0x118), *(int *)(iVar1 + 0x24) != iVar2 ||
         (*(int *)(iVar1 + 0x78) != iVar2)))) || (*(int *)(iVar1 + 0xcc) != iVar2)))))) {
    in_EAX = in_EAX & 0xffffff00;
  }
  return in_EAX;
}

