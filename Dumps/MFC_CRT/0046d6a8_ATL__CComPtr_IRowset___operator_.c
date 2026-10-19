// Address: 0x0046d6a8
// Name: ATL::CComPtr<IRowset>::operator=
// Category: MFC_CRT


/* Library Function - Single Match
    public: struct IRowset * __thiscall ATL::CComPtr<struct IRowset>::operator=(struct IRowset *)
   
   Library: Visual Studio 2005 Release */

IRowset * __thiscall ATL::CComPtr<IRowset>::operator=(CComPtr<IRowset> *this,IRowset *param_1)

{
  IRowset *pIVar1;
  
  pIVar1 = *(IRowset **)this;
  if (pIVar1 != param_1) {
    pIVar1 = (IRowset *)FUN_00404940((int *)this,(int *)param_1);
  }
  return pIVar1;
}

