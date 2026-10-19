// Address: 0x00436f80
// Name: FUN_00436f80
// Category: Utility


undefined4 __cdecl FUN_00436f80(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[6] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[6] + -0x14;
  }
  iVar1 = (**(code **)(**(int **)(iVar2 + 0x30) + 8))(*(undefined4 *)(iVar2 + 0x34),1,0x1000);
  if (iVar1 == 0) {
    if (*(char *)(iVar2 + 0x38) != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x2a;
      (**(code **)*param_1)(param_1);
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x78;
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    **(undefined1 **)(iVar2 + 0x34) = 0xff;
    *(undefined1 *)(*(int *)(iVar2 + 0x34) + 1) = 0xd9;
    iVar1 = 2;
  }
  *(int *)(iVar2 + 0x18) = iVar1;
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 0x34);
  *(undefined1 *)(iVar2 + 0x38) = 0;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

