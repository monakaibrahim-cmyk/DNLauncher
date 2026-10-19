// Address: 0x00437070
// Name: FUN_00437070
// Category: Utility


undefined4 * __fastcall FUN_00437070(undefined4 *param_1)

{
  FUN_004349c0(param_1,3);
  *param_1 = CxImageJPG::vftable;
  param_1[0x6f] = 0;
  _memset(param_1 + 0x70,0,0x4b8);
  return param_1;
}

