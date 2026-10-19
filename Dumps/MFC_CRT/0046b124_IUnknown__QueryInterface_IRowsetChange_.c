// Address: 0x0046b124
// Name: IUnknown::QueryInterface<IRowsetChange>
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __stdcall IUnknown::QueryInterface<struct IRowsetChange>(struct IRowsetChange * *)
   
   Library: Visual Studio 2005 Release */

long IUnknown::QueryInterface<IRowsetChange>(IRowsetChange **param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)*param_1)(param_1,&DAT_004a3fcc);
  return lVar1;
}

