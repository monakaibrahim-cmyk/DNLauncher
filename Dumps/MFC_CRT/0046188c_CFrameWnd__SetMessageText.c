// Address: 0x0046188c
// Name: CFrameWnd::SetMessageText
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CFrameWnd::SetMessageText(unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CFrameWnd::SetMessageText(CFrameWnd *this,uint param_1)

{
  SendMessageW(*(HWND *)(this + 0x20),0x362,param_1,0);
  return;
}

