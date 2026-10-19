// Address: 0x0041dcf0
// Name: FUN_0041dcf0
// Category: Launcher


int * __cdecl FUN_0041dcf0(int *param_1,undefined4 *param_2)

{
  CFile local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004983a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CFile(local_1c,(LPCWSTR)*param_2,0x8020);
  local_4 = 1;
  FUN_0041dd80(param_1,(int *)local_1c);
  local_4 = local_4 & 0xffffff00;
  FUN_00453041(local_1c);
  ExceptionList = local_c;
  return param_1;
}

