// Address: 0x004537bc
// Name: FUN_004537bc
// Category: Utility


void __fastcall FUN_004537bc(undefined4 *param_1)

{
  *param_1 = _AFX_THREAD_STATE::vftable;
  if ((HHOOK)param_1[0xb] != (HHOOK)0x0) {
    UnhookWindowsHookEx((HHOOK)param_1[0xb]);
  }
  if ((HHOOK)param_1[10] != (HHOOK)0x0) {
    UnhookWindowsHookEx((HHOOK)param_1[10]);
  }
  if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  return;
}

