// Address: 0x00429170
// Name: FUN_00429170
// Category: Launcher


bool __fastcall FUN_00429170(DWORD param_1,LPCVOID param_2,HANDLE param_3)

{
  BOOL BVar1;
  DWORD local_4;
  
  local_4 = 0;
  BVar1 = WriteFile(param_3,param_2,param_1,&local_4,(LPOVERLAPPED)0x0);
  return BVar1 != 0;
}

