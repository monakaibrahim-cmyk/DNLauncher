// Address: 0x0046cba9
// Name: ATL::CRowset<ATL::CAccessorBase>::GetData
// Category: MFC_CRT


/* Library Function - Single Match
    public: long __thiscall ATL::CRowset<class ATL::CAccessorBase>::GetData(void)
   
   Library: Visual Studio 2005 Release */

long __thiscall ATL::CRowset<ATL::CAccessorBase>::GetData(CRowset<ATL::CAccessorBase> *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(*(int *)(this + 8) + 4);
  iVar3 = 0;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = FUN_00469ce3(*(void **)(this + 8),uVar4);
      if (((char)uVar2 != '\0') && (iVar3 = FUN_0046b0fd(this,uVar4), iVar3 < 0)) {
        return iVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return iVar3;
}

