// Address: 0x00463535
// Name: CActivationContext::Activate
// Category: MFC_CRT


/* Library Function - Single Match
    public: bool __thiscall CActivationContext::Activate(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

bool __thiscall CActivationContext::Activate(CActivationContext *this)

{
  int iVar1;
  
  if (DAT_004cab08 == (code *)0x0) {
    return true;
  }
  if ((*(int *)this != -1) && (*(int *)(this + 4) == 0)) {
    iVar1 = (*DAT_004cab08)(*(int *)this,this + 4);
    return (bool)('\x01' - (iVar1 != 1));
  }
  return false;
}

