// Address: 0x00463b3e
// Name: FUN_00463b3e
// Category: MFC_CRT


void __fastcall FUN_00463b3e(CActivationContext *param_1)

{
  if ((DAT_004cab04 != (code *)0x0) && (*(int *)param_1 != -1)) {
    CActivationContext::Deactivate(param_1);
    (*DAT_004cab04)(*(undefined4 *)param_1);
  }
  return;
}

