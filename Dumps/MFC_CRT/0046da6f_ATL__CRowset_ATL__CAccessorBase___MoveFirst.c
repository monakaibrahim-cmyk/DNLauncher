// Address: 0x0046da6f
// Name: ATL::CRowset<ATL::CAccessorBase>::MoveFirst
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __thiscall ATL::CRowset<class ATL::CAccessorBase>::MoveFirst(void)
   
   Library: Visual Studio 2005 Release */

long __thiscall ATL::CRowset<ATL::CAccessorBase>::MoveFirst(CRowset<ATL::CAccessorBase> *this)

{
  long lVar1;
  
  ReleaseRows(this);
  lVar1 = (**(code **)(**(int **)this + 0x1c))(*(int **)this,0);
  if (-1 < lVar1) {
    lVar1 = MoveNext(this,0,true);
  }
  return lVar1;
}

