// Address: 0x004491a0
// Name: FUN_004491a0
// Category: Utility


void __cdecl FUN_004491a0(int *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 9) == '\x10') {
    puVar1 = param_2;
    for (iVar2 = (uint)*(byte *)((int)param_1 + 10) * *param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 *)((int)param_1 + 9) = 8;
    *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 10) * '\b';
    param_1[1] = (uint)*(byte *)((int)param_1 + 10) * *param_1;
  }
  return;
}

