// Address: 0x0045af06
// Name: CWnd::RemoveRadioCheckFromGroup
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall CWnd::RemoveRadioCheckFromGroup(struct COleControlSiteOrWnd const
   *)const 
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::RemoveRadioCheckFromGroup(CWnd *this,COleControlSiteOrWnd *param_1)

{
  LRESULT LVar1;
  __POSITION *p_Var2;
  void **ppvVar3;
  ulong uVar4;
  COleControlSiteOrWnd *this_00;
  
  if (*(int *)(this + 0x4c) == 0) {
    return;
  }
  if (param_1 == (COleControlSiteOrWnd *)0x0) {
    return;
  }
  if ((*(int *)(param_1 + 8) == 0) ||
     (LVar1 = SendMessageW(*(HWND *)param_1,0xf0,0,0), this_00 = param_1, LVar1 != 1)) {
    p_Var2 = CPtrList::Find((CPtrList *)(*(int *)(this + 0x4c) + 0x40),param_1,(__POSITION *)0x0);
    param_1 = (COleControlSiteOrWnd *)p_Var2;
    CPtrList::GetNext((CPtrList *)(*(int *)(this + 0x4c) + 0x40),(__POSITION **)&param_1);
    do {
      if (param_1 == (COleControlSiteOrWnd *)0x0) {
LAB_0045afab:
        param_1 = (COleControlSiteOrWnd *)p_Var2;
        CPtrList::GetPrev((CPtrList *)(*(int *)(this + 0x4c) + 0x40),(__POSITION **)&param_1);
        while( true ) {
          if (param_1 == (COleControlSiteOrWnd *)0x0) {
            return;
          }
          ppvVar3 = CPtrList::GetPrev((CPtrList *)(*(int *)(this + 0x4c) + 0x40),
                                      (__POSITION **)&param_1);
          this_00 = *ppvVar3;
          if ((*(int *)(this_00 + 8) != 0) &&
             (LVar1 = SendMessageW(*(HWND *)this_00,0xf0,0,0), LVar1 == 1)) break;
          uVar4 = COleControlSiteOrWnd::GetStyle(this_00);
          if ((uVar4 & 0x20000) != 0) {
            return;
          }
        }
        break;
      }
      ppvVar3 = CPtrList::GetNext((CPtrList *)(*(int *)(this + 0x4c) + 0x40),(__POSITION **)&param_1
                                 );
      this_00 = *ppvVar3;
      uVar4 = COleControlSiteOrWnd::GetStyle(this_00);
      if ((uVar4 & 0x20000) != 0) goto LAB_0045afab;
    } while ((*(int *)(this_00 + 8) == 0) ||
            (LVar1 = SendMessageW(*(HWND *)this_00,0xf0,0,0), LVar1 != 1));
  }
  SendMessageW(*(HWND *)this_00,0xf1,0,0);
  return;
}

