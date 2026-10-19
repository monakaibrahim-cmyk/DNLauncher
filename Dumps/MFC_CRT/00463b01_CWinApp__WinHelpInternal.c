// Address: 0x00463b01
// Name: CWinApp::WinHelpInternal
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CWinApp::WinHelpInternal(unsigned long,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall CWinApp::WinHelpInternal(CWinApp *this,ulong param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0041c6c0();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  *(undefined4 *)(this + 0x5c) = 0;
  PostMessageW((HWND)piVar1[8],0x36a,0,0);
  (**(code **)(*piVar1 + 0x7c))(param_1,param_2);
  return;
}

