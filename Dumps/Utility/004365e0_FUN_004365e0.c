// Address: 0x004365e0
// Name: FUN_004365e0
// Category: Utility


void __fastcall FUN_004365e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  iVar1 = FUN_00434f20(param_1[5]);
  param_1[1] = iVar1 + -1;
  iVar1 = FUN_00434f20(param_1[5]);
  iVar2 = FUN_00434f30(param_1[5]);
  iVar3 = FUN_00434b20((void *)param_1[5],0);
  param_1[4] = iVar3 + iVar2 * (iVar1 + -1);
  return;
}

