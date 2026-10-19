// Address: 0x004572ed
// Name: CWnd::~CWnd
// Category: Utility


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual __thiscall CWnd::~CWnd(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWnd::~CWnd(CWnd *this)

{
  int iVar1;
  
  *(undefined ***)this = vftable;
  if ((((*(int *)(this + 0x20) != 0) && (this != (CWnd *)&DAT_004ca750)) &&
      (this != (CWnd *)&DAT_004ca7a8)) &&
     ((this != (CWnd *)&DAT_004ca800 && (this != (CWnd *)&DAT_004ca858)))) {
    DestroyWindow(this);
  }
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))(1);
  }
  iVar1 = *(int *)(this + 0x50);
  if ((iVar1 != 0) && (*(CWnd **)(iVar1 + 0x28) == this)) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  CCmdTarget::~CCmdTarget((CCmdTarget *)this);
  return;
}

