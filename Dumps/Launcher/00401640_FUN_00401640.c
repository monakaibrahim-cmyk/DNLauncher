// Address: 0x00401640
// Name: FUN_00401640
// Category: Launcher


void FUN_00401640(wchar_t *param_1,LPRECT param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined4 local_24 [2];
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00497d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_4 = 0;
  pwVar4 = _wcstok(param_1,L".");
  do {
    param_1 = (wchar_t *)thunk_FUN_0047642d(pwVar4);
    piVar1 = local_14;
    if ((local_18 == (int *)0x0) ||
       ((uint)(local_10 - (int)local_18 >> 2) <= (uint)((int)local_14 - (int)local_18 >> 2))) {
      if (local_14 < local_18) {
        FUN_00475b26();
      }
      FUN_00401e30(local_24,&param_1,local_1c,piVar1);
    }
    else {
      *local_14 = (int)param_1;
      local_14 = local_14 + 1;
    }
    pwVar4 = _wcstok((wchar_t *)0x0,L".");
  } while (pwVar4 != (wchar_t *)0x0);
  if ((local_18 == (int *)0x0) || ((uint)((int)local_14 - (int)local_18 >> 2) < 4)) {
    FUN_00475b26();
  }
  piVar1 = local_18 + 3;
  if ((local_18 == (int *)0x0) || ((uint)((int)local_14 - (int)local_18 >> 2) < 3)) {
    FUN_00475b26();
  }
  piVar2 = local_18 + 2;
  if ((local_18 == (int *)0x0) || ((uint)((int)local_14 - (int)local_18 >> 2) < 2)) {
    FUN_00475b26();
  }
  piVar3 = local_18 + 1;
  if ((local_18 == (int *)0x0) || ((int)local_14 - (int)local_18 >> 2 == 0)) {
    FUN_00475b26();
  }
  SetRect(param_2,*local_18,*piVar3,*piVar2,*piVar1);
  if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return;
}

