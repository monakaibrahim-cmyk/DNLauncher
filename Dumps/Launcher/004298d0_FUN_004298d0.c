// Address: 0x004298d0
// Name: FUN_004298d0
// Category: Launcher


DWORD FUN_004298d0(int param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  LONG LVar3;
  DWORD DVar4;
  LONG local_4;
  
  if (*(HANDLE *)(param_1 + 8) == (HANDLE)0xffffffff) {
    DVar4 = 0xffffffff;
    LVar3 = -1;
  }
  else {
    local_4 = 0;
    DVar4 = SetFilePointer(*(HANDLE *)(param_1 + 8),0,&local_4,1);
    LVar3 = local_4;
    if ((DVar4 == 0xffffffff) && (DVar1 = GetLastError(), LVar3 = local_4, DVar1 != 0)) {
      DVar4 = 0xffffffff;
      local_4 = -1;
      LVar3 = local_4;
    }
  }
  if (*(HANDLE *)(param_1 + 8) == (HANDLE)0xffffffff) {
    DVar1 = 0xffffffff;
  }
  else {
    local_4 = 0;
    DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 8),0,&local_4,2);
    if ((DVar1 == 0xffffffff) && (DVar2 = GetLastError(), DVar2 != 0)) {
      DVar1 = 0xffffffff;
    }
  }
  if ((*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) &&
     (local_4 = LVar3, DVar4 = SetFilePointer(*(HANDLE *)(param_1 + 8),DVar4,&local_4,0),
     DVar4 == 0xffffffff)) {
    GetLastError();
  }
  return DVar1;
}

