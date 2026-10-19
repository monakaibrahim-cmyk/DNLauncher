// Address: 0x0041f200
// Name: FUN_0041f200
// Category: Launcher


void __fastcall FUN_0041f200(CWnd *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_10 [3];
  
  puVar1 = *(undefined4 **)(param_1 + 0x7c);
  if (puVar1 < *(undefined4 **)(param_1 + 0x78)) {
    FUN_00475b26();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x78);
  if (*(undefined4 **)(param_1 + 0x7c) < puVar2) {
    FUN_00475b26();
  }
  FUN_00418220(local_10,(int)(param_1 + 0x74),puVar2,(int)(param_1 + 0x74),puVar1);
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0xac));
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 4))(1);
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 4))(1);
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (*(int **)(param_1 + 0xc0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc0) + 4))(1);
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc4) + 4))(1);
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  iVar3 = DAT_004cbcdc;
  if (DAT_004cbcdc != 0) {
    *(undefined4 *)(DAT_004cbcdc + 0x48) = 1;
    if (*(HANDLE *)(iVar3 + 8) != (HANDLE)0xffffffff) {
      WaitForSingleObject(*(HANDLE *)(iVar3 + 8),0xffffffff);
    }
  }
  FUN_00418fd0(L"Thread End");
  if (DAT_004cbcdc != 0) {
    (*(code *)**(undefined4 **)(DAT_004cbcdc + 4))(1);
    DAT_004cbcdc = 0;
  }
  if (DAT_004cbcec != (undefined4 *)0x0) {
    (**(code **)*DAT_004cbcec)(1);
    DAT_004cbcec = (undefined4 *)0x0;
  }
  CWnd::OnDestroy(param_1);
  return;
}

