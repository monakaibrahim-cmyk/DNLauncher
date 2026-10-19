// Address: 0x0046a842
// Name: FUN_0046a842
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_0046a842(int *param_1)

{
  uint uVar1;
  int local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x46a84e;
  local_18 = param_1[0x1b];
  if (param_1[0x1d] == 0) {
    uVar1 = GetWindowLongW((HWND)param_1[9],-0x10);
    local_18 = local_18 | uVar1 & 0x18000000;
  }
  local_8 = 0;
  local_1c = 1;
  (**(code **)(*param_1 + 0x6c))(0xfffffdfe,0xb,&local_1c);
  if (local_1c != 0) {
    local_18 = local_18 & 0xf7ffffff;
    FUN_0046a8b7();
    return;
  }
  local_18 = local_18 | 0x8000000;
  FUN_0046a8b7();
  return;
}

