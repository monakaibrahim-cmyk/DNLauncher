// Address: 0x0044d7f0
// Name: FUN_0044d7f0
// Category: Utility


void __cdecl FUN_0044d7f0(void *param_1,undefined *param_2,undefined4 param_3)

{
  undefined1 local_284 [580];
  undefined4 local_40;
  uint local_4;
  
  local_4 = DAT_004c3750 ^ (uint)local_284;
  if (param_1 == (void *)0x0) {
    __security_check_cookie(local_4 ^ (uint)local_284);
    return;
  }
  if (param_2 != (undefined *)0x0) {
    local_40 = param_3;
    (*(code *)param_2)(local_284);
    __security_check_cookie(local_4 ^ (uint)local_284);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}

