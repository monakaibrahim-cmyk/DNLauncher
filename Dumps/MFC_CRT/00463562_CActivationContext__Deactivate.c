// Address: 0x00463562
// Name: CActivationContext::Deactivate
// Category: MFC_CRT


/* Library Function - Single Match
    public: bool __thiscall CActivationContext::Deactivate(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

bool __thiscall CActivationContext::Deactivate(CActivationContext *this)

{
  int iVar1;
  
  if ((DAT_004cab0c != (code *)0x0) && (iVar1 = *(int *)(this + 4), iVar1 != 0)) {
    *(undefined4 *)(this + 4) = 0;
    iVar1 = (*DAT_004cab0c)(0,iVar1);
    return (bool)('\x01' - (iVar1 != 1));
  }
  return true;
}

