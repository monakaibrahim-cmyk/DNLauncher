// Address: 0x0045b3aa
// Name: CWnd::GetNextDlgGroupItem
// Category: Utility


/* Library Function - Single Match
    public: struct COleControlSiteOrWnd * __thiscall CWnd::GetNextDlgGroupItem(struct
   COleControlSiteOrWnd *)const 
   
   Library: Visual Studio 2005 Release */

COleControlSiteOrWnd * __thiscall
CWnd::GetNextDlgGroupItem(CWnd *this,COleControlSiteOrWnd *param_1)

{
  CWnd *local_c;
  CWnd *local_8;
  
  if (*(int *)(this + 0x4c) != 0) {
    local_c = this;
    local_8 = this;
    if (param_1 == (COleControlSiteOrWnd *)0x0) {
      local_8 = (CWnd *)FindSiteOrWndWithFocus(this);
    }
    else {
      local_8 = (CWnd *)FUN_0045b1ab(this,(int)param_1);
    }
    if (local_8 != (CWnd *)0x0) {
      local_c = (CWnd *)(*(int *)(this + 0x4c) + 0x40);
      CDlgGroupRadioButtonIterator::MoveNext((CDlgGroupRadioButtonIterator *)&local_c);
      if (local_8 != (CWnd *)0x0) {
        return *(COleControlSiteOrWnd **)(local_8 + 8);
      }
    }
  }
  return (COleControlSiteOrWnd *)0x0;
}

