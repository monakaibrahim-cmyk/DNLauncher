// Address: 0x00453041
// Name: FUN_00453041
// Category: Utility


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_00453041(CFile *param_1)

{
  void *pvStack_414;
  undefined4 local_408 [256];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_408;
  local_408[0] = 0x10;
  *(undefined ***)param_1 = CFile::vftable;
  if ((*(int *)(param_1 + 4) != -1) && (*(int *)(param_1 + 8) != 0)) {
    CFile::Close(param_1);
    FUN_0045312b();
    return;
  }
  FUN_004031b0((undefined4 *)(*(int *)(param_1 + 0xc) + -0x10));
  ExceptionList = pvStack_414;
  __security_check_cookie(local_8 ^ (uint)local_408);
  return;
}

