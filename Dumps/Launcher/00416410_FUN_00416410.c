// Address: 0x00416410
// Name: FUN_00416410
// Category: Launcher


undefined4 __fastcall FUN_00416410(short *param_1,int param_2)

{
  short *in_EAX;
  undefined4 uVar1;
  short *psVar2;
  
  uVar1 = 0;
  if (param_2 == 0) {
    return 0x80070057;
  }
  do {
    psVar2 = param_1;
    if (*in_EAX == 0) {
      if (param_2 == 0) {
        psVar2 = psVar2 + -1;
        uVar1 = 0x8007007a;
      }
      *psVar2 = 0;
      return uVar1;
    }
    *psVar2 = *in_EAX;
    in_EAX = in_EAX + 1;
    param_2 = param_2 + -1;
    param_1 = psVar2 + 1;
  } while (param_2 != 0);
  *psVar2 = 0;
  return 0x8007007a;
}

