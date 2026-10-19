// Address: 0x00458199
// Name: CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>
// Category: Utility


/* Library Function - Single Match
    public: __thiscall CMFCComObject<class ATL::CAccessibleProxy>::CMFCComObject<class
   ATL::CAccessibleProxy>(void *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

CMFCComObject<ATL::CAccessibleProxy> * __thiscall
CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>
          (CMFCComObject<ATL::CAccessibleProxy> *this,void *param_1)

{
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 4) = vftable;
  *(undefined ***)(this + 0x10) = vftable;
  AfxOleLockApp();
  return this;
}

