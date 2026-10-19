// Address: 0x00463f8a
// Name: FUN_00463f8a
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_00463f8a(undefined4 *param_1)

{
  AFX_MODULE_STATE *pAVar1;
  undefined4 local_408 [256];
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)local_408;
  local_408[0] = 0x10;
  *param_1 = CWinApp::vftable;
  if ((int *)param_1[0x16] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x16] + 4))(1);
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 0x18))(1);
  }
  pAVar1 = AfxGetModuleState();
  if (pAVar1[0x14] == (AFX_MODULE_STATE)0x0) {
    if (DAT_004caafc != (int *)0x0) {
      (**(code **)(*DAT_004caafc + 4))(1);
      DAT_004caafc = (int *)0x0;
    }
    if (DAT_004caaf8 != (int *)0x0) {
      (**(code **)(*DAT_004caaf8 + 4))(1);
      DAT_004caaf8 = (int *)0x0;
    }
  }
  if ((void *)param_1[0x1c] != (void *)0x0) {
    AfxGlobalFree((void *)param_1[0x1c]);
  }
  if ((void *)param_1[0x1d] != (void *)0x0) {
    AfxGlobalFree((void *)param_1[0x1d]);
  }
  if (*(ATOM *)(param_1 + 0x24) != 0) {
    GlobalDeleteAtom(*(ATOM *)(param_1 + 0x24));
  }
  if (*(ATOM *)((int)param_1 + 0x92) != 0) {
    GlobalDeleteAtom(*(ATOM *)((int)param_1 + 0x92));
  }
  if ((int *)param_1[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x23] + 4))(1);
  }
  pAVar1 = AfxGetModuleState();
  if (*(int *)(pAVar1 + 0x10) == param_1[0x14]) {
    *(undefined4 *)(pAVar1 + 0x10) = 0;
  }
  if (*(undefined4 **)(pAVar1 + 4) == param_1) {
    *(undefined4 *)(pAVar1 + 4) = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x14]);
}

