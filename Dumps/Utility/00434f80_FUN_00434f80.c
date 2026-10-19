// Address: 0x00434f80
// Name: FUN_00434f80
// Category: Utility


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort __fastcall FUN_00434f80(int param_1)

{
  undefined2 in_FPUControlWord;
  undefined1 local_4;
  
  local_4 = (undefined1)(int)ROUND(*(float *)(param_1 + 0x154) + (float)_DAT_004b4728);
  return CONCAT11((char)((ushort)in_FPUControlWord >> 8),local_4) | 0xc00;
}

