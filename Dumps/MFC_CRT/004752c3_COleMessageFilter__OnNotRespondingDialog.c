// Address: 0x004752c3
// Name: COleMessageFilter::OnNotRespondingDialog
// Category: MFC_CRT


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall COleMessageFilter::OnNotRespondingDialog(struct HTASK__ *)
   
   Library: Visual Studio 2005 Release */

int __thiscall COleMessageFilter::OnNotRespondingDialog(COleMessageFilter *this,HTASK__ *param_1)

{
  int iVar1;
  COleBusyDialog local_c4 [164];
  HTASK__ *local_20;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb4;
  local_8 = 0x4752d2;
  COleBusyDialog::COleBusyDialog(local_c4,param_1,1,0,(CWnd *)0x0);
  param_1 = (HTASK__ *)0xffffffff;
  local_8 = 1;
  iVar1 = COleBusyDialog::DoModal(local_c4);
  if (iVar1 == 1) {
    param_1 = local_20;
  }
  local_8 = 0xffffffff;
  FUN_00475647((CDialog *)local_c4);
  return (int)param_1;
}

