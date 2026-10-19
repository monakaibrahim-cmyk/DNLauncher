// Address: 0x00429140
// Name: FUN_00429140
// Category: Launcher


undefined4 __fastcall FUN_00429140(LPVOID param_1,HANDLE param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  DWORD unaff_ESI;
  DWORD local_4;
  
  local_4 = 0;
  BVar1 = ReadFile(param_2,param_1,unaff_ESI,&local_4,(LPOVERLAPPED)0x0);
  if ((BVar1 == 0) || ((uVar2 = 1, unaff_ESI != 0 && (local_4 == 0)))) {
    uVar2 = 0;
  }
  return uVar2;
}

