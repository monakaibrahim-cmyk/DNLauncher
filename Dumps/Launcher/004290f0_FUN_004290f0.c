// Address: 0x004290f0
// Name: FUN_004290f0
// Category: Launcher


undefined8 __fastcall
FUN_004290f0(undefined4 param_1,DWORD param_2,HANDLE param_3,LONG param_4,LONG param_5)

{
  DWORD DVar1;
  DWORD DVar2;
  LONG local_4;
  
  local_4 = param_5;
  DVar1 = SetFilePointer(param_3,param_4,&local_4,param_2);
  if ((DVar1 == 0xffffffff) && (DVar2 = GetLastError(), DVar2 != 0)) {
    return 0xffffffffffffffff;
  }
  return CONCAT44(local_4,DVar1);
}

