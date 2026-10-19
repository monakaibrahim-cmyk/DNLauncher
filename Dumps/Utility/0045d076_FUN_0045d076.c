// Address: 0x0045d076
// Name: FUN_0045d076
// Category: Utility


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_0045d076(CImageList *param_1)

{
  void *local_414;
  undefined4 local_408 [256];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_408;
  local_408[0] = 0xc;
  *(undefined ***)param_1 = CImageList::vftable;
  CImageList::DeleteImageList(param_1);
  ExceptionList = local_414;
  __security_check_cookie(local_8 ^ (uint)local_408);
  return;
}

