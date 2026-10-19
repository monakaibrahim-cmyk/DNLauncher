// Address: 0x00466868
// Name: CCmdTarget::InternalQueryInterface
// Category: MFC_CRT


/* Library Function - Single Match
    public: unsigned long __thiscall CCmdTarget::InternalQueryInterface(void const *,void * *)
   
   Library: Visual Studio 2005 Release */

ulong __thiscall CCmdTarget::InternalQueryInterface(CCmdTarget *this,void *param_1,void **param_2)

{
  IUnknown *pIVar1;
  ulong uVar2;
  
  pIVar1 = GetInterface(this,param_1);
  *param_2 = pIVar1;
  if (pIVar1 == (IUnknown *)0x0) {
    pIVar1 = QueryAggregates(this,param_1);
    *param_2 = pIVar1;
    uVar2 = (-(uint)(pIVar1 != (IUnknown *)0x0) & 0x7fffbffe) + 0x80004002;
  }
  else {
    ExternalAddRef(this);
    uVar2 = 0;
  }
  return uVar2;
}

