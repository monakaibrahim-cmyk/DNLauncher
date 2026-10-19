// Address: 0x0045bd72
// Name: CPaintDC::CPaintDC
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CPaintDC::CPaintDC(class CWnd *)
   
   Library: Visual Studio 2005 Release */

CPaintDC * __thiscall CPaintDC::CPaintDC(CPaintDC *this,CWnd *param_1)

{
  HWND hWnd;
  HDC pHVar1;
  int iVar2;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = vftable;
  hWnd = *(HWND *)(param_1 + 0x20);
  *(HWND *)(this + 0x10) = hWnd;
  pHVar1 = BeginPaint(hWnd,(LPPAINTSTRUCT)(this + 0x14));
  iVar2 = CDC::Attach((CDC *)this,pHVar1);
  if (iVar2 == 0) {
    FUN_0045b5bf();
  }
  return this;
}

