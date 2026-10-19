// Address: 0x0046ade5
// Name: COleControlSite::XEventSink::QueryInterface
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XEventSink::QueryInterface(struct _GUID const
   &,void * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long COleControlSite::XEventSink::QueryInterface(_GUID *param_1,void **param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 *in_stack_0000000c;
  
  bVar1 = _IsEqualGUID(param_2,&DAT_004ab6fc);
  if (((CONCAT31(extraout_var,bVar1) == 0) &&
      (bVar1 = _IsEqualGUID(param_2,&DAT_004ab72c), CONCAT31(extraout_var_00,bVar1) == 0)) &&
     (bVar1 = _IsEqualGUID(param_2,&param_1[-10].Data2), CONCAT31(extraout_var_01,bVar1) == 0)) {
    return -0x7fffbffe;
  }
  *in_stack_0000000c = param_1;
  (**(code **)(param_1->Data1 + 4))(param_1);
  return 0;
}

