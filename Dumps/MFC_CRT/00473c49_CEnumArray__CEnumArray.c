// Address: 0x00473c49
// Name: CEnumArray::CEnumArray
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CEnumArray::CEnumArray(unsigned int,void const *,unsigned int,int)
   
   Library: Visual Studio 2005 Release */

CEnumArray * __thiscall
CEnumArray::CEnumArray(CEnumArray *this,uint param_1,void *param_2,uint param_3,int param_4)

{
  CCmdTarget::CCmdTarget((CCmdTarget *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x38) = XEnumVOID::vftable;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(uint *)(this + 0x20) = param_1;
  *(uint *)(this + 0x30) = param_3;
  *(void **)(this + 0x28) = param_2;
  *(int *)(this + 0x34) = param_4;
  return this;
}

