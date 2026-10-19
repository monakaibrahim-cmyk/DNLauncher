// Address: 0x0046cbe4
// Name: ATL::CRowset<ATL::CAccessorBase>::MoveNext
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __thiscall ATL::CRowset<class ATL::CAccessorBase>::MoveNext(long,bool)
   
   Library: Visual Studio 2005 Release */

long __thiscall
ATL::CRowset<ATL::CAccessorBase>::MoveNext
          (CRowset<ATL::CAccessorBase> *this,long param_1,bool param_2)

{
  long lVar1;
  undefined4 local_c;
  CRowset<ATL::CAccessorBase> *local_8;
  
  local_c = 0;
  local_8 = this;
  ReleaseRows(this);
  local_8 = this + 0xc;
  lVar1 = (**(code **)(**(int **)this + 0x14))
                    (*(int **)this,0,param_1,(uint)param_2 * 2 + -1,&local_c,&local_8);
  if ((lVar1 == 0) && (lVar1 = GetData(this), lVar1 < 0)) {
    ReleaseRows(this);
  }
  return lVar1;
}

