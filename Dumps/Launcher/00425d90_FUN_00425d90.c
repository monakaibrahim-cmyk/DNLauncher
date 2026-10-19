// Address: 0x00425d90
// Name: FUN_00425d90
// Category: Launcher


long __fastcall FUN_00425d90(int param_1)

{
  long _Offset;
  long lVar1;
  
  _Offset = _ftell(*(FILE **)(param_1 + 4));
  _fseek(*(FILE **)(param_1 + 4),0,2);
  lVar1 = _ftell(*(FILE **)(param_1 + 4));
  _fseek(*(FILE **)(param_1 + 4),_Offset,0);
  return lVar1;
}

