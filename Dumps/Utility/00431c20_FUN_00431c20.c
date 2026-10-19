// Address: 0x00431c20
// Name: FUN_00431c20
// Category: Utility


void __fastcall FUN_00431c20(undefined4 param_1)

{
  int in_EAX;
  
  *(char *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) = (char)((uint)param_1 >> 8);
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  *(char *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) = (char)param_1;
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
  return;
}

