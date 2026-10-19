// Address: 0x00472d9c
// Name: COleDispatchDriver::ReleaseDispatch
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall COleDispatchDriver::ReleaseDispatch(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall COleDispatchDriver::ReleaseDispatch(COleDispatchDriver *this)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    if (*(int *)(this + 4) != 0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)this = 0;
  }
  return;
}

