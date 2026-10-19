// Address: 0x00472e43
// Name: COleDispatchDriver::AttachDispatch
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall COleDispatchDriver::AttachDispatch(struct IDispatch *,int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall
COleDispatchDriver::AttachDispatch(COleDispatchDriver *this,IDispatch *param_1,int param_2)

{
  ReleaseDispatch(this);
  *(IDispatch **)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}

