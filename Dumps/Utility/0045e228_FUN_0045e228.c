// Address: 0x0045e228
// Name: FUN_0045e228
// Category: Utility


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_0045e228(CScrollView *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  void *pvStack_414;
  undefined4 local_408 [256];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_408;
  local_408[0] = 0x10;
  *(undefined ***)param_1 = CFormView::vftable;
  if (*(int *)(param_1 + 0x94) != 0) {
    pAVar1 = AfxGetModuleState();
    if (*(int **)(pAVar1 + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(pAVar1 + 0x3c) + 0x18))(*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x94) = 0;
      FUN_0045e327();
      return;
    }
  }
  CScrollView::~CScrollView(param_1);
  ExceptionList = pvStack_414;
  __security_check_cookie(local_8 ^ (uint)local_408);
  return;
}

