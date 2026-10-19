// Address: 0x0047319f
// Name: CArray<CVariantBoolPair,CVariantBoolPair_const&>::Serialize
// Category: MFC_CRT


/* Library Function - Single Match
    public: virtual void __thiscall CArray<class CVariantBoolPair,class CVariantBoolPair const
   &>::Serialize(class CArchive &)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CArray<CVariantBoolPair,CVariantBoolPair_const&>::Serialize
          (CArray<CVariantBoolPair,CVariantBoolPair_const&> *this,CArchive *param_1)

{
  ulong uVar1;
  
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    uVar1 = CArchive::ReadCount(param_1);
    FUN_00472e5c(this,uVar1,-1);
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(this + 8));
  }
  SerializeElements<CVariantBoolPair>(param_1,*(CVariantBoolPair **)(this + 4),*(int *)(this + 8));
  return;
}

