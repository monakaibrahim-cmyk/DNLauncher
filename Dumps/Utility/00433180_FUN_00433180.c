// Address: 0x00433180
// Name: FUN_00433180
// Category: Utility


void __fastcall FUN_00433180(undefined4 param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)(param_2 + 0x94);
  iVar2 = 0x11e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(param_2 + 0x988);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(param_2 + 0xa7c);
  iVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_2 + 0x16ac) = 0;
  *(undefined4 *)(param_2 + 0x16a8) = 0;
  *(undefined4 *)(param_2 + 0x16b0) = 0;
  *(undefined4 *)(param_2 + 0x16a0) = 0;
  *(undefined2 *)(param_2 + 0x494) = 1;
  return;
}

