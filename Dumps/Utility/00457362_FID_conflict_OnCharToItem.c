// Address: 0x00457362
// Name: FID_conflict:OnCharToItem
// Category: Utility


/* Library Function - Multiple Matches With Different Base Names
    protected: int __thiscall CWnd::OnCharToItem(unsigned int,class CListBox *,unsigned int)
    protected: int __thiscall CWnd::OnVKeyToItem(unsigned int,class CListBox *,unsigned int)
   
   Library: Visual Studio 2005 Release */

CWnd * __thiscall FID_conflict_OnCharToItem(void *this,undefined4 param_1,CWnd *param_2)

{
  int iVar1;
  
  if ((param_2 == (CWnd *)0x0) ||
     (iVar1 = CWnd::SendChildNotifyLastMsg(param_2,(long *)&param_2), iVar1 == 0)) {
    param_2 = (CWnd *)CWnd::Default(this);
  }
  return param_2;
}

