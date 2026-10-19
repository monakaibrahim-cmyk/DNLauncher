// Address: 0x0044eb60
// Name: FUN_0044eb60
// Category: Utility


uint __cdecl FUN_0044eb60(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0044da10(param_2);
  if (0x7fffffff < uVar1) {
    FUN_00445110(param_1,"PNG unsigned integer out of range.");
  }
  return uVar1;
}

