// Address: 0x00469eae
// Name: ATL::CDynamicAccessor::TranslateColumnNo
// Category: MFC_CRT


/* Library Function - Single Match
    public: bool __thiscall ATL::CDynamicAccessor::TranslateColumnNo(unsigned long &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall ATL::CDynamicAccessor::TranslateColumnNo(CDynamicAccessor *this,ulong *param_1)

{
  ulong *puVar1;
  uint uVar2;
  
  if (this[0x1c] == (CDynamicAccessor)0x0) {
    if (*param_1 <= (uint)(*(int *)(this + 0xc) + -1 + *(int *)(*(int *)(this + 0x14) + 8))) {
      *param_1 = *param_1 - *(int *)(*(int *)(this + 0x14) + 8);
      return true;
    }
  }
  else {
    uVar2 = 0;
    if (*(uint *)(this + 0xc) != 0) {
      puVar1 = (ulong *)(*(int *)(this + 0x14) + 8);
      do {
        if (*puVar1 == *param_1) {
          *param_1 = uVar2;
          return true;
        }
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 0xc;
      } while (uVar2 < *(uint *)(this + 0xc));
    }
  }
  return false;
}

