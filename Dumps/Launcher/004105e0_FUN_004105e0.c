// Address: 0x004105e0
// Name: FUN_004105e0
// Category: Launcher


void FUN_004105e0(undefined4 param_1)

{
  uint uStack_40;
  ULONG_PTR local_30;
  char *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_1c;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_004c3750 ^ 0x4bbb90;
  uStack_40 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  local_1c = (undefined1 *)&uStack_40;
  ExceptionList = &local_14;
  local_30 = 0x1000;
  local_2c = "CDnPatchDownloadThread";
  local_28 = param_1;
  local_24 = 0;
  local_8 = 0;
  RaiseException(0x406d1388,0,4,&local_30);
  ExceptionList = local_14;
  return;
}

