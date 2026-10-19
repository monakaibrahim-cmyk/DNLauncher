// Address: 0x004451d0
// Name: FUN_004451d0
// Category: Utility


void __cdecl FUN_004451d0(int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == 0) {
    FUN_00444fa0(param_2);
  }
  else {
    if (((*(uint *)(param_1 + 0x6c) & 0xc0000) != 0) && (*param_2 == '#')) {
      iVar1 = 1;
      do {
        if (param_2[iVar1] == ' ') break;
        if (param_2[iVar1 + 1] == ' ') {
          iVar1 = iVar1 + 1;
          break;
        }
        iVar1 = iVar1 + 2;
      } while (iVar1 < 0xf);
    }
    if (*(code **)(param_1 + 0x44) != (code *)0x0) {
      (**(code **)(param_1 + 0x44))(param_1,param_2 + iVar1);
      return;
    }
  }
  return;
}

