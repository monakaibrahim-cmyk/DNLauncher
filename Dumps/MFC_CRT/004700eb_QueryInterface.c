// Address: 0x004700eb
// Name: QueryInterface
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: virtual long __stdcall COleControlContainer::XOleContainer::QueryInterface(struct _GUID
   const &,void * *)
    public: virtual long __stdcall COleControlContainer::XOleIPFrame::QueryInterface(struct _GUID
   const &,void * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void QueryInterface(int param_1,void *param_2,void **param_3)

{
  CCmdTarget::InternalQueryInterface((CCmdTarget *)(param_1 + -0x78),param_2,param_3);
  return;
}

