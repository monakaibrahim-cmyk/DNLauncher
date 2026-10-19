// Address: 0x00437f80
// Name: FUN_00437f80
// Category: Utility


void FUN_00437f80(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *extraout_EDX;
  int *extraout_EDX_00;
  
  uVar1 = FUN_00437ca0((undefined1 *)(param_1 + 3));
  *(uint *)(*extraout_EDX + 100) = CONCAT22(extraout_var,uVar1);
  uVar1 = FUN_00437ca0((undefined1 *)(param_1 + 5));
  *(uint *)(*extraout_EDX_00 + 0x68) = CONCAT22(extraout_var_00,uVar1);
  if (*(char *)(param_1 + 7) == '\x03') {
    *(undefined4 *)(*extraout_EDX_00 + 0x70) = 1;
    *(undefined4 *)(*extraout_EDX_00 + 0x74) = param_2;
    return;
  }
  *(undefined4 *)(*extraout_EDX_00 + 0x70) = 0;
  *(undefined4 *)(*extraout_EDX_00 + 0x74) = param_2;
  return;
}

