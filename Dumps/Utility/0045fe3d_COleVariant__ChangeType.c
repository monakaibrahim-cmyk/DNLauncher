// Address: 0x0045fe3d
// Name: COleVariant::ChangeType
// Category: Utility


/* Library Function - Single Match
    public: void __thiscall COleVariant::ChangeType(unsigned short,struct tagVARIANT *)
   
   Library: Visual Studio 2005 Release */

void __thiscall COleVariant::ChangeType(COleVariant *this,ushort param_1,tagVARIANT *param_2)

{
  HRESULT HVar1;
  
  if (param_2 == (tagVARIANT *)0x0) {
    param_2 = (tagVARIANT *)this;
  }
  if (((COleVariant *)param_2 != this) || (param_1 != *(ushort *)this)) {
    HVar1 = VariantChangeType((VARIANTARG *)this,param_2,0,param_1);
    AfxCheckError(HVar1);
  }
  return;
}

