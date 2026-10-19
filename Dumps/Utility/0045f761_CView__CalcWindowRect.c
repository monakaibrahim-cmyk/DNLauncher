// Address: 0x0045f761
// Name: CView::CalcWindowRect
// Category: Utility


/* Library Function - Single Match
    public: virtual void __thiscall CView::CalcWindowRect(struct tagRECT *,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CView::CalcWindowRect(CView *this,tagRECT *param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  
  if (param_1 == (tagRECT *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (param_2 == 0) {
    CWnd::CalcWindowRect((CWnd *)this,param_1,0);
  }
  else {
    uVar1 = CWnd::GetExStyle((CWnd *)this);
    AdjustWindowRectEx(param_1,0,0,uVar1);
    uVar1 = CWnd::GetExStyle((CWnd *)this);
    if ((uVar1 & 0x200000) != 0) {
      iVar2 = DAT_004cab28;
      if ((uVar1 & 0x800000) != 0) {
        iVar2 = DAT_004cab28 + -1;
      }
      param_1->right = param_1->right + iVar2;
    }
    if ((uVar1 & 0x100000) != 0) {
      iVar2 = DAT_004cab2c;
      if ((uVar1 & 0x800000) != 0) {
        iVar2 = DAT_004cab2c + -1;
      }
      param_1->bottom = param_1->bottom + iVar2;
    }
  }
  return;
}

