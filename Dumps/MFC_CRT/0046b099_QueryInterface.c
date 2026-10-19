// Address: 0x0046b099
// Name: QueryInterface
// Category: MFC_CRT


/* Library Function - Multiple Matches With Same Base Name
    public: virtual long __stdcall CConnectionPoint::XConnPt::QueryInterface(struct _GUID const
   &,void * *)
    public: virtual long __stdcall COleControlSite::XNotifyDBEvents::QueryInterface(struct _GUID
   const &,void * *)
    public: virtual long __stdcall COleControlSite::XPropertyNotifySink::QueryInterface(struct _GUID
   const &,void * *)
    public: virtual long __stdcall COleControlSite::XRowsetNotify::QueryInterface(struct _GUID const
   &,void * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

undefined4 QueryInterface(int *param_1,void *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  bVar1 = _IsEqualGUID(param_2,&DAT_004ab6fc);
  if ((CONCAT31(extraout_var,bVar1) == 0) &&
     (bVar1 = _IsEqualGUID(param_2,&DAT_004ab98c), CONCAT31(extraout_var_00,bVar1) == 0)) {
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}

