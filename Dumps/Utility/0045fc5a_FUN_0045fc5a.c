// Address: 0x0045fc5a
// Name: FUN_0045fc5a
// Category: Utility


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_0045fc5a(CWnd *param_1)

{
  undefined4 *puVar1;
  _AFX_THREAD_STATE *p_Var2;
  void *pvStack_414;
  undefined4 local_408 [256];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_408;
  local_408[0] = 0x10;
  p_Var2 = AfxGetThreadState();
  while (*(CWnd **)(p_Var2 + 0x144) == param_1) {
    puVar1 = *(undefined4 **)(p_Var2 + 0x148);
    *(undefined4 *)(puVar1[1] + 0x144) = *puVar1;
    *(undefined4 *)(puVar1[1] + 0x148) = puVar1[2];
    puVar1[1] = 0;
  }
  if (*(CDocument **)(param_1 + 0x54) != (CDocument *)0x0) {
    CDocument::RemoveView(*(CDocument **)(param_1 + 0x54),(CView *)param_1);
    FUN_0045fd66();
    return;
  }
  CWnd::~CWnd(param_1);
  ExceptionList = pvStack_414;
  __security_check_cookie(local_8 ^ (uint)local_408);
  return;
}

