// Address: 0x0045c95f
// Name: CCmdTarget::CCmdTarget
// Category: Utility


/* Library Function - Single Match
    public: __thiscall CCmdTarget::CCmdTarget(void)
   
   Library: Visual Studio 2005 Release */

CCmdTarget * __thiscall CCmdTarget::CCmdTarget(CCmdTarget *this)

{
  AFX_MODULE_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleState();
  *(AFX_MODULE_STATE **)(this + 0x1c) = pAVar1;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}

