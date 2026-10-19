// Address: 0x00437bf9
// Name: FUN_00437bf9
// Category: Utility


undefined4 * __fastcall FUN_00437bf9(undefined4 *param_1)

{
  undefined4 in_EAX;
  void *_Dst;
  int unaff_EBX;
  bool in_ZF;
  
  if (in_ZF) {
    _Dst = FUN_00452728(0x4b8);
    *param_1 = _Dst;
    _memset(_Dst,unaff_EBX,0x4b8);
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  else {
    *param_1 = in_EAX;
    *(char *)(param_1 + 0x80) = (char)unaff_EBX;
  }
  *(char *)(param_1 + 1) = (char)unaff_EBX;
  param_1[0x42] = unaff_EBX;
  param_1[0x41] = unaff_EBX;
  param_1[0x7f] = unaff_EBX;
  _memset(param_1 + 0x43,unaff_EBX,0xf0);
  return param_1;
}

