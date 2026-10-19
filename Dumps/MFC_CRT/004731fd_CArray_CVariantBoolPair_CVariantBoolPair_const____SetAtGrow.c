// Address: 0x004731fd
// Name: CArray<CVariantBoolPair,CVariantBoolPair_const&>::SetAtGrow
// Category: MFC_CRT


/* Library Function - Single Match
    public: void __thiscall CArray<class CVariantBoolPair,class CVariantBoolPair const
   &>::SetAtGrow(int,class CVariantBoolPair const &)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CArray<CVariantBoolPair,CVariantBoolPair_const&>::SetAtGrow
          (CArray<CVariantBoolPair,CVariantBoolPair_const&> *this,int param_1,
          CVariantBoolPair *param_2)

{
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004529e8();
  }
  if (*(int *)(this + 8) <= param_1) {
    FUN_00472e5c(this,param_1 + 1,-1);
  }
  CVariantBoolPair::operator=((CVariantBoolPair *)(param_1 * 0xc + *(int *)(this + 4)),param_2);
  return;
}

