// Address: 0x00469bbc
// Name: CArchiveStream::QueryInterface
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual long __stdcall CArchiveStream::QueryInterface(struct _GUID const &,void * *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long CArchiveStream::QueryInterface(_GUID *param_1,void **param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  long lVar2;
  undefined4 *in_stack_0000000c;
  
  bVar1 = _IsEqualGUID(param_2,&DAT_004ab6fc);
  if ((CONCAT31(extraout_var,bVar1) == 0) &&
     (bVar1 = _IsEqualGUID(param_2,&DAT_004ab6cc), CONCAT31(extraout_var_00,bVar1) == 0)) {
    return -0x7fffbffe;
  }
  if (in_stack_0000000c == (undefined4 *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    *in_stack_0000000c = param_1;
    lVar2 = 0;
  }
  return lVar2;
}

