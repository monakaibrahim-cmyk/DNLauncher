// Address: 0x004730e6
// Name: CVariantBoolPair::operator=
// Category: MFC_CRT


/* Library Function - Single Match
    public: class CVariantBoolPair & __thiscall CVariantBoolPair::operator=(class CVariantBoolPair
   const &)
   
   Library: Visual Studio 2005 Release */

CVariantBoolPair * __thiscall
CVariantBoolPair::operator=(CVariantBoolPair *this,CVariantBoolPair *param_1)

{
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)param_1;
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)param_1 = 0;
    }
    *(undefined4 *)this = uVar1;
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  }
  return this;
}

