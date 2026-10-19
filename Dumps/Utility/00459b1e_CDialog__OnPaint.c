// Address: 0x00459b1e
// Name: CDialog::OnPaint
// Category: Utility


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CDialog::OnPaint(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CDialog::OnPaint(CDialog *this)

{
  int iVar1;
  CPaintDC local_68 [96];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x459b2a;
  CPaintDC::CPaintDC(local_68,(CWnd *)this);
  local_8 = 0;
  iVar1 = CWnd::PaintWindowlessControls((CWnd *)this,(CDC *)local_68);
  if (iVar1 == 0) {
    CWnd::Default((CWnd *)this);
  }
  local_8 = 0xffffffff;
  CPaintDC::~CPaintDC(local_68);
  FUN_0047b7a6();
  return;
}

