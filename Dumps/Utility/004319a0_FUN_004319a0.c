// Address: 0x004319a0
// Name: FUN_004319a0
// Category: Utility


uint __fastcall FUN_004319a0(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_28;
  
  uVar1 = thunk_FUN_00431a40();
  if (uVar1 == 0) {
    uVar2 = FUN_00431ca0();
    if (uVar2 == 1) {
      *param_2 = local_28;
      uVar1 = FUN_004323d0();
    }
    else {
      FUN_004323d0();
      uVar1 = 0xfffffffb;
      if (uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return uVar1;
}

