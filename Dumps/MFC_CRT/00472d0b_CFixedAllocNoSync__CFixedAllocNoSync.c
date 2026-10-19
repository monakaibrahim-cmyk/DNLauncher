// Address: 0x00472d0b
// Name: CFixedAllocNoSync::CFixedAllocNoSync
// Category: MFC_CRT


/* Library Function - Single Match
    public: __thiscall CFixedAllocNoSync::CFixedAllocNoSync(unsigned int,unsigned int)
   
   Library: Visual Studio 2005 Release */

void __thiscall
CFixedAllocNoSync::CFixedAllocNoSync(CFixedAllocNoSync *this,uint param_1,uint param_2)

{
  if (param_1 < 4) {
    param_1 = 4;
  }
  if (param_2 < 2) {
    param_2 = 0x40;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(uint *)this = param_1;
  *(uint *)(this + 4) = param_2;
  return;
}

