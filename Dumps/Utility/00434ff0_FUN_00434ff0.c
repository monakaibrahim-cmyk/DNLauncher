// Address: 0x00434ff0
// Name: FUN_00434ff0
// Category: Utility


undefined4 FUN_00434ff0(int param_1)

{
  byte bVar1;
  undefined3 extraout_var;
  int iVar3;
  undefined3 extraout_var_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar2;
  
  bVar1 = FUN_00434f50(param_1);
  iVar2 = CONCAT31(extraout_var,bVar1);
  iVar3 = extraout_EDX;
  if (iVar2 == 0) {
    iVar3 = FUN_00434f40(extraout_EDX);
    bVar1 = FUN_00434f50(iVar3);
    iVar2 = CONCAT31(extraout_var_00,bVar1);
    iVar3 = extraout_EDX_00;
  }
  return *(undefined4 *)(iVar3 + 0x18c + iVar2 * 4);
}

