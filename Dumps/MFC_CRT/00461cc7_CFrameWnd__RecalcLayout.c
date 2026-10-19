// Address: 0x00461cc7
// Name: CFrameWnd::RecalcLayout
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::RecalcLayout(int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::RecalcLayout(CFrameWnd *this,int param_1)

{
  uint uVar1;
  ulong uVar2;
  tagRECT local_14;
  
  if (*(int *)(this + 200) == 0) {
    uVar1 = *(uint *)(this + 0xd0);
    *(undefined4 *)(this + 200) = 1;
    if ((uVar1 & 4) != 0) {
      param_1 = 1;
    }
    *(uint *)(this + 0xd0) = uVar1 & 0xfffffff3;
    if ((param_1 != 0) && (*(int **)(this + 0x80) != (int *)0x0)) {
      (**(code **)(**(int **)(this + 0x80) + 0x50))();
    }
    uVar2 = CWnd::GetExStyle((CWnd *)this);
    if ((uVar2 & 0x2000) == 0) {
      CWnd::RepositionBars((CWnd *)this,0,0xffff,0xe900,2,(tagRECT *)(this + 0x70),(tagRECT *)0x0,1)
      ;
    }
    else {
      local_14.right = 0x7fff;
      local_14.bottom = 0x7fff;
      local_14.left = 0;
      local_14.top = 0;
      CWnd::RepositionBars((CWnd *)this,0,0xffff,0xe900,1,&local_14,&local_14,0);
      CWnd::RepositionBars((CWnd *)this,0,0xffff,0xe900,2,(tagRECT *)(this + 0x70),&local_14,1);
      (**(code **)(*(int *)this + 0x68))(&local_14,0);
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,local_14.right - local_14.left,
                         local_14.bottom - local_14.top,0x16);
    }
    *(undefined4 *)(this + 200) = 0;
  }
  return;
}

