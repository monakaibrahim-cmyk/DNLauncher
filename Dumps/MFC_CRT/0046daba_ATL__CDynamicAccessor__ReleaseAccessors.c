// Address: 0x0046daba
// Name: ATL::CDynamicAccessor::ReleaseAccessors
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __thiscall ATL::CDynamicAccessor::ReleaseAccessors(struct IUnknown *)
   
   Library: Visual Studio 2005 Release */

long __thiscall ATL::CDynamicAccessor::ReleaseAccessors(CDynamicAccessor *this,IUnknown *param_1)

{
  long lVar1;
  
  FreeRecordMemory(this,(IRowset *)param_1);
  lVar1 = FUN_0046ce88(this,(int *)param_1);
  return lVar1;
}

