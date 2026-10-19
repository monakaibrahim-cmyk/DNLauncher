// Address: 0x00495a27
// Name: ATL::CSimpleArray<unsigned_short,ATL::CSimpleArrayEqualHelper<unsigned_short>_>::operator[]
// Category: MFC_CRT


/* Library Function - Single Match
    public: unsigned short & __thiscall ATL::CSimpleArray<unsigned short,class
   ATL::CSimpleArrayEqualHelper<unsigned short> >::operator[](int)
   
   Library: Visual Studio 2005 Release */

ushort * __thiscall
ATL::CSimpleArray<unsigned_short,ATL::CSimpleArrayEqualHelper<unsigned_short>_>::operator[]
          (CSimpleArray<unsigned_short,ATL::CSimpleArrayEqualHelper<unsigned_short>_> *this,
          int param_1)

{
  code *pcVar1;
  ushort *puVar2;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 4))) {
    return (ushort *)(*(int *)this + param_1 * 2);
  }
  RaiseException(0xc000008c,1,0,(ULONG_PTR *)0x0);
  pcVar1 = (code *)swi(3);
  puVar2 = (ushort *)(*pcVar1)();
  return puVar2;
}

