// Address: 0x0046b0dd
// Name: ATL::CRowset<ATL::CAccessorBase>::ReleaseRows
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __thiscall ATL::CRowset<class ATL::CAccessorBase>::ReleaseRows(void)
   
   Library: Visual Studio 2005 Release */

long __thiscall ATL::CRowset<ATL::CAccessorBase>::ReleaseRows(CRowset<ATL::CAccessorBase> *this)

{
  CRowset<ATL::CAccessorBase> *pCVar1;
  long lVar2;
  
  pCVar1 = this + 0xc;
  lVar2 = 0;
  if (*(int *)pCVar1 != 0) {
    lVar2 = (**(code **)(**(int **)this + 0x18))(*(int **)this,1,pCVar1,0,0,0);
    *(int *)pCVar1 = 0;
  }
  return lVar2;
}

