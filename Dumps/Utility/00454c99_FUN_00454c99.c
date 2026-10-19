// Address: 0x00454c99
// Name: FUN_00454c99
// Category: Utility


undefined4 FUN_00454c99(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    *param_2 = 0;
    uVar1 = 0x80004001;
  }
  return uVar1;
}

