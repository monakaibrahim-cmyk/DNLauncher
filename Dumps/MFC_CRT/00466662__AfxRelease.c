// Address: 0x00466662
// Name: _AfxRelease
// Category: MFC_CRT


/* Library Function - Single Match
    unsigned long __stdcall _AfxRelease(struct IUnknown * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

ulong _AfxRelease(IUnknown **param_1)

{
  IUnknown *This;
  ulong uVar1;
  
  This = *param_1;
  if (This == (IUnknown *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*This->lpVtbl->Release)(This);
    *param_1 = (IUnknown *)0x0;
  }
  return uVar1;
}

