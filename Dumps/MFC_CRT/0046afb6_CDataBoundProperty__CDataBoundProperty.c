// Address: 0x0046afb6
// Name: CDataBoundProperty::CDataBoundProperty
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CDataBoundProperty::CDataBoundProperty(class CDataBoundProperty
   *,long,unsigned short)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CDataBoundProperty::CDataBoundProperty
          (CDataBoundProperty *this,CDataBoundProperty *param_1,long param_2,ushort param_3)

{
  *(undefined4 *)this = 0;
  *(ushort *)(this + 4) = param_3;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(long *)(this + 8) = param_2;
  *(CDataBoundProperty **)(this + 0x18) = param_1;
  return;
}

