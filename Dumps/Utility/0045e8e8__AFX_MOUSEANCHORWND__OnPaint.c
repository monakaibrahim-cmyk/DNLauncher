// Address: 0x0045e8e8
// Name: _AFX_MOUSEANCHORWND::OnPaint
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall _AFX_MOUSEANCHORWND::OnPaint(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall _AFX_MOUSEANCHORWND::OnPaint(_AFX_MOUSEANCHORWND *this)

{
  tagRECT local_6c;
  CPaintDC local_5c [4];
  HDC local_58;
  uint local_8;
  
  local_8 = DAT_004c3750 ^ (uint)&stack0xfffffffc;
  CPaintDC::CPaintDC(local_5c,(CWnd *)this);
  GetClientRect(*(HWND *)(this + 0x20),&local_6c);
  local_6c.left = local_6c.left + 1;
  local_6c.top = local_6c.top + 1;
  local_6c.right = local_6c.right + -1;
  local_6c.bottom = local_6c.bottom + -1;
  CDC::Ellipse((CDC *)local_5c,&local_6c);
  DrawIcon(local_58,0,0,*(HICON *)(this + 0x74));
  CPaintDC::~CPaintDC(local_5c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

