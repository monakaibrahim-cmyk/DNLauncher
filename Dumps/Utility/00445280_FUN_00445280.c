// Address: 0x00445280
// Name: FUN_00445280
// Category: Utility


void __cdecl FUN_00445280(int param_1,char *param_2)

{
  char local_58 [84];
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)local_58;
  if (param_1 != 0) {
    FUN_00444dc0(param_1,(undefined4 *)param_2);
    param_2 = local_58;
  }
  FUN_004451d0(param_1,param_2);
  __security_check_cookie(local_4 ^ (uint)local_58);
  return;
}

