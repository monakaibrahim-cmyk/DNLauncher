// Address: 0x0046057b
// Name: CFrameWnd::PreTranslateMessage
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual int __thiscall CFrameWnd::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2005 Release */

int __thiscall CFrameWnd::PreTranslateMessage(CFrameWnd *this,tagMSG *param_1)

{
  int iVar1;
  HACCEL hAccTable;
  
  if (param_1 == (tagMSG *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if ((param_1->message == 0x201) || (param_1->message == 0xa1)) {
    AfxCancelModes(param_1->hwnd);
  }
  iVar1 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  if (iVar1 == 0) {
    if (*(int *)(this + 0x80) != 0) {
      iVar1 = (**(code **)(**(int **)(this + 0x80) + 0x54))(param_1);
      if (iVar1 != 0) goto LAB_004605b0;
    }
    if ((0xff < param_1->message) && (param_1->message < 0x10a)) {
      hAccTable = (HACCEL)(**(code **)(*(int *)this + 0x168))();
      if (hAccTable != (HACCEL)0x0) {
        iVar1 = TranslateAcceleratorW(*(HWND *)(this + 0x20),hAccTable,param_1);
        if (iVar1 != 0) goto LAB_004605b0;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_004605b0:
    iVar1 = 1;
  }
  return iVar1;
}

