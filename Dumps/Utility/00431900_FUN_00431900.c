// Address: 0x00431900
// Name: FUN_00431900
// Category: Utility


int __fastcall FUN_00431900(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *unaff_ESI;
  int local_3c;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_2c = *unaff_ESI;
  local_1c = 0;
  local_18 = 0;
  local_38 = param_1;
  local_30 = param_2;
  iVar1 = FUN_00426990(&local_3c,"1.2.3",0x38);
  if (iVar1 == 0) {
    iVar1 = FUN_00426ac0(&local_3c,4);
    if (iVar1 != 1) {
      FUN_004280b0((int)&local_3c);
      if ((iVar1 != 2) && ((iVar1 != -5 || (local_38 != 0)))) {
        return iVar1;
      }
      return -3;
    }
    *unaff_ESI = local_28;
    iVar1 = FUN_004280b0((int)&local_3c);
  }
  return iVar1;
}

