// Address: 0x00454f41
// Name: CWnd::PreTranslateInput
// Category: Utility


/* Library Function - Single Match
    public: int __thiscall CWnd::PreTranslateInput(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWnd::PreTranslateInput(CWnd *this,tagMSG *param_1)

{
  uint uVar1;
  int iVar2;
  LPMSG unaff_retaddr;
  
  uVar1 = param_1->message;
  if (((uVar1 < 0x100) || (0x109 < uVar1)) && ((uVar1 < 0x200 || (0x209 < uVar1)))) {
    iVar2 = 0;
  }
  else {
    iVar2 = FID_conflict_IsDialogMessageW((HWND)param_1,unaff_retaddr);
  }
  return iVar2;
}

