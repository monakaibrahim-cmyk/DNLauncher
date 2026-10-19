// Address: 0x0046da4d
// Name: ATL::CRowset<ATL::CAccessorBase>::CRowset<ATL::CAccessorBase>
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall ATL::CRowset<class ATL::CAccessorBase>::CRowset<class
   ATL::CAccessorBase>(struct IRowset *)
   
   Library: Visual Studio 2005 Release */

CRowset<ATL::CAccessorBase> * __thiscall
ATL::CRowset<ATL::CAccessorBase>::CRowset<ATL::CAccessorBase>
          (CRowset<ATL::CAccessorBase> *this,IRowset *param_1)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  CComPtr<IRowset>::operator=((CComPtr<IRowset> *)this,param_1);
  return this;
}

