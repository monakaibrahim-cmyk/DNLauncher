// Address: 0x0046ac34
// Name: QueryInterface
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: virtual long __stdcall COleControlSite::XOleClientSite::QueryInterface(struct _GUID
   const &,void * *)
    public: virtual long __stdcall COleControlSite::XOleIPSite::QueryInterface(struct _GUID const
   &,void * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void QueryInterface(int param_1,void *param_2,void **param_3)

{
  CCmdTarget::InternalQueryInterface((CCmdTarget *)(param_1 + -200),param_2,param_3);
  return;
}

