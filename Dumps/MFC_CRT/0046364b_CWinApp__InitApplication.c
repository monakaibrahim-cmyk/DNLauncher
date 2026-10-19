// Address: 0x0046364b
// Name: CWinApp::InitApplication
// Category: MFC_CRT


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::InitApplication(void)
   
   Library: Visual Studio 2005 Release */

int __thiscall CWinApp::InitApplication(CWinApp *this)

{
  if (DAT_004caaf8 != 0) {
    if (*(int *)(this + 0x58) == 0) {
      *(int *)(this + 0x58) = DAT_004caaf8;
    }
    DAT_004caaf8 = 0;
  }
  if (*(int **)(this + 0x58) == (int *)0x0) {
    _DAT_004c2d3c = 0;
  }
  else {
    (**(code **)(**(int **)(this + 0x58) + 0xc))(0);
  }
  (**(code **)(*(int *)this + 0xb4))();
  return 1;
}

