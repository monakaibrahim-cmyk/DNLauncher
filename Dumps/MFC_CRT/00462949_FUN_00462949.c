// Address: 0x00462949
// Name: FUN_00462949
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_00462949(CFrameWnd *param_1)

{
  _AFX_THREAD_STATE *p_Var1;
  undefined4 local_408 [256];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_408;
  local_408[0] = 0x10;
  *(undefined ***)param_1 = CFrameWnd::vftable;
  CFrameWnd::RemoveFrameWnd(param_1);
  p_Var1 = AfxGetThreadState();
  while (*(CFrameWnd **)(p_Var1 + 0x14c) == param_1) {
    FUN_00460a43(*(undefined4 **)(p_Var1 + 0x150));
  }
  if (*(void **)(param_1 + 0xbc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xbc));
  }
  FUN_00462a60();
  return;
}

