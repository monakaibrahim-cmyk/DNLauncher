// Address: 0x00467eb5
// Name: FUN_00467eb5
// Category: MFC_CRT


void __fastcall FUN_00467eb5(int *param_1)

{
  int iVar1;
  int *local_8;
  
  param_1[9] = 0;
  local_8 = param_1;
  if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xc]);
  }
  if ((CMapPtrToPtr *)param_1[0xf] != (CMapPtrToPtr *)0x0) {
    iVar1 = CMapPtrToPtr::Lookup((CMapPtrToPtr *)param_1[0xf],&DAT_00000001,&local_8);
    if ((iVar1 != 0) && (local_8 != (int *)0x0)) {
      (**(code **)(*local_8 + 4))(1);
    }
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 4))(1);
  }
  param_1[0xf] = 0;
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 4))(1);
  }
  param_1[0xe] = 0;
  return;
}

