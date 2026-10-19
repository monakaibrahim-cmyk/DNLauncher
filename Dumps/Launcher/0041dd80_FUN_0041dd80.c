// Address: 0x0041dd80
// Name: FUN_0041dd80
// Category: Launcher


void __fastcall FUN_0041dd80(int *param_1,int *param_2)

{
  int iVar1;
  void *local_470;
  undefined1 *puStack_46c;
  undefined4 local_468;
  undefined **local_464;
  undefined1 local_460 [64];
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined1 local_408 [1024];
  uint local_8;
  
  puStack_46c = &LAB_00498358;
  local_470 = ExceptionList;
  local_8 = DAT_004c3750 ^ (uint)&local_464;
  ExceptionList = &local_470;
  local_468 = 0;
  local_464 = CMD5Checksum::vftable;
  _memset(local_460,0,0x40);
  local_41c = 0;
  local_420 = 0;
  local_418 = 0x67452301;
  local_414 = 0xefcdab89;
  local_410 = 0x98badcfe;
  local_40c = 0x10325476;
  local_468 = CONCAT31(local_468._1_3_,1);
  while( true ) {
    iVar1 = (**(code **)(*param_2 + 0x34))(local_408,0x400);
    if (iVar1 < 1) break;
    FUN_0041e780(&local_464,local_408);
  }
  FUN_0041e560(&local_464,param_1);
  ExceptionList = local_470;
  __security_check_cookie(local_8 ^ (uint)&local_464);
  return;
}

