// Address: 0x0045bc54
// Name: CClientDC::CClientDC
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CClientDC::CClientDC(class CWnd *)
   
   Library: Visual Studio 2005 Release */

CClientDC * __thiscall CClientDC::CClientDC(CClientDC *this,CWnd *param_1)

{
  HWND hWnd;
  HDC pHVar1;
  int iVar2;
  
  hWnd = (HWND)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = vftable;
  if (param_1 != (CWnd *)0x0) {
    hWnd = *(HWND *)(param_1 + 0x20);
  }
  *(HWND *)(this + 0x10) = hWnd;
  pHVar1 = GetDC(hWnd);
  iVar2 = CDC::Attach((CDC *)this,pHVar1);
  if (iVar2 == 0) {
    FUN_0045b5bf();
  }
  return this;
}

