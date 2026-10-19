// Address: 0x00406ad0
// Name: FUN_00406ad0
// Category: Launcher


void FUN_00406ad0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00497c10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = param_2 | 7;
  if (uVar3 < 0x7fffffff) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = uVar1 >> 1;
    param_2 = uVar3;
    if ((uVar3 / 3 < uVar2) && (uVar1 <= 0x7ffffffe - uVar2)) {
      param_2 = uVar2 + uVar1;
    }
  }
  local_8 = 0;
  FUN_00406c10(param_2 + 1);
  FUN_00406b6c();
  return;
}

