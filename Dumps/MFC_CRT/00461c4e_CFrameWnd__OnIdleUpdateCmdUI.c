// Address: 0x00461c4e
// Name: CFrameWnd::OnIdleUpdateCmdUI
// Category: MFC_CRT


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnIdleUpdateCmdUI(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::OnIdleUpdateCmdUI(CFrameWnd *this)

{
  if ((*(uint *)(this + 0xd0) & 1) != 0) {
    *(uint *)(this + 0xd0) = *(uint *)(this + 0xd0) & 0xfffffffe;
    (**(code **)(*(int *)this + 0x164))(*(undefined4 *)(this + 0xc0));
  }
  if (((byte)this[0xd0] & 2) != 0) {
    (**(code **)(*(int *)this + 0x160))(1);
  }
  if ((*(uint *)(this + 0xd0) & 8) != 0) {
    (**(code **)(*(int *)this + 0x148))(*(uint *)(this + 0xd0) & 4);
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  if (*(uint *)(this + 0xa8) != *(uint *)(this + 0xac)) {
    SetMessageText(this,*(uint *)(this + 0xa8));
  }
  *(undefined4 *)(this + 0xd0) = 0;
  return;
}

