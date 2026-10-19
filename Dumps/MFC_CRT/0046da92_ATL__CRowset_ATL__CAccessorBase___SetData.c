// Address: 0x0046da92
// Name: ATL::CRowset<ATL::CAccessorBase>::SetData
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __thiscall ATL::CRowset<class ATL::CAccessorBase>::SetData(void)const 
   
   Library: Visual Studio 2005 Release */

long __thiscall ATL::CRowset<ATL::CAccessorBase>::SetData(CRowset<ATL::CAccessorBase> *this)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(*(int *)(this + 8) + 4);
  lVar2 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = FUN_0046d6bd(this,uVar3);
      if (lVar2 < 0) {
        return lVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return lVar2;
}

