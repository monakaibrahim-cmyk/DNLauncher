// Address: 0x00463a09
// Name: CActivationContext::Release
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CActivationContext::Release(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CActivationContext::Release(CActivationContext *this)

{
  if ((DAT_004cab04 != (code *)0x0) && (*(int *)this != -1)) {
    Deactivate(this);
    (*DAT_004cab04)(*(undefined4 *)this);
  }
  return;
}

