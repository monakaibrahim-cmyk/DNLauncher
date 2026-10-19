// Address: 0x00459cd8
// Name: CDialog::OnCmdMsg
// Category: Utility


/* Library Function - Single Match
    public: virtual int __thiscall CDialog::OnCmdMsg(unsigned int,int,void *,struct
   AFX_CMDHANDLERINFO *)
   
   Library: Visual Studio 2005 Release */

int __thiscall
CDialog::OnCmdMsg(CDialog *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int *piVar4;
  
  iVar1 = CCmdTarget::OnCmdMsg((CCmdTarget *)this,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    if ((((param_2 == 0) || (param_2 == -1)) && ((short)param_1 < 0)) && (param_1 < 0xf000)) {
      pHVar2 = GetParent(*(HWND *)(this + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      if (pCVar3 != (CWnd *)0x0) {
        iVar1 = (**(code **)(*(int *)pCVar3 + 0xc))(param_1,param_2,param_3,param_4);
        if (iVar1 != 0) goto LAB_00459cf7;
      }
      piVar4 = (int *)FUN_0046419a();
      if (piVar4 != (int *)0x0) {
        iVar1 = (**(code **)(*piVar4 + 0xc))(param_1,param_2,param_3,param_4);
        if (iVar1 != 0) goto LAB_00459cf7;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_00459cf7:
    iVar1 = 1;
  }
  return iVar1;
}

