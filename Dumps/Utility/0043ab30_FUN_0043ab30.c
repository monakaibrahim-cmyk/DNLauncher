// Address: 0x0043ab30
// Name: FUN_0043ab30
// Category: Utility


void __cdecl FUN_0043ab30(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[1] = 0;
  if (param_2 != 0x3e) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    *(undefined4 *)(*param_1 + 0x18) = 0x3e;
    *(int *)(*param_1 + 0x1c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x1b0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x15;
    *(undefined4 *)(*param_1 + 0x18) = 0x1b0;
    *(int *)(*param_1 + 0x1c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar1 = *param_1;
  iVar2 = param_1[3];
  _memset(param_1,0,0x1b0);
  *param_1 = iVar1;
  param_1[3] = iVar2;
  *(undefined1 *)(param_1 + 4) = 1;
  FUN_0043cdc0(param_1);
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2f] = 0;
  param_1[0x43] = 0;
  FUN_0043aab0((int)param_1);
  FUN_0043c280((int)param_1);
  param_1[5] = 200;
  return;
}

