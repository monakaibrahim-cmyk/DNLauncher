// Address: 0x00433120
// Name: FUN_00433120
// Category: Utility


void __fastcall FUN_00433120(undefined4 param_1,int param_2)

{
  *(int *)(param_2 + 0xb18) = param_2 + 0x94;
  *(int *)(param_2 + 0xb30) = param_2 + 0xa7c;
  *(undefined ***)(param_2 + 0xb20) = &PTR_DAT_004c52b8;
  *(int *)(param_2 + 0xb24) = param_2 + 0x988;
  *(undefined ***)(param_2 + 0xb2c) = &PTR_DAT_004c52cc;
  *(undefined **)(param_2 + 0xb38) = &DAT_004c52e0;
  *(undefined2 *)(param_2 + 0x16b8) = 0;
  *(undefined4 *)(param_2 + 0x16bc) = 0;
  *(undefined4 *)(param_2 + 0x16b4) = 8;
  FUN_00433180(param_2 + 0x988,param_2);
  return;
}

