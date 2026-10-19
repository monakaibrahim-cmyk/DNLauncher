// Address: 0x0045d491
// Name: QueryInterface
// Category: Utility


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual long __stdcall CBrowserControlSite::QueryInterface(struct _GUID const &,void
   * *)
    public: virtual long __stdcall CHtmlControlSite::XDocHostUIHandler::QueryInterface(struct _GUID
   const &,void * *)
   
   Library: Visual Studio 2005 Release */

void QueryInterface(int param_1,void *param_2,void **param_3)

{
  CCmdTarget::ExternalQueryInterface((CCmdTarget *)(param_1 + -0xec),param_2,param_3);
  return;
}

