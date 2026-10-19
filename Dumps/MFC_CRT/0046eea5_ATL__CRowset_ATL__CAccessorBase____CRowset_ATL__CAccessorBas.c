// Address: 0x0046eea5
// Name: ATL::CRowset<ATL::CAccessorBase>::~CRowset<ATL::CAccessorBase>
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall ATL::CRowset<class ATL::CAccessorBase>::~CRowset<class
   ATL::CAccessorBase>(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __thiscall
ATL::CRowset<ATL::CAccessorBase>::~CRowset<ATL::CAccessorBase>(CRowset<ATL::CAccessorBase> *this)

{
  int *piVar1;
  
  FUN_0046ec91(this);
  piVar1 = *(int **)(this + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

