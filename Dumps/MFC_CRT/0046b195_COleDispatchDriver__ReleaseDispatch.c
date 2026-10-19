// Address: 0x0046b195
// Name: COleDispatchDriver::ReleaseDispatch
// Category: MFC_CRT


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

